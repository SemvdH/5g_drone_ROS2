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

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

std::ostream &operator<<(std::ostream &os, const TowerDistanceData &d)
{
  os << "[";
  for (size_t i = 0; i < d.distance.size(); i++)
  {
    os << i  << " " << d.distance[i] << (d.mask[i] ? " <new>, " : " <old>, ");
  }
  os << "\b\b"
     << " ]";
  return os;
}

std::ostream &operator<<(std::ostream &os, const ImuData &d)
{
  os << "[";
  for (size_t i = 0; i < d.data.size(); i++)
  {
    os << d.data[i] << ", ";
  }
  os << "\b\b"
     << " ]";
  return os;
}

class LidarReader : public rclcpp::Node
{
public:
  LidarReader()
      : Node("lidar_reader")
  {
    publisher_ = this->create_publisher<object_detection::msg::LidarReading>("drone/object_detection", 10);
    timer_ = this->create_wall_timer(500ms, std::bind(&LidarReader::read_lidar_data, this));

    ITerarangerTowerEvo::ImuMode mode(ITerarangerTowerEvo::QuaternionLinearAcc);

    factory = terabee::ITerarangerFactory::getFactory();
    tower = factory->createTerarangerTowerEvo("/dev/ttyACM0");

    if (!tower)
    {
      RCLCPP_ERROR(this->get_logger(), "Failed to create TerarangerTowerEvo");
      return;
    }

    tower->setImuMode(mode);

    if (!tower->initialize())
    {
      RCLCPP_ERROR(this->get_logger(), "Failed to initialize TerarangerTowerEvo");
      return;
    }
  }

private:
  void read_lidar_data()
  {
    //TODO publish message with all data from lidar
    // std::cout << "Distance = " << tower->getDistance() << std::endl;
    // std::cout << "IMU = " << tower->getImuData() << std::endl;

    auto msg = object_detection::msg::LidarReading();

    msg.sensor_1 = tower->getDistance().distance.at(0);
    msg.sensor_2 = tower->getDistance().distance.at(2);
    msg.sensor_3 = tower->getDistance().distance.at(4);
    msg.sensor_4 = tower->getDistance().distance.at(6);

    ImuData imu_data = tower->getImuData();

    for (size_t i = 0; i < imu_data.data.size(); i++)
    {
      msg.imu_data.push_back(imu_data.data[i]);
    }
    publisher_->publish(msg);
    RCLCPP_INFO(this->get_logger(), "Publishing message");
  }

  rclcpp::Publisher<object_detection::msg::LidarReading>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;

  // terabee tower evo variables
  std::unique_ptr<terabee::ITerarangerTowerEvo> tower;
  std::unique_ptr<terabee::ITerarangerFactory> factory;
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<LidarReader>());
  rclcpp::shutdown();
  return 0;
}
