#include <cstdio>
#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class BeaconPositioningPublisher : public rclcpp::Node
{
  public:
    BeaconPositioningPublisher() : Node("beacon_positioning_publisher") {
      publisher_ = this->create_publisher<std_msgs::msg::String>("beacon_positioning", 10);
      timer_ = this->create_wall_timer(
        500ms, std::bind(&BeaconPositioningPublisher::timer_callback, this));
    }
  private:
    void timer_callback() {
      auto message = std_msgs::msg::String();
      message.data = "Hello beacons!";
      RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
      publisher_->publish(message);
    }
    rclcpp::TimerBase::SharedPtr timer_; // timer to trigger the 
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_; // pointer to publisher object
};

int main(int argc, char ** argv)
{
  (void) argc;
  (void) argv;

  printf("hello world beacon_positioning package\n");

  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<BeaconPositioningPublisher>());
  rclcpp::shutdown();
  return 0;
}
