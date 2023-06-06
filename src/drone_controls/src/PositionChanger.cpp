#include "rclcpp/rclcpp.hpp"

#include <px4_msgs/msg/vehicle_odometry.hpp>
#include <drone_services/msg/lidar_reading.hpp>
#include <drone_services/msg/height_data.hpp>
#include <drone_services/srv/set_vehicle_control.hpp>
#include <drone_services/srv/set_trajectory.hpp>
#include <drone_services/srv/set_attitude.hpp>
#include <drone_services/srv/move_position.hpp>
#include <drone_services/srv/ready_drone.hpp>
#include <drone_services/srv/arm_drone.hpp>

#include <drone_services/srv/enable_failsafe.hpp>
#include <drone_services/msg/failsafe_msg.hpp>

#define _USE_MATH_DEFINES
#include <cmath>

#define LIDAR_SENSOR_FR 0 // front right
#define LIDAR_SENSOR_FL 1 // front left
#define LIDAR_SENSOR_RL 2 // rear left
#define LIDAR_SENSOR_RR 3 // rear right

#define MOVE_DIRECTION_FRONT 0 // position in array for moving forward
#define MOVE_DIRECTION_LEFT 1  // position in array for moving left
#define MOVE_DIRECTION_BACK 2  // position in array for moving backward
#define MOVE_DIRECTION_RIGHT 3 // position in array for moving right

#define MIN_DISTANCE 1.0 // in meters

#define CONTROL_MODE_ATTITUDE 4 // attitude control mode bitmask
#define DEFAULT_CONTROL_MODE 16 // default velocity control bitmask
// converts bitmask control mode to control mode used by PX4Controller
#define PX4_CONTROLLER_CONTROL_MODE(x) ((x) == 4 ? 1 : ((x) == 16 ? 2 : ((x) == 32 ? 3 : -1)))

using namespace std::chrono_literals;

struct Quaternion
{
    float w, x, y, z;
};

class PositionChanger : public rclcpp::Node
{
public:
    PositionChanger() : Node("position_changer")
    {
        rmw_qos_profile_t qos_profile = rmw_qos_profile_sensor_data;
        auto qos = rclcpp::QoS(rclcpp::QoSInitialization(qos_profile.history, 5), qos_profile);

        this->lidar_subscription = this->create_subscription<drone_services::msg::LidarReading>("/drone/object_detection", qos, std::bind(&PositionChanger::handle_lidar_message, this, std::placeholders::_1));
        // vehicle_local_position_subscription_ = this->create_subscription<px4_msgs::msg::VehicleLocalPosition>("/fmu/out/vehicle_local_position", qos, std::bind(&PX4Controller::on_local_position_receive, this, std::placeholders::_1));
        this->odometry_subscription = this->create_subscription<px4_msgs::msg::VehicleOdometry>("/fmu/out/vehicle_odometry", qos, std::bind(&PositionChanger::handle_odometry_message, this, std::placeholders::_1));
        this->move_position_service = this->create_service<drone_services::srv::MovePosition>("/drone/move_position", std::bind(&PositionChanger::handle_move_position_request, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));
        this->ready_drone_service = this->create_service<drone_services::srv::ReadyDrone>("/drone/ready_drone", std::bind(&PositionChanger::handle_ready_drone_request, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));

        this->failsafe_publisher = this->create_publisher<drone_services::msg::FailsafeMsg>("/drone/failsafe", 10);

        this->trajectory_client = this->create_client<drone_services::srv::SetTrajectory>("/drone/set_trajectory");
        this->attitude_client = this->create_client<drone_services::srv::SetAttitude>("/drone/set_attitude");
        this->vehicle_control_client = this->create_client<drone_services::srv::SetVehicleControl>("/drone/set_vehicle_control");
        this->failsafe_client = this->create_client<drone_services::srv::EnableFailsafe>("/drone/enable_failsafe");
        this->arm_drone_client = this->create_client<drone_services::srv::ArmDrone>("/drone/arm");

        RCLCPP_INFO(this->get_logger(), "waiting for trajectory service...");
        wait_for_service<rclcpp::Client<drone_services::srv::SetTrajectory>::SharedPtr>(this->trajectory_client, "/drone/set_trajectory");
        RCLCPP_INFO(this->get_logger(), "waiting for attitude service...");
        wait_for_service<rclcpp::Client<drone_services::srv::SetAttitude>::SharedPtr>(this->attitude_client, "/drone/set_attitude");
        RCLCPP_INFO(this->get_logger(), "waiting for vehicle control service...");
        wait_for_service<rclcpp::Client<drone_services::srv::SetVehicleControl>::SharedPtr>(this->vehicle_control_client, "/drone/set_vehicle_control");
        RCLCPP_INFO(this->get_logger(), "waiting for failsafe service...");
        wait_for_service<rclcpp::Client<drone_services::srv::EnableFailsafe>::SharedPtr>(this->failsafe_client, "/drone/enable_failsafe");
        RCLCPP_INFO(this->get_logger(), "waiting for arm service...");
        wait_for_service<rclcpp::Client<drone_services::srv::ArmDrone>::SharedPtr>(this->arm_drone_client, "/drone/arm");

        this->trajectory_request = std::make_shared<drone_services::srv::SetTrajectory::Request>();
        this->attitude_request = std::make_shared<drone_services::srv::SetAttitude::Request>();
        this->vehicle_control_request = std::make_shared<drone_services::srv::SetVehicleControl::Request>();
        this->failsafe_request = std::make_shared<drone_services::srv::EnableFailsafe::Request>();
        this->arm_drone_request = std::make_shared<drone_services::srv::ArmDrone::Request>();

        lidar_health_timer = this->create_wall_timer(1s, std::bind(&PositionChanger::check_lidar_health, this));

        this->vehicle_control_request->control = DEFAULT_CONTROL_MODE;
        auto control_mode_response = this->vehicle_control_client->async_send_request(this->vehicle_control_request,
                                                                                      std::bind(&PositionChanger::vehicle_control_service_callback, this, std::placeholders::_1));
    }

    /**
     * @brief callback function for the vehicle control service
     *
     * @param future the future object that holds the result of the service call
     */
    void vehicle_control_service_callback(rclcpp::Client<drone_services::srv::SetVehicleControl>::SharedFuture future)
    {
        auto status = future.wait_for(1s);
        if (status == std::future_status::ready)
        {
            RCLCPP_INFO(this->get_logger(), "Vehicle control mode set result: %d", future.get()->success);
            if (this->got_ready_drone_request && future.get()->success)
            {
                auto arm_response = this->arm_drone_client->async_send_request(this->arm_drone_request, std::bind(&PositionChanger::arm_drone_service_callback, this, std::placeholders::_1));
            }
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "Service In-Progress...");
        }
    }

    void arm_drone_service_callback(rclcpp::Client<drone_services::srv::ArmDrone>::SharedFuture future)
    {
        auto status = future.wait_for(1s);
        if (status == std::future_status::ready)
        {

            RCLCPP_INFO(this->get_logger(), "Arm result: %d", future.get()->success);
            if (this->got_ready_drone_request)
            {
                this->got_ready_drone_request = false;

                this->attitude_request->pitch = 0.0;
                this->attitude_request->yaw = 0.0;
                this->attitude_request->roll = 0.0;
                this->attitude_request->thrust = 0.15;
                auto attitude_response = this->attitude_client->async_send_request(this->attitude_request, std::bind(&PositionChanger::attitude_message_callback, this, std::placeholders::_1));
            }
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "Service In-Progress...");
        }
    }

    void attitude_message_callback(rclcpp::Client<drone_services::srv::SetAttitude>::SharedFuture future)
    {
        auto status = future.wait_for(1s);
        if (status == std::future_status::ready)
        {
            RCLCPP_INFO(this->get_logger(), "Attitude set result: %d", future.get()->success);
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "Service In-Progress...");
        }
    }

    /**
     * @brief callback function for the trajectory service
     *
     * @param future the future object that holds the result of the service call
     */
    void trajectory_message_callback(rclcpp::Client<drone_services::srv::SetTrajectory>::SharedFuture future)
    {
        auto status = future.wait_for(1s);
        if (status == std::future_status::ready)
        {
            RCLCPP_INFO(this->get_logger(), "Seet trajectory set result: %d", future.get()->success);
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "Service In-Progress...");
        }
    }

    /**
     * @brief callback function for the failsafe service
     *
     * @param future the future object that holds the result of the service call
     */
    void failsafe_message_callback(rclcpp::Client<drone_services::srv::EnableFailsafe>::SharedFuture future)
    {
        auto status = future.wait_for(1s);
        if (status == std::future_status::ready)
        {
            RCLCPP_INFO(this->get_logger(), "Set failsafe enabled: %d, message: %s", future.get()->enabled, future.get()->message);
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "Service In-Progress...");
        }
    }

    /**
     * @brief sends the current x, y and z speed and yaw to the trajectory service
     *
     */
    void send_trajectory_message()
    {
        check_move_direction_allowed();
        this->trajectory_request->values[0] = this->current_speed_x;
        this->trajectory_request->values[1] = this->current_speed_y;
        this->trajectory_request->values[2] = this->current_speed_z;
        this->trajectory_request->yaw = this->current_yaw;
        this->trajectory_request->control_mode = PX4_CONTROLLER_CONTROL_MODE(DEFAULT_CONTROL_MODE);
        RCLCPP_INFO(this->get_logger(), "Sending trajectory message\nx: %f\ny: %f\nz: %f\nyaw: %f", this->current_speed_x, this->current_speed_y, this->current_speed_z, this->current_yaw);
        auto trajectory_response = this->trajectory_client->async_send_request(this->trajectory_request, std::bind(&PositionChanger::trajectory_message_callback, this, std::placeholders::_1));
    }

    /**
     * @brief Enables the failsafe with the specified message
     *
     * @param message the message indicating the cause of the failsafe
     */
    void enable_failsafe(std::u16string message)
    {
        this->failsafe_enabled = true;
        this->failsafe_request->message = message;
        auto failsafe_response = this->failsafe_client->async_send_request(this->failsafe_request, std::bind(&PositionChanger::failsafe_message_callback, this, std::placeholders::_1));
    }

    /**
     * @brief applies the collision prevention weights to the current x and y speed if the drone is too close to an object.
     * It moves the drone away from the object until it is far enough away
     *
     */
    void apply_collision_weights()
    {
        if (this->current_speed_x > 0) // if moving forward
        {
            if (!this->move_direction_allowed[MOVE_DIRECTION_FRONT])
            {
                this->current_speed_x = collision_prevention_weights[MOVE_DIRECTION_FRONT];
            }
        }
        else // moving backward
        {
            if (!this->move_direction_allowed[MOVE_DIRECTION_BACK])
            {
                this->current_speed_x = collision_prevention_weights[MOVE_DIRECTION_BACK];
            }
        }
        if (this->current_speed_y > 0) // moving right
        {
            if (!this->move_direction_allowed[MOVE_DIRECTION_RIGHT])
            {
                this->current_speed_y = collision_prevention_weights[MOVE_DIRECTION_RIGHT];
            }
        }
        else // moving left
        {
            if (!this->move_direction_allowed[MOVE_DIRECTION_LEFT])
            {
                this->current_speed_y = collision_prevention_weights[MOVE_DIRECTION_LEFT];
            }
        }
    }

    /**
     * @brief checks for every direction is an object is too close and if we can move in that direction.
     * If the object is too close to the drone, calculate the amount we need to move away from it
     */
    void check_move_direction_allowed()
    {
        this->move_direction_allowed[MOVE_DIRECTION_FRONT] = this->lidar_sensor_values[LIDAR_SENSOR_FR] > MIN_DISTANCE && this->lidar_sensor_values[LIDAR_SENSOR_FL] > MIN_DISTANCE;
        this->move_direction_allowed[MOVE_DIRECTION_LEFT] = this->lidar_sensor_values[LIDAR_SENSOR_FL] > MIN_DISTANCE && this->lidar_sensor_values[LIDAR_SENSOR_RL] > MIN_DISTANCE;
        this->move_direction_allowed[MOVE_DIRECTION_BACK] = this->lidar_sensor_values[LIDAR_SENSOR_RL] > MIN_DISTANCE && this->lidar_sensor_values[LIDAR_SENSOR_RR] > MIN_DISTANCE;
        this->move_direction_allowed[MOVE_DIRECTION_RIGHT] = this->lidar_sensor_values[LIDAR_SENSOR_RR] > MIN_DISTANCE && this->lidar_sensor_values[LIDAR_SENSOR_FR] > MIN_DISTANCE;

        // calculate the amount we need to move away from the object to be at the minimum distance
        collision_prevention_weights[MOVE_DIRECTION_FRONT] = this->move_direction_allowed[MOVE_DIRECTION_FRONT] ? 0
                                                                                                                : -(MIN_DISTANCE - std::min(this->lidar_sensor_values[LIDAR_SENSOR_FR], this->lidar_sensor_values[LIDAR_SENSOR_FL]));
        collision_prevention_weights[MOVE_DIRECTION_LEFT] = this->move_direction_allowed[MOVE_DIRECTION_LEFT] ? 0
                                                                                                              : (MIN_DISTANCE - std::min(this->lidar_sensor_values[LIDAR_SENSOR_FL], this->lidar_sensor_values[LIDAR_SENSOR_RL]));
        collision_prevention_weights[MOVE_DIRECTION_BACK] = this->move_direction_allowed[MOVE_DIRECTION_BACK] ? 0
                                                                                                              : (MIN_DISTANCE - std::min(this->lidar_sensor_values[LIDAR_SENSOR_RL], this->lidar_sensor_values[LIDAR_SENSOR_RR]));
        collision_prevention_weights[MOVE_DIRECTION_RIGHT] = this->move_direction_allowed[MOVE_DIRECTION_RIGHT] ? 0
                                                                                                                : -(MIN_DISTANCE - std::min(this->lidar_sensor_values[LIDAR_SENSOR_RR], this->lidar_sensor_values[LIDAR_SENSOR_FR]));

        apply_collision_weights();
    }

    /**
     * @brief Callback function for receiving new LIDAR data
     *
     * @param message the message containing the LIDAR data
     */
    void handle_lidar_message(const drone_services::msg::LidarReading::SharedPtr message)
    {
        this->has_received_first_lidar_message = true;

        this->received_lidar_message = true;
        if (message->sensor_1 > 0)
        {
            this->lidar_sensor_values[LIDAR_SENSOR_FR] = message->sensor_1;
        }
        if (message->sensor_2 > 0)
        {
            this->lidar_sensor_values[LIDAR_SENSOR_FL] = message->sensor_2;
        }
        if (message->sensor_3 > 0)
        {
            this->lidar_sensor_values[LIDAR_SENSOR_RL] = message->sensor_3;
        }
        if (message->sensor_4 > 0)
        {
            this->lidar_sensor_values[LIDAR_SENSOR_RR] = message->sensor_4;
        }

        for (int i = 0; i < 4; i++)
        {
            this->lidar_imu_readings[i] = message->imu_data[i];
        }

        check_move_direction_allowed();
    }

    /**
     * @brief Checks if the LIDAR is still sending messages. If not, enable failsafe
     *
     */
    void check_lidar_health()
    {
        if (this->has_received_first_lidar_message)
        {
            if (!this->received_lidar_message)
            {
                RCLCPP_WARN(this->get_logger(), "Lidar not sending messages, enabling failsafe");
                enable_failsafe(u"No healthy connection to LIDAR! Check the LIDAR USB cable and restart the drone.");
            }
        }
        this->received_lidar_message = false;
    }

    /**
     * @brief Callback function for receiving the odometry data from the drone.
     * This is used to get the current yaw angle before the drone takes off,
     * to make sure it doesn't want to spin to a certain angle while taking off.
     *
     * @param message the message containing the odometry data
     */
    void handle_odometry_message(const px4_msgs::msg::VehicleOdometry::SharedPtr message)
    {
        Quaternion q = {message->q[0], message->q[1], message->q[2], message->q[3]};
        this->current_yaw = get_yaw_angle(q);
    }

    /**
     * @brief Callback function for when the /drone/move_position service is called
     *
     * @param request_header the header of the request
     * @param request the request containing the new parameters to move to
     * @param response the response to send back. true if the request was successful, false otherwise
     */
    void handle_move_position_request(
        const std::shared_ptr<rmw_request_id_t> request_header,
        const std::shared_ptr<drone_services::srv::MovePosition::Request> request,
        const std::shared_ptr<drone_services::srv::MovePosition::Response> response)
    {
        if (!this->failsafe_enabled)
        {
            if (!this->has_received_first_lidar_message)
            {
                this->enable_failsafe(u"Waiting for LIDAR timed out! Check the LIDAR USB connection and consider restarting the drone.");
                return;
            }
            RCLCPP_INFO(this->get_logger(), "Incoming request\nfront_back: %f\nleft_right: %f\nup_down: %f\nangle: %f", request->front_back, request->left_right, request->up_down, request->angle);
            if (request->angle > 360 || request->angle < -360)
            {
                RCLCPP_ERROR(this->get_logger(), "Angle is not in range [-360, 360]");
                response->success = false;
                return;
            }
            if (this->vehicle_control_request->control != DEFAULT_CONTROL_MODE)
            {
                this->vehicle_control_request->control = DEFAULT_CONTROL_MODE;
                auto control_mode_response = this->vehicle_control_client->async_send_request(this->vehicle_control_request,
                                                                                              std::bind(&PositionChanger::vehicle_control_service_callback, this, std::placeholders::_1));
            }
            this->current_yaw += request->angle * (M_PI / 180.0); // get the angle in radians
            this->current_speed_z = request->up_down;
            get_x_y_with_rotation(request->front_back, request->left_right, this->current_yaw, &this->current_speed_x, &this->current_speed_y);
            RCLCPP_INFO(this->get_logger(), "Calculated speed x: %f, y: %f", this->current_speed_x, this->current_speed_y);
            send_trajectory_message();
            response->success = true;
        }
        else
        {
            response->success = false;
        }
    }

    void handle_ready_drone_request(
        const std::shared_ptr<rmw_request_id_t> request_header,
        const std::shared_ptr<drone_services::srv::ReadyDrone::Request> request,
        const std::shared_ptr<drone_services::srv::ReadyDrone::Response> response)
    {
        if (this->failsafe_enabled)
        {
            response->success = false;
            return;
        }
        if (!this->has_received_first_lidar_message)
        {
            this->enable_failsafe(u"Waiting for LIDAR timed out! Check the LIDAR USB connection and consider restarting the drone.");
            response->success = false;
            return;
        }
        this->got_ready_drone_request = true;
        this->vehicle_control_request->control = CONTROL_MODE_ATTITUDE;
        auto control_mode_response = this->vehicle_control_client->async_send_request(this->vehicle_control_request,
                                                                                      std::bind(&PositionChanger::vehicle_control_service_callback, this, std::placeholders::_1));
        // TODO set motors to spin at 30%
        response->success = true;
    }

    /**
     * @brief Get the yaw angle from a specified normalized quaternion.
     * Uses the theory from https://en.wikipedia.org/wiki/Conversion_between_quaternions_and_Euler_angles
     *
     * @param q the quaternion that holds the rotation
     * @return the yaw angle in radians
     */
    static float get_yaw_angle(Quaternion q)
    {
        float siny_cosp = 2 * (q.w * q.z + q.x * q.y);
        float cosy_cosp = 1 - 2 * (q.y * q.y + q.z * q.z);
        return std::atan2(siny_cosp, cosy_cosp);
    }

    /**
     * @brief Get the new x and y coordinates after a rotation of yaw radians.
     * Uses the standard rotation matrix: https://en.wikipedia.org/wiki/Rotation_matrix
     *
     * @param x the original x coordinate
     * @param y the original y coordinate
     * @param yaw the angle to rotate by in radians
     * @param x_out the resulting x coordinate
     * @param y_out the resulting y coordinate
     */
    static void get_x_y_with_rotation(float x, float y, float yaw, float *x_res, float *y_res)
    {
        *x_res = x * std::cos(yaw) - y * std::sin(yaw);
        *y_res = x * std::sin(yaw) + y * std::cos(yaw);
    }

private:
    rclcpp::Publisher<drone_services::msg::FailsafeMsg>::SharedPtr failsafe_publisher;
    rclcpp::Subscription<drone_services::msg::LidarReading>::SharedPtr lidar_subscription;
    rclcpp::Subscription<px4_msgs::msg::VehicleOdometry>::SharedPtr odometry_subscription;

    rclcpp::Client<drone_services::srv::SetTrajectory>::SharedPtr trajectory_client;
    rclcpp::Client<drone_services::srv::SetAttitude>::SharedPtr attitude_client;
    rclcpp::Client<drone_services::srv::SetVehicleControl>::SharedPtr vehicle_control_client;
    rclcpp::Client<drone_services::srv::EnableFailsafe>::SharedPtr failsafe_client;
    rclcpp::Client<drone_services::srv::ArmDrone>::SharedPtr arm_drone_client;

    rclcpp::Service<drone_services::srv::MovePosition>::SharedPtr move_position_service;
    rclcpp::Service<drone_services::srv::ReadyDone>::SharedPtr ready_drone_service;

    rclcpp::TimerBase::SharedPtr lidar_health_timer;

    drone_services::srv::SetTrajectory::Request::SharedPtr trajectory_request;
    drone_services::srv::SetAttitude::Request::SharedPtr attitude_request;
    drone_services::srv::SetVehicleControl::Request::SharedPtr vehicle_control_request;
    drone_services::srv::EnableFailsafe::Request::SharedPtr failsafe_request;
    drone_services::srv::ArmDrone::Request::SharedPtr arm_drone_request;

    float lidar_sensor_values[4]{MIN_DISTANCE}; // last distance measured by the lidar sensors
    float lidar_imu_readings[4];                // last imu readings from the lidar sensors
    float current_yaw = 0;                      // in radians
    float current_speed_x = 0;
    float current_speed_y = 0;
    float current_speed_z = 0;
    bool move_direction_allowed[4] = {true};     // whether the drone can move in a certain direction
    float collision_prevention_weights[4] = {0}; // the amount to move away from an object in a certain direction if the drone is too close
    bool failsafe_enabled = false;
    bool received_lidar_message = false;
    int lidar_health_checks = 0;
    bool has_received_first_lidar_message = false;
    bool got_ready_drone_request = false;

    /**
     * @brief waits for a service to be available
     *
     * @tparam T an rclcpp::Client object
     * @param client the client object to wait for the service
     */
    template <class T>
    void wait_for_service(T client, std::string service_name)
    {
        while (!client->wait_for_service(1s))
        {
            if (!rclcpp::ok())
            {
                RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
                return;
            }
            RCLCPP_INFO(this->get_logger(), "service not available, waiting again on service %s", service_name.c_str());
        }
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PositionChanger>());
    rclcpp::shutdown();
    return 0;
}
