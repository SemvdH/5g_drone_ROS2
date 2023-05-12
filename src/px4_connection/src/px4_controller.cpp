/**
 * @file px4_controller.cpp
 * @author Sem van der Hoeven (sem.hoeven@gmail.com)
 * @brief Controller node to contol the PX4 using attitude or trajectory setpoints. 
 * It subscribes to the /drone/set_attitude topic to receive control commands
 */

#include <chrono>
#include <math.h>

#include "rclcpp/rclcpp.hpp"

#include <px4_msgs/msg/vehicle_attitude_setpoint.hpp>
#include <px4_msgs/msg/trajectory_setpoint.hpp>
#include <px4_msgs/msg/vehicle_command.hpp>
#include <px4_msgs/msg/vehicle_control_mode.hpp>
#include <px4_msgs/msg/vehicle_attitude.hpp>

#include <drone_services/srv/set_attitude.hpp>

#include <std_srvs/srv/empty.hpp>

#include "drone_control_modes.h"

#define D_SPEED(x) -x - 9.81

using namespace std::chrono_literals;

class PX4Controller : public rclcpp::Node
{
public:
    PX4Controller() : Node("px4_controller")
    {

        rmw_qos_profile_t qos_profile = rmw_qos_profile_sensor_data;
        auto qos = rclcpp::QoS(rclcpp::QoSInitialization(qos_profile.history, 5), qos_profile);

        // create a publisher on the vehicle attitude setpoint topic
        vehicle_setpoint_publisher_ = this->create_publisher<px4_msgs::msg::VehicleAttitudeSetpoint>("/fmu/in/vehicle_attitude_setpoint", 10);
        vehicle_command_publisher_ = this->create_publisher<px4_msgs::msg::VehicleCommand>("/fmu/in/vehicle_command", 10);
        trajectory_setpoint_publisher = this->create_publisher<px4_msgs::msg::TrajectorySetpoint>("/fmu/in/trajectory_setpoint", 10);
        // offboard_control_mode_publisher_ = this->create_publisher<px4_msgs::msg::OffboardControlMode>("/fmu/in/offboard_control_mode", 10);

        vehicle_attitude_subscription_ = this->create_subscription<px4_msgs::msg::VehicleAttitude>("/fmu/out/vehicle_attitude", qos, std::bind(&PX4Controller::on_attitude_receive, this, std::placeholders::_1));

        set_attitude_service_ = this->create_service<drone_services::srv::SetAttitude>("drone/set_attitude", std::bind(&PX4Controller::set_setpoint, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));
        disarm_service_ = this->create_service<std_srvs::srv::Empty>("drone/disarm", std::bind(&PX4Controller::handle_disarm_request, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));

        // create timer to send vehicle attitude setpoints every second
        timer_ = this->create_wall_timer(100ms, std::bind(&PX4Controller::send_setpoint, this));

        start_time_ = this->get_clock()->now().seconds();
        RCLCPP_INFO(this->get_logger(), "finished initializing at %f seconds.", start_time_);
    }

private:
    rclcpp::Publisher<px4_msgs::msg::VehicleAttitudeSetpoint>::SharedPtr vehicle_setpoint_publisher_;
    rclcpp::Publisher<px4_msgs::msg::TrajectorySetpoint>::SharedPtr trajectory_setpoint_publisher;
    rclcpp::Publisher<px4_msgs::msg::VehicleCommand>::SharedPtr vehicle_command_publisher_;
    rclcpp::Subscription<px4_msgs::msg::VehicleAttitude>::SharedPtr vehicle_attitude_subscription_;

    rclcpp::Service<drone_services::srv::SetAttitude>::SharedPtr set_attitude_service_;
    rclcpp::Service<std_srvs::srv::Empty>::SharedPtr disarm_service_;

    // rclcpp::Publisher<px4_msgs::msg::OffboardControlMode>::SharedPtr offboard_control_mode_publisher_;

    rclcpp::TimerBase::SharedPtr timer_;
    double start_time_;
    bool has_sent_status = false;
    bool flying = false;
    bool armed = false;
    bool has_swithed = false;
    int setpoint_count = 0;
    float thrust = 0.0;
    bool ready_to_fly = false;
    float cur_yaw = 0;
    bool new_setpoint = false; // for printing new q_d when a new setpoint has been received

    float last_setpoint[3] = {0, 0, 0};
    float last_angle = 0;
    float last_thrust = 0;

    float base_q[4] = {0, 0, 0, 0};
    int base_q_amount = 0;

    // result quaternion
    std::array<float, 4> q = {0, 0, 0, 0};

    void set_setpoint(
        const std::shared_ptr<rmw_request_id_t> request_header,
        const std::shared_ptr<drone_services::srv::SetAttitude::Request> request,
        const std::shared_ptr<drone_services::srv::SetAttitude::Response> response)
    {
        if (armed)
        {
            if (request->yaw == 0 && request->pitch == 0 && request->roll == 0 && request->thrust == 0)
            {
                last_setpoint[0] = degrees_to_radians(request->yaw);
                last_setpoint[1] = degrees_to_radians(request->pitch);
                last_setpoint[2] = degrees_to_radians(request->roll);
                last_thrust = request->thrust;
                RCLCPP_INFO(this->get_logger(), "STOPPING MOTORS");
            }
            else
            {
                last_setpoint[0] += degrees_to_radians(request->yaw);
                last_setpoint[1] += degrees_to_radians(request->pitch);
                last_setpoint[2] += degrees_to_radians(request->roll);
                last_thrust += request->thrust;
                if (last_thrust > 1)
                    last_thrust = 1;
                else if (last_thrust < 0)
                    last_thrust = 0;
            }

            RCLCPP_INFO(this->get_logger(), "got values: yaw:%f pitch:%f roll:%f thrust:%f", request->yaw, request->pitch, request->roll, request->thrust);
            RCLCPP_INFO(this->get_logger(), "New setpoint: yaw:%f pitch:%f roll:%f thrust:%f", last_setpoint[0], last_setpoint[1], last_setpoint[2], last_thrust);
            new_setpoint = true;

            response->status = 0;
        }
        else
        {
            last_thrust = 0;
            last_setpoint[0] = 0;
            last_setpoint[1] = 0;
            last_setpoint[2] = 0;
            response->status = 1;
        }
    }

    /**
     * @brief disarms the drone when a call to the disarm service is made
     *
     * @param request_header the header for the service request
     * @param request the request (empty)
     * @param response the response (empty)
     */
    void handle_disarm_request(
        const std::shared_ptr<rmw_request_id_t> request_header,
        const std::shared_ptr<std_srvs::srv::Empty::Request> request,
        const std::shared_ptr<std_srvs::srv::Empty::Response> response)
    {
        RCLCPP_INFO(this->get_logger(), "Got disarm request...");

        if (armed)
        {
            armed = false;
            publish_vehicle_command(px4_msgs::msg::VehicleCommand::VEHICLE_CMD_COMPONENT_ARM_DISARM, 0.0, 0);
        }
    }

    void send_trajectory_setpoint()
    {

        auto msg = px4_msgs::msg::TrajectorySetpoint();
        if (this->get_clock()->now().seconds() - start_time_ < 10)
        {
            msg.acceleration[0] = 0;
            msg.acceleration[1] = 0;
            msg.acceleration[2] = D_SPEED(10);
            msg.yawspeed = 0;
            msg.yaw = -3.14;
        }
        else
        {
            if (!has_swithed)
            {
                RCLCPP_INFO(this->get_logger(), "waiting for service input...");
                has_swithed = true;
            }

            msg.acceleration[0] = last_setpoint[0];
            msg.acceleration[1] = last_setpoint[1];
            msg.acceleration[2] = D_SPEED(last_setpoint[2]);
            msg.yawspeed = 0.5;
        }

        msg.timestamp = this->get_clock()->now().nanoseconds() / 1000;

        trajectory_setpoint_publisher->publish(msg);
    }

    void send_attitude_setpoint()
    {

        // set message to enable attitude
        auto msg = px4_msgs::msg::VehicleAttitudeSetpoint();

        // if (this->get_clock()->now().seconds() - start_time_ < 30)
        // {
        // msg.yaw_body = last_setpoint[0];
        // msg.pitch_body = last_setpoint[1];
        // msg.roll_body = last_setpoint[2];
        // move up?
        msg.thrust_body[0] = 0; // north
        msg.thrust_body[1] = 0; // east
        msg.thrust_body[2] = -last_thrust;

        calculate_quaternion(q, last_setpoint[0], last_setpoint[1], last_setpoint[2]);
        // RCLCPP_INFO(this->get_logger(), "yaw:%f pitch:%f roll:%f thrust:%f", q.at(0), q.at(1), q.at(2), last_thrust);
        // }
        // else
        // {
        //     if (flying)
        //     {
        //         publish_vehicle_command(px4_msgs::msg::VehicleCommand::VEHICLE_CMD_COMPONENT_ARM_DISARM, 0.0, 0);
        //         flying = false;
        //         RCLCPP_INFO(this->get_logger(), "Disarm command sent after 30 seconds");
        //     }
        // }

        // set quaternion
        msg.q_d[0] = q.at(0);
        msg.q_d[1] = base_q[1] + q.at(1);
        msg.q_d[2] = base_q[2] + q.at(2);
        msg.q_d[3] = base_q[3] + q.at(3);

        if (new_setpoint)
        {
            RCLCPP_INFO(this->get_logger(), "q_d: [%f, %f, %f, %f]", msg.q_d[0], msg.q_d[1], msg.q_d[2], msg.q_d[3]);
            new_setpoint = false;
        }

        msg.yaw_sp_move_rate = 0;
        msg.reset_integral = false;
        msg.fw_control_yaw_wheel = false;

        msg.timestamp = this->get_clock()->now().nanoseconds() / 1000;
        vehicle_setpoint_publisher_->publish(msg);
    }

    /**
     * @brief Send setpoints to PX4. First, 20 setpoints will be sent before offboard mode will be engaged and the drone will be armed.
     *
     */
    void send_setpoint()
    {
        // increase amount of setpoints sent
        setpoint_count++;

        ready_to_fly = setpoint_count == 20;
        // after 20 setpoints, send arm command to make drone actually fly
        if (ready_to_fly)
        {
            // switch to offboard mode and arm

            // set to offboard mode
            this->publish_vehicle_command(px4_msgs::msg::VehicleCommand::VEHICLE_CMD_DO_SET_MODE, 1, 6);
            RCLCPP_INFO(this->get_logger(), "Set to offboard mode");
            // arm the drone
            this->publish_vehicle_command(px4_msgs::msg::VehicleCommand::VEHICLE_CMD_COMPONENT_ARM_DISARM, 1.0, 0);

            RCLCPP_INFO(this->get_logger(), "Arm command sent");
            flying = true;
            armed = true;
        }

        send_attitude_setpoint();
    }

    void on_attitude_receive(const px4_msgs::msg::VehicleAttitude::SharedPtr msg)
    {
        /*
        average q:
        - 0.7313786745071411
        - 0.005042835604399443
        - 0.0002370707516092807
        - 0.6819528937339783
        */
        if (!armed)
        {
            if (base_q_amount > 2)
            {
                base_q[1] = (base_q[1] + msg->q[1]) / 2;
                base_q[2] = (base_q[2] + msg->q[2]) / 2;
                base_q[3] = (base_q[3] + msg->q[3]) / 2;
            } else {
                base_q[1] = msg->q[1];
                base_q[2] = msg->q[2];
                base_q[3] = msg->q[3];
                base_q_amount++;
            }

            RCLCPP_INFO(this->get_logger(), "base_q: %f %f %f %f", base_q[0], base_q[1], base_q[2], base_q[3]);
        }
    }

    /**
     * @brief Publish vehicle commands
     * @param command   Command code (matches VehicleCommand and MAVLink MAV_CMD codes)
     * @param param1    Command parameter 1
     * @param param2    Command parameter 2
     */
    void publish_vehicle_command(uint16_t command, float param1, float param2)
    {
        px4_msgs::msg::VehicleCommand msg{};
        msg.param1 = param1;
        msg.param2 = param2;
        msg.command = command;
        msg.target_system = 1;
        msg.target_component = 1;
        msg.source_system = 1;
        msg.source_component = 1;
        msg.from_external = true;
        msg.timestamp = this->get_clock()->now().nanoseconds() / 1000;
        vehicle_command_publisher_->publish(msg);
    }

    /**
     * @brief calculates a quaternion based on the given input values
     *
     * @param ptr array of result quaternion. Must be of size 4.
     * @param heading desired heading (yaw) in radians.
     * @param attitude desired attitude (pitch) in radians.
     * @param bank desired bank (roll) in radians.
     */
    static void calculate_quaternion(std::array<float, 4> &ptr, float heading, float attitude, float bank)
    {

        float c1 = cos(heading / 2);
        float c2 = cos(attitude / 2);
        float c3 = cos(bank / 2);
        float s1 = sin(heading / 2);
        float s2 = sin(attitude / 2);
        float s3 = sin(bank / 2);

        float c1c2 = c1 * c2;
        float s1s2 = s1 * s2;

        ptr.at(0) = c1c2 * c3 - s1s2 * s3;       // w
        ptr.at(1) = c1c2 * s3 + s1s2 * c3;       // x
        ptr.at(2) = s1 * c2 * c3 + c1 * s2 * s3; // y
        ptr.at(3) = c1 * s2 * c3 - s1 * c2 * s3; // z
    }

    /**
     * @brief converts degrees to radians
     *
     * @param deg angle in degrees
     * @return float new angle in radians
     */
    static float degrees_to_radians(float deg)
    {
        return deg * (M_PI / 180.0);
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);

    rclcpp::Node::SharedPtr node = std::make_shared<PX4Controller>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
