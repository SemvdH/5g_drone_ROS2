#include <cstdio>
#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "beacon_positioning/msg/tracker_position.hpp"
#include "rtls_driver/rtls_driver.hpp"
#include "serial_communication/serial.hpp"

#define TRACKER_0_PORT "/dev/ttyUSB0"
#define TRACKER_1_PORT "/dev/ttyUSB1"

#define TRACKER_0_PRIORITY 0
#define TRACKER_1_PRIORITY 1
using SerialInterface = terabee::serial_communication::Serial;

using namespace std::chrono_literals;

class TrackerPositioning : public rclcpp::Node
{
public:
  TrackerPositioning() : Node("beacon_positioning")
  {

    this->declare_parameter("tracker_serial_port", "/dev/ttyUSB0");

    std::string serial_port_name = this->get_parameter("tracker_serial_port").as_string();

    RCLCPP_INFO(this->get_logger(), "serial port is %s\n", serial_port_name.c_str());

    serial_port = std::make_shared<SerialInterface>(serial_port_name);
    serial_port->setBaudrate(115200);
    serial_port->setTimeout(800ms);

    //rtls_device = terabee::RtlsDevice(serial_port);

    RCLCPP_INFO(this->get_logger(), "Opening serial port of tracker!");
    serial_port->open();

    if (!serial_port->isOpen())
    {
      RCLCPP_ERROR(this->get_logger(), "Failed to open serial port!");
      return;
    }

    publisher_ = this->create_publisher<beacon_positioning::msg::TrackerPosition>("beacon_positioning", 10);
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

  void publish(beacon_positioning::msg::TrackerPosition msg)
  {
    publisher_->publish(msg);
  }

  void set_tracker_id(int id)
  {
    if (id >= 0) {
      tracker_id = id;
    }
  }

  int get_tracker_id()
  {
    return tracker_id;
  }

private:
  rclcpp::Publisher<beacon_positioning::msg::TrackerPosition>::SharedPtr publisher_; // pointer to publisher object
  int tracker_id;

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
  rclcpp::executors::MultiThreadedExecutor executor;
  std::shared_ptr<TrackerPositioning> node = std::make_shared<TrackerPositioning>();
  executor.add_node(node);
  terabee::RtlsDevice rtls_device(node->get_serial_port());
  if (node->get_parameter("tracker_serial_port").as_string().compare(TRACKER_0_PORT))
  {
    RCLCPP_INFO(node->get_logger(),"Configuring RTLS device for tracker 0");
    node->set_tracker_id(0);
    node->setup_rtlsdevice(&rtls_device, 0, 0, 50, 0, true);
  } else 
  {
    RCLCPP_INFO(node->get_logger(),"Configuring RTLS device for tracker 1");
    node->set_tracker_id(1);
    node->setup_rtlsdevice(&rtls_device, 1, 1, 50, 0, true);
  }

  rtls_device.registerOnDistanceDataCaptureCallback([&node](const terabee::RtlsDevice::tracker_msg_t &tracker_msg)
                                                    {
    if (tracker_msg.is_valid_position) 
    {
      RCLCPP_INFO(node->get_logger(), "x = %f, y = %f, z = %f", tracker_msg.tracker_position_xyz.at(0), tracker_msg.tracker_position_xyz.at(1), tracker_msg.tracker_position_xyz.at(2));
      for (size_t i = 0; i < tracker_msg.anchors_data.size(); i++)
      {
        RCLCPP_INFO(node->get_logger(), "anchor number= %d, distance = %d, x = %d, y = %d, z = %d", tracker_msg.anchors_data[i].number, tracker_msg.anchors_data[i].distance, tracker_msg.anchors_data[i].pos_x, tracker_msg.anchors_data[i].pos_y, tracker_msg.anchors_data[i].pos_z);
      }
      RCLCPP_INFO(node->get_logger(), "");
      auto message = beacon_positioning::msg::TrackerPosition();
      message.id = node->get_tracker_id();
      message.x_pos = tracker_msg.tracker_position_xyz.at(0);
      message.y_pos = tracker_msg.tracker_position_xyz.at(1);
      message.z_pos = tracker_msg.tracker_position_xyz.at(2);
      message.anchor_distances = {0, 0, 0, 0};
      for (size_t i = 0; i < tracker_msg.anchors_data.size(); i++)
      {
        message.anchor_distances[i] = tracker_msg.anchors_data[i].distance;
      }

      node->publish(message);
    }
    else
    {
      RCLCPP_ERROR(node->get_logger(), "invalid tracker position");
    } });

  rtls_device.startReadingStream();
  executor.spin();
  rclcpp::shutdown();

  rtls_device.stopReadingStream();

  return node->get_serial_port()->close() ? 0 : -1;
}
