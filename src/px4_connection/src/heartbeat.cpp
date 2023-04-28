/*

We need to send attitude setpoints to be able to arm the drone:
https://mavlink.io/en/messages/common.html#SET_ATTITUDE_TARGET
We need attitude setpoints because we don't have a GPS:
https://discuss.px4.io/t/cannot-arm-drone-with-companion-computer-arming-denied-manual-control-lost/31565/9

*/

#include <chrono>

#include "rclcpp/rclcpp.hpp"

#include <px4_msgs/msg/offboard_control_mode.hpp>
// #include <px4_msgs/msg/timesync.hpp>

using namespace std::chrono_literals;

class HeartBeat : public rclcpp::Node
{
public:
    HeartBeat() : Node("setpoint_sender")
    {
        // create a publisher on the offboard control mode topic
        offboard_control_mode_publisher_ = this->create_publisher<px4_msgs::msg::OffboardControlMode>("/fmu/in/offboard_control_mode", 10);
        // create timer to send heartbeat messages (offboard control) every 100ms
        timer_ = this->create_wall_timer(100ms, std::bind(&HeartBeat::send_heartbeat, this));
        start_time = this->get_clock()->now().seconds();
    }

private:

/**
 * @brief Publish offboard control mode messages as a heartbeat.
 *        Only the attitude is enabled, because that is how the drone will be controlled.
 * 
 */
    void send_heartbeat()
    {
        // set message to enable attitude
        auto msg = px4_msgs::msg::OffboardControlMode();
        msg.position = false;
        msg.velocity = true;
        msg.acceleration = false;
        msg.attitude = false;
        msg.body_rate = false;
        msg.actuator = false;

        // get timestamp and publish message
        msg.timestamp = this->get_clock()->now().nanoseconds() / 1000;
        offboard_control_mode_publisher_->publish(msg);
        RCLCPP_INFO(this->get_logger(), "sent offboard control mode message!");

        // check if 5 seconds have elapsed
        if (this->get_clock()->now().seconds() - start_time > 5)
        {
            RCLCPP_INFO(this->get_logger(), "5 seconds elapsed!");
        }


        
    }
    rclcpp::Publisher<px4_msgs::msg::OffboardControlMode>::SharedPtr offboard_control_mode_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    double start_time;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<HeartBeat>());
    rclcpp::shutdown();
    return 0;
}
