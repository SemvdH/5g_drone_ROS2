/*

We need to send attitude setpoints to be able to arm the drone:
https://mavlink.io/en/messages/common.html#SET_ATTITUDE_TARGET
We need attitude setpoints because we don't have a GPS:
https://discuss.px4.io/t/cannot-arm-drone-with-companion-computer-arming-denied-manual-control-lost/31565/9

*/

#include <chrono>

#include "rclcpp/rclcpp.hpp"

#include <px4_msgs/msg/vehicle_attitude_setpoint.hpp>
#include <px4_msgs/msg/timesync.hpp>

using namespace std::chrono_literals;

class PX4Controller : public rclcpp::Node
{
public:
    PX4Controller() : Node("px4_controller")
    {
        // create a publisher on the vehicle attitude setpoint topic
        offboard_control_mode_publisher_ = this->create_publisher<px4_msgs::msg::VehicleAttitudeSetpoint>("/fmu/in/vehicle_attitude_setpoint", 10);
        // create timer to send vehicle attitude setpoints every second
        timer_ = this->create_wall_timer(1000ms, std::bind(&PX4Controller::send_setpoint, this));
    }

private:

/**
 * @brief Publish offboard control mode messages as a heartbeat.
 *        Only the attitude is enabled, because that is how the drone will be controlled.
 * 
 */
    void send_setpoint()
    {
        // set message to enable attitude
        auto msg = px4_msgs::msg::VehicleAttitudeSetpoint();

        // get timestamp and publish message
        msg.timestamp = this->get_clock()->now().nanoseconds() / 1000;


        
    }
    rclcpp::Publisher<px4_msgs::msg::VehicleAttitudeSetpoint>::SharedPtr offboard_control_mode_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PX4Controller>());
    rclcpp::shutdown();
    return 0;
}
