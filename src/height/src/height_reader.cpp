#include <chrono>
#include <iostream>

#include "rclcpp/rclcpp.hpp"

#include <terabee/ITerarangerFactory.hpp>
#include <terabee/ITerarangerEvoMini.hpp>
#include <terabee/DistanceData.hpp>

using namespace std::chrono_literals;

using terabee::DistanceData;
using terabee::ITerarangerEvoMini;

std::ostream &operator<<(std::ostream &os, const DistanceData &d)
{
  os << "[";
  for (size_t i = 0; i < d.distance.size(); i++)
  {
    os << d.distance[i] << ", ";
  }
  os << "\b\b"
     << " ]";
  return os;
}

class HeightReader : public rclcpp::Node
{
public:
  HeightReader() : rclcpp::Node("height_reader")
  {
    rcl_interfaces::msg::ParameterDescriptor descriptor = rcl_interfaces::msg::ParameterDescriptor{};
    descriptor.description = "serial port for the USB port of the height sensor";

    this->declare_parameter("height_serial_port", "/dev/ttyACM0", descriptor);

    factory = terabee::ITerarangerFactory::getFactory();
    evo_mini = factory->createTerarangerEvoMini(this->get_parameter("height_serial_port").as_string());

    if (!evo_mini)
    {
      RCLCPP_ERROR(this->get_logger(), "Failed to create Evo Mini!");
      return;
    }

    evo_mini->setPixelMode(ITerarangerEvoMini::Px4Mode);

    if (!evo_mini->initialize())
    {
      RCLCPP_ERROR(this->get_logger(), "Failed to initialize evo mini!");
      return;
    }

    RCLCPP_INFO(this->get_logger(), "Succesfully initialized Evo mini!");

    timer_ = this->create_wall_timer(500ms, std::bind(&HeightReader::read_height, this));
  }

private:
  void read_height()
  {
    std::cout << "Distance = " << evo_mini->getDistance() << std::endl;
  }

  rclcpp::TimerBase::SharedPtr timer_;

  std::unique_ptr<terabee::ITerarangerFactory> factory;
  std::unique_ptr<terabee::ITerarangerEvoMini> evo_mini;
};

int main(int argc, char **argv)
{

  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<HeightReader>());
  rclcpp::shutdown();

  return 0;
}
