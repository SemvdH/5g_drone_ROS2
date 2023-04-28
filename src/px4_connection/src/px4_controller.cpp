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
#include <px4_msgs/msg/timesync.hpp>
#include <px4_msgs/msg/vehicle_command.hpp>
#include <px4_msgs/msg/vehicle_control_mode.hpp>

using namespace std::chrono_literals;

class PX4Controller : public rclcpp::Node
{
public:
    PX4Controller() : Node("px4_controller")
    {
        // create a publisher on the vehicle attitude setpoint topic
        vehicle_setpoint_publisher_ = this->create_publisher<px4_msgs::msg::VehicleAttitudeSetpoint>("/fmu/in/vehicle_attitude_setpoint", 10);
        vehicle_command_publisher_ = this->create_publisher<px4_msgs::msg::VehicleCommand>("/fmu/in/vehicle_command", 10);
        trajectory_setpoint_publisher = this->create_publisher<px4_msgs::msg::TrajectorySetpoint>("/fmu/in/trajectory_setpoint",10);

        // set to offboard mode
        this->publish_vehicle_command(px4_msgs::msg::VehicleCommand::VEHICLE_CMD_DO_SET_MODE, 1, 6);
        RCLCPP_INFO(this->get_logger(), "Set to offboard mode");
        // arm the drone
        this->publish_vehicle_command(px4_msgs::msg::VehicleCommand::VEHICLE_CMD_COMPONENT_ARM_DISARM, 1.0,0);

        RCLCPP_INFO(this->get_logger(), "Arm command sent");

        // create timer to send vehicle attitude setpoints every second
        timer_ = this->create_wall_timer(1000ms, std::bind(&PX4Controller::send_setpoint, this));
    }

private:
    rclcpp::Publisher<px4_msgs::msg::VehicleAttitudeSetpoint>::SharedPtr vehicle_setpoint_publisher_;
    rclcpp::Publisher<px4_msgs::msg::TrajectorySetpoint>::SharedPtr trajectory_setpoint_publisher;
    rclcpp::Publisher<px4_msgs::msg::VehicleCommand>::SharedPtr vehicle_command_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    /**
     * @brief Only the attitude is enabled, because that is how the drone will be controlled.
     *
     */
    void send_setpoint()
    {
        // set message to enable attitude
        auto msg = px4_msgs::msg::TrajectorySetpoint();

        // get timestamp and publish message

        // https://github.com/PX4/px4_msgs/blob/main/msg/TrajectorySetpoint.msg
        msg.velocity[0] = 0; // north
        msg.velocity[1] = 0; // east
        msg.velocity[2] = 1.0; // down (1 m/s -> TODO test if this accounts for 9.81 m/s earth gravity)

        msg.yaw = (0f * M_PI) / 180f; // 0 degrees rotation of yaw
        msg.yawspeed = 0; // 0 rotation speed

        msg.timestamp = this->get_clock()->now().nanoseconds() / 1000;
        trajectory_setpoint_publisher->publish(msg);

        RCLCPP_INFO(this->get_logger(), "published message");
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
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PX4Controller>());
    rclcpp::shutdown();
    return 0;
}