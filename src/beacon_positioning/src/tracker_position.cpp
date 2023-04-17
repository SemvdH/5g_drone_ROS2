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

    publisher_ = this->create_publisher<std_msgs::msg::String>("beacon_positioning", 10);
    timer_ = this->create_wall_timer(
        500ms, std::bind(&BeaconPositioningPublisher::timer_callback, this));
  }

  void setup_rtlsdevice(terabee::RtlsDevice *rtls_device, int priority, int label, int update_time, int network_id, bool long_message)
  {
    rtls_device->disableTrackerStream();
    serial_port->flushInput();
    rtls_device->setDevice(terabee::RtlsDevice::device_type::tracker, priority);
    rtls_device->setLabel(label);
    rtls_device->setUpdateTime(update_time);
    rtls_device->setNetworkId(network_id);
    if (long_message)
    {
      rtls_device->setTrackerMessageLong();
    }
    else
    {
      rtls_device->setTrackerMessageShort();
    }
    rtls_device->enableLED();
    rtls_device->requestConfig();
    device_configuration = rtls_device->getConfig();

    rtls_device->enableTrackerStream();

    RCLCPP_INFO(this->get_logger(), "Tracker configured");
  }

  std::shared_ptr<terabee::serial_communication::ISerial> get_serial_port()
  {
    return serial_port;
  }

  void publish(std_msgs::msg::String msg)
  {
    publisher_->publish(msg);
  }

private:
  void timer_callback()

  {
    // auto message = std_msgs::msg::String();
    // message.data = "Hello beacons!";
    // RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
    // publisher_->publish(message);
  }

  rclcpp::TimerBase::SharedPtr timer_;                            // timer to trigger the
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_; // pointer to publisher object

  // terabee tower evo variables
  std::shared_ptr<terabee::serial_communication::ISerial> serial_port; // serial port for communicating with tracker
  terabee::RtlsDevice::config_t device_configuration;
  terabee::RtlsDevice::OnTrackerDataCallback tracker_data_callback_;
  terabee::RtlsDevice::tracker_msg_t tracker_msg;
};

int main(int argc, char **argv)
{
  (void)argc;
  (void)argv;

  printf("starting tracker node of beacon_positioning package\n");

  rclcpp::init(argc, argv);
  rclcpp::executors::SingleThreadedExecutor executor;
  std::shared_ptr<BeaconPositioningPublisher> node = std::make_shared<BeaconPositioningPublisher>();
  executor.add_node(node);
  terabee::RtlsDevice rtls_device(node->get_serial_port());
  node->setup_rtlsdevice(&rtls_device, 0, 0, 1, 0, true);

  rtls_device.registerOnDistanceDataCaptureCallback([&node](const terabee::RtlsDevice::tracker_msg_t &tracker_msg)
                                                    {
    if (tracker_msg.is_valid_position) 
    {
      RCLCPP_INFO(node->get_logger(), "x = %f, y = %f, z = %f", tracker_msg.tracker_position_xyz.at(0), tracker_msg.tracker_position_xyz.at(1), tracker_msg.tracker_position_xyz.at(2));
      for (const anchor_data_t &anchor : tracker_msg.anchors_data)
      {
        RCLCPP_INFO(node->get_logger(), "anchor number= %d, distance = %f, x = %f, y = %f, z = %f", anchor->number, anchor->distance, anchor->pos_x, anchor->pos_y, anchor->pos_z);
      }
      RCLCPP_INFO(node->get_logger(), "");
      auto message = std_msgs::msg::String();
      message.data = "Hello from tracker callback!";
      node->publish(message);
    }
    else
    {
      RCLCPP_ERROR(node->get_logger(), "invalid tracker position");
      // RCLCPP_INFO(node->get_logger(), "x = %f, y = %f, z = %f", tracker_msg.tracker_position_xyz[0], tracker_msg.tracker_position_xyz[1], tracker_msg.tracker_position_xyz[2]);
    } });

  rtls_device.startReadingStream();
  executor.spin();
  rclcpp::shutdown();

  rtls_device.stopReadingStream();

  return node->get_serial_port()->close() ? 0 : -1;
}
