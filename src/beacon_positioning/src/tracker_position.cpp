#include <cstdio>
#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include "rtls_driver/rtls_driver.hpp"

// from the example: https://github.com/Terabee/positioning_systems_api/blob/master/examples/rtls_tracker_example.cpp
#include "serial_communication/serial.hpp"
using SerialInterface = terabee::serial_communication::Serial;

using namespace std::chrono_literals;

class BeaconPositioningPublisher : public rclcpp::Node
{
public:
  BeaconPositioningPublisher() : Node("beacon_positioning_publisher")
  {

    this->declare_parameter("tracker_serial_port", "/dev/ttyUSB0");

    std::string serial_port_name = this->get_parameter("tracker_serial_port").as_string();

    RCLCPP_INFO(this->get_logger(), "serial port is %s\n", serial_port_name.c_str());

    serial_port = std::make_shared<SerialInterface>("/dev/ttyUSB0");
    serial_port->setBaudrate(115200);
    serial_port->setTimeout(800ms);

    RCLCPP_INFO(this->get_logger(), "Opening serial port of tracker!");
    serial_port->open();

    if (!serial_port->isOpen())
    {
      RCLCPP_ERROR(this->get_logger(), "Failed to open serial port!");
      return;
    }

    terabee::RtlsDevice rtls_device(serial_port);

    publisher_ = this->create_publisher<std_msgs::msg::String>("beacon_positioning", 10);
    timer_ = this->create_wall_timer(
        500ms, std::bind(&BeaconPositioningPublisher::timer_callback, this));
  }

private:
  void timer_callback()
  {
    auto message = std_msgs::msg::String();
    message.data = "Hello beacons!";
    RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
    publisher_->publish(message);
  }

  void setup_rtlsdevice(int priority, int label, int update_time, int network_id, bool long_message)
  {
    rtls_device.disableTrackerStream();
    serial_port->flushInput();
    rtls_device.setDevice(terabee::RtlsDevice::device_type::tracker, priority);
    rtls_device.setLabel(label);
    rtls_device.setUpdateTime(update_time);
    rtls_device.setNetworkId(network_id);
    if (long_message)
    {
      rtls_device.setTrackerMessageLong();
    }
    else
    {
      rtls_device.setTrackerMessageShort();
    }
    rtls_device.enableLED();
    rtls_device.requestConfig();
    device_configuration = rtls_device.getConfig();

    rtls_device.enableTrackerStream();
  }

  rclcpp::TimerBase::SharedPtr timer_;                            // timer to trigger the
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_; // pointer to publisher object

  // terabee tower evo variables
  std::shared_ptr<terabee::serial_communication::ISerial> serial_port; // serial port for communicating with tracker
  // terabee::RtlsDevice rtls_device;
  terabee::RtlsDevice::config_t device_configuration;
  terabee::RtlsDevice::OnTrackerDataCallback tracker_data_callback_;
};

int main(int argc, char **argv)
{
  (void)argc;
  (void)argv;

  printf("starting tracker node of beacon_positioning package\n");

  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<BeaconPositioningPublisher>());
  rclcpp::shutdown();
  return 0;
}
