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
        vehicle_setpoint_publisher_ = this->create_publisher<px4_msgs::msg::VehicleAttitudeSetpoint>("/fmu/in/vehicle_attitude_setpoint", 10);
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

        //https://github.com/PX4/px4_msgs/blob/main/msg/VehicleAttitudeSetpoint.msg
        msg.roll_body = 1;
        msg.pitch_body = 1;
        msg.yaw_body = 1;

        msg.yaw_sp_move_rate = 1;

        for (int i = 0; i < 4; i++)
        {
            msg.q_d[i] = 1;
        }

        msg.thrust_body[0] = 0;
        msg.thrust_body[1] = 0;
        msg.thrust_body[2] = -10; // negative throttle amount
        msg.reset_integral = false;
        msg.fw_control_yaw_wheel = false;

        msg.timestamp = this->get_clock()->now().nanoseconds() / 1000;
        vehicle_setpoint_publisher_->publish(msg);

        RCLCPP_INFO(this->get_logger(), "published message");
    }
    rclcpp::Publisher<px4_msgs::msg::VehicleAttitudeSetpoint>::SharedPtr vehicle_setpoint_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PX4Controller>());
    rclcpp::shutdown();
    return 0;
}
