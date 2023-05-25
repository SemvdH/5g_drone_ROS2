#include "rclcpp/rclcpp.hpp"

#include <px4_msgs/msg/vehicle_odometry.hpp>
#include <drone_services/msg/lidar_reading.hpp>
#include <drone_services/msg/height_data.hpp>
#include <drone_services/srv/set_vehicle_control.hpp>
#include <drone_services/srv/set_trajectory.hpp>
#include <drone_services/srv/move_position.hpp>

#define _USE_MATH_DEFINES
#include <cmath>

#define LIDAR_SENSOR_FR 0 // front right
#define LIDAR_SENSOR_FL 1 // front left
#define LIDAR_SENSOR_RL 2 // rear left
#define LIDAR_SENSOR_RR 3 // rear right

#define MOVE_DIRECTION_FRONT 0 // front right
#define MOVE_DIRECTION_LEFT 1  // front left
#define MOVE_DIRECTION_BACK 2  // rear left
#define MOVE_DIRECTION_RIGHT 3 // rear right

#define MIN_DISTANCE 1.0 // in meters

#define DEFAULT_CONTROL_MODE 4 // default velocity control bitmask

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

        this->trajectory_client = this->create_client<drone_services::srv::SetTrajectory>("/drone/set_trajectory");
        this->vehicle_control_client = this->create_client<drone_services::srv::SetVehicleControl>("/drone/set_vehicle_control");

        RCLCPP_INFO(this->get_logger(), "waiting for trajectory service...");
        wait_for_service<rclcpp::Client<drone_services::srv::SetTrajectory>::SharedPtr>(this->trajectory_client);
        RCLCPP_INFO(this->get_logger(), "waiting for vehicle control service...");
        wait_for_service<rclcpp::Client<drone_services::srv::SetVehicleControl>::SharedPtr>(this->vehicle_control_client);

        this->trajectory_request = std::make_shared<drone_services::srv::SetTrajectory::Request>();
        this->vehicle_control_request = std::make_shared<drone_services::srv::SetVehicleControl::Request>();

        this->vehicle_control_request->control = DEFAULT_CONTROL_MODE;
        auto control_mode_response = this->vehicle_control_client->async_send_request(this->vehicle_control_request,
                                                                                      std::bind(&PositionChanger::vehicle_control_service_callback, this, std::placeholders::_1));
    }

    void vehicle_control_service_callback(rclcpp::Client<drone_services::srv::SetVehicleControl>::SharedFuture future)
    {
        auto status = future.wait_for(1s);
        if (status == std::future_status::ready)
        {
            RCLCPP_INFO(this->get_logger(), "Vehicle control mode set result: %d", future.get()->success);
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "Service In-Progress...");
        }
    }

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
    void send_trajectory_message()
    {
        this->trajectory_request->values[0] = this->current_speed_x;
        this->trajectory_request->values[1] = this->current_speed_y;
        this->trajectory_request->values[2] = this->current_speed_z;
        this->trajectory_request->yaw = this->current_yaw;
        auto trajectory_response = this->trajectory_client->async_send_request(this->trajectory_request,std::bind(&PositionChanger::trajectory_message_callback, this, std::placeholders::_1));

        // if (rclcpp::spin_until_future_complete(this, trajectory_response) ==
        //     rclcpp::FutureReturnCode::SUCCESS)
        // {
        //     RCLCPP_INFO(this->get_logger(), "Trajectory set result: %d", trajectory_response.get()->success);
        // }
        // else
        // {
        //     RCLCPP_ERROR(this->get_logger(), "Failed to call service to set trajectory");
        // }
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
                                                                                                              : -(MIN_DISTANCE - std::min(this->lidar_sensor_values[LIDAR_SENSOR_FL], this->lidar_sensor_values[LIDAR_SENSOR_RL]));
        collision_prevention_weights[MOVE_DIRECTION_BACK] = this->move_direction_allowed[MOVE_DIRECTION_BACK] ? 0
                                                                                                              : -(MIN_DISTANCE - std::min(this->lidar_sensor_values[LIDAR_SENSOR_RL], this->lidar_sensor_values[LIDAR_SENSOR_RR]));
        collision_prevention_weights[MOVE_DIRECTION_RIGHT] = this->move_direction_allowed[MOVE_DIRECTION_RIGHT] ? 0
                                                                                                                : -(MIN_DISTANCE - std::min(this->lidar_sensor_values[LIDAR_SENSOR_RR], this->lidar_sensor_values[LIDAR_SENSOR_FR]));
    }

    void handle_lidar_message(const drone_services::msg::LidarReading::SharedPtr message)
    {

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

    void handle_odometry_message(const px4_msgs::msg::VehicleOdometry::SharedPtr message)
    {
        Quaternion q = {message->q[0], message->q[1], message->q[2], message->q[3]};
        this->current_yaw = get_yaw_angle(q);
    }

    void handle_move_position_request(
        const std::shared_ptr<rmw_request_id_t> request_header,
        const std::shared_ptr<drone_services::srv::MovePosition::Request> request,
        const std::shared_ptr<drone_services::srv::MovePosition::Response> response)
    {
        RCLCPP_INFO(this->get_logger(), "Incoming request\nfront_back: %f\nleft_right: %f\nup_down: %f\nangle: %f", request->front_back, request->left_right, request->up_down, request->angle);
        // TODO add check_move_direction_allowed results to this calculation
        this->current_yaw += request->angle * (M_PI / 180.0); // get the angle in radians
        get_x_y_with_rotation(request->front_back, request->left_right, this->current_yaw, &this->current_speed_x, &this->current_speed_y);
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
     * @brief Get the new x and y coordinates after a rotation of yaw radians
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
    rclcpp::Subscription<drone_services::msg::LidarReading>::SharedPtr lidar_subscription;
    rclcpp::Subscription<px4_msgs::msg::VehicleOdometry>::SharedPtr odometry_subscription;

    rclcpp::Client<drone_services::srv::SetTrajectory>::SharedPtr trajectory_client;
    rclcpp::Client<drone_services::srv::SetVehicleControl>::SharedPtr vehicle_control_client;

    rclcpp::Service<drone_services::srv::MovePosition>::SharedPtr move_position_service;

    drone_services::srv::SetTrajectory::Request::SharedPtr trajectory_request;
    drone_services::srv::SetVehicleControl::Request::SharedPtr vehicle_control_request;

    float lidar_sensor_values[4]; // last distance measured by the lidar sensors
    float lidar_imu_readings[4];  // last imu readings from the lidar sensors
    float current_yaw = 0;       // in radians
    float current_speed_x = 0;
    float current_speed_y = 0;
    float current_speed_z = 0;
    bool move_direction_allowed[4] = {true};
    float collision_prevention_weights[4] = {0};

    template <class T>
    void wait_for_service(T client)
    {
        while (!client->wait_for_service(1s))
        {
            if (!rclcpp::ok())
            {
                RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
                return;
            }
            RCLCPP_INFO(this->get_logger(), "service not available, waiting again...");
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
