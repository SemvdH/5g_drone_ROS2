#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "object_detection/msg/lidar_reading.hpp"

#include <terabee/ITerarangerFactory.hpp>
#include <terabee/ITerarangerTowerEvo.hpp>
#include <terabee/TowerDistanceData.hpp>
#include <terabee/ImuData.hpp>

using terabee::ImuData;
using terabee::ITerarangerTowerEvo;
using terabee::TowerDistanceData;

using namespace std::chrono_literals;

class MultiflexReader : public rclcpp::Node
{
public:
  MultiflexReader()
      : Node("multiflex_reader")
  {
    //publisher_ = this->create_publisher<object_detection::msg::LidarReading>("drone/object_detection", 10);
    //timer_ = this->create_wall_timer(500ms, std::bind(&MultiflexReader::read_multiflex_data, this));
  }

private:
  void read_multiflex_data()
  {

  }

};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MultiflexReader>());
  rclcpp::shutdown();
  return 0;
}
