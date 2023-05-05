/**
 * @file heartbeat.cpp
 * @author Sem van der Hoeven (sem.hoeven@gmail.com)
 * @brief Heartbeat node that keeps the connection between the flight computer 
 * and PX4 flight controller alive by sending OffboardControl messages
 */
#include <chrono>

#include "rclcpp/rclcpp.hpp"

#include <px4_msgs/msg/offboard_control_mode.hpp>

using namespace std::chrono_literals;

class HeartBeat : public rclcpp::Node
{
public:
    HeartBeat() : Node("heartbeat")
    {
        // create a publisher on the offboard control mode topic
        offboard_control_mode_publisher_ = this->create_publisher<px4_msgs::msg::OffboardControlMode>("/fmu/in/offboard_control_mode", 10);
        // create timer to send heartbeat messages (offboard control) every 100ms
        timer_ = this->create_wall_timer(100ms, std::bind(&HeartBeat::send_heartbeat, this));
        start_time = this->get_clock()->now().seconds();
        RCLCPP_INFO(this->get_logger(), "done initializing at %d seconds. Sending heartbeat...", start_time);
    }

private:
    // publisher for offboard control mode messages
    rclcpp::Publisher<px4_msgs::msg::OffboardControlMode>::SharedPtr offboard_control_mode_publisher_;
    // timer for sending the heartbeat
    rclcpp::TimerBase::SharedPtr timer_;
    // start time of node in seconds
    double start_time;

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
        msg.velocity = false;
        msg.acceleration = false;
        msg.attitude = true;
        msg.body_rate = false;
        msg.actuator = false;

        // get timestamp and publish message
        msg.timestamp = this->get_clock()->now().nanoseconds() / 1000;
        offboard_control_mode_publisher_->publish(msg);
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<HeartBeat>());
    rclcpp::shutdown();
    return 0;
}
