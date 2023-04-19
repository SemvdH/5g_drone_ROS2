#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "object_detection/msg/lidar_reading.hpp"

#include <terabee/ITerarangerFactory.hpp>
#include <terabee/ITerarangerTowerEvo.hpp>
#include <terabee/TowerDistanceData.hpp>
#include <terabee/ImuData.hpp>

using terabee::ITerarangerTowerEvo;
using terabee::TowerDistanceData;
using terabee::ImuData;

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */

class LidarReader : public rclcpp::Node
{
  public:
    LidarReader()
    : Node("lidar_reader")
    { 
      publisher_ = this->create_publisher<object_detection::msg::LidarReading>("drone/object_detection", 10);
    }

  private:
    void timer_callback()
    {
      RCLCPP_INFO(this->get_logger(), "yeet");
    }

    rclcpp::Publisher<object_detection::msg::LidarReading>::SharedPtr publisher_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<LidarReader>());
  rclcpp::shutdown();
  return 0;
}
