/*

We need to send attitude setpoints to be able to arm the drone:
https://mavlink.io/en/messages/common.html#SET_ATTITUDE_TARGET
We need attitude setpoints because we don't have a GPS:
https://discuss.px4.io/t/cannot-arm-drone-with-companion-computer-arming-denied-manual-control-lost/31565/9

*/

#include <chrono>
#include <math.h>

#include "rclcpp/rclcpp.hpp"

#include <px4_msgs/msg/vehicle_attitude_setpoint.hpp>
#include <px4_msgs/msg/trajectory_setpoint.hpp>
// #include <px4_msgs/msg/timesync.hpp>
#include <px4_msgs/msg/vehicle_command.hpp>
#include <px4_msgs/msg/vehicle_control_mode.hpp>
// #include <px4_msgs/msg/offboard_control_mode.hpp>

using namespace std::chrono_literals;

class PX4Controller : public rclcpp::Node
{
public:
    PX4Controller() : Node("px4_controller")
    {
        // create a publisher on the vehicle attitude setpoint topic
        vehicle_setpoint_publisher_ = this->create_publisher<px4_msgs::msg::VehicleAttitudeSetpoint>("/fmu/in/vehicle_attitude_setpoint", 10);
        vehicle_command_publisher_ = this->create_publisher<px4_msgs::msg::VehicleCommand>("/fmu/in/vehicle_command", 10);
        trajectory_setpoint_publisher = this->create_publisher<px4_msgs::msg::TrajectorySetpoint>("/fmu/in/trajectory_setpoint", 10);
        // offboard_control_mode_publisher_ = this->create_publisher<px4_msgs::msg::OffboardControlMode>("/fmu/in/offboard_control_mode", 10);

        // create timer to send vehicle attitude setpoints every second
        timer_ = this->create_wall_timer(100ms, std::bind(&PX4Controller::send_setpoint, this));

        start_time_ = this->get_clock()->now().seconds();
        RCLCPP_INFO(this->get_logger(), "finished initializing at %d seconds.", start_time_);
    }

private:
    rclcpp::Publisher<px4_msgs::msg::VehicleAttitudeSetpoint>::SharedPtr vehicle_setpoint_publisher_;
    rclcpp::Publisher<px4_msgs::msg::TrajectorySetpoint>::SharedPtr trajectory_setpoint_publisher;
    rclcpp::Publisher<px4_msgs::msg::VehicleCommand>::SharedPtr vehicle_command_publisher_;
    // rclcpp::Publisher<px4_msgs::msg::OffboardControlMode>::SharedPtr offboard_control_mode_publisher_;

    rclcpp::TimerBase::SharedPtr timer_;
    double start_time_;
    bool has_sent_status = false;
    bool flying = false;
    int setpoint_count = 0;
    float thrust = 0.5;

    /**
     * @brief Only the attitude is enabled, because that is how the drone will be controlled.
     *
     */
    void send_setpoint()
    {

        setpoint_count++;

        if (setpoint_count % 20 == 0 && thrust <= 1) {
            thrust += 0.1;
            RCLCPP_INFO(this->get_logger(), "increasing thrust to %d", thrust);
        }

        if (setpoint_count == 20)
        {
            // switch to offboard mode and arm

            // set to offboard mode
            this->publish_vehicle_command(px4_msgs::msg::VehicleCommand::VEHICLE_CMD_DO_SET_MODE, 1, 6);
            RCLCPP_INFO(this->get_logger(), "Set to offboard mode");
            // arm the drone
            this->publish_vehicle_command(px4_msgs::msg::VehicleCommand::VEHICLE_CMD_COMPONENT_ARM_DISARM, 1.0, 0);

            RCLCPP_INFO(this->get_logger(), "Arm command sent");
            flying = true;
        }
        // set message to enable attitude
        auto msg = px4_msgs::msg::VehicleAttitudeSetpoint();
        // result quaternion
        std::array<float, 4> q = {0, 0, 0, 0};

        if (this->get_clock()->now().seconds() - start_time_ < 30)
        {
            // move up?
            msg.thrust_body[0] = 0; // north
            msg.thrust_body[1] = 0; // east
            msg.thrust_body[2] = -thrust; // down, 100% thrust up

            calculate_quaternion(q, 0, 0, 0);
        }

        else
        {
            if (flying)
            {
                publish_vehicle_command(px4_msgs::msg::VehicleCommand::VEHICLE_CMD_COMPONENT_ARM_DISARM, 0.0, 0);
                flying = false;
                RCLCPP_INFO(this->get_logger(), "Disarm command sent after 30 seconds");
            }
        }
        // else
        // {
        //     if (!has_sent_status)
        //     {
        //         has_sent_status = true;
        //         RCLCPP_INFO(this->get_logger(), "changing down thrust to 0.5 and east to 1");
        //     }
        //     // no thrust
        //     msg.thrust_body[0] = 0;   // north
        //     msg.thrust_body[1] = 1;   // east
        //     msg.thrust_body[2] = 0.5; // down

        //     calculate_quaternion(q, 0, degrees_to_radians(10), 0);
        // }

        msg.q_d[0] = q.at(0);
        msg.q_d[1] = q.at(1);
        msg.q_d[2] = q.at(2);
        msg.q_d[3] = q.at(3);

        msg.yaw_sp_move_rate = 0;
        msg.reset_integral = false;
        msg.fw_control_yaw_wheel = false;

        msg.timestamp = this->get_clock()->now().nanoseconds() / 1000;
        // send heartbeat together with attitude setpoint
        // send_heartbeat();
        vehicle_setpoint_publisher_->publish(msg);
    }

    // void send_heartbeat()
    // {
    //     // set message to enable attitude
    //     auto msg = px4_msgs::msg::OffboardControlMode();
    //     msg.position = false;
    //     msg.velocity = false;
    //     msg.acceleration = false;
    //     msg.attitude = true;
    //     msg.body_rate = false;
    //     msg.actuator = false;

    //     // get timestamp and publish message
    //     msg.timestamp = this->get_clock()->now().nanoseconds() / 1000;
    //     offboard_control_mode_publisher_->publish(msg);
    //     // RCLCPP_INFO(this->get_logger(), "sent offboard control mode message!");
    // }

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
    static void calculate_quaternion(std::array<float, 4> ptr, float heading, float attitude, float bank)
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
    rclcpp::spin(std::make_shared<PX4Controller>());
    rclcpp::shutdown();
    return 0;
}
