#include <chrono>  //time measurement
#include <fstream> // reading from serial port

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#define TEXT_MODE 0x00, 0x11, 0x01, 0x45
#define BINARY_MODE 0x00, 0x11, 0x02, 0x4C
#define SINGLE_PIXEL_MODE 0x00, 0x21, 0x01, 0xBC
#define TWO_BY_TWO_PIXEL_MODE 0x00, 0x21, 0x02, 0xB5
#define TWO_PIXEL_MODE 0x00, 0x21, 0x03, 0xB2
#define SHORT_RANGE_MODE 0x00, 0x61, 0x01, 0xE7
#define LONG_RANGE_MODE 0x00, 0x61, 0x03, 0xE9

using namespace std::chrono_literals; // for time measurements

	

class HeightSensorPublisher : public rclcpp::Node
{
public:
	HeightSensorPublisher() : Node("height_sensor_publisher")
	{
		publisher_ = this->create_publisher<std_msgs::msg::String>("height_sensor", 10);
		timer_ = this->create_wall_timer(
			5ms, std::bind(&HeightSensorPublisher::timer_callback, this));
		RCLCPP_INFO(this->get_logger(), "Starting height sensor publisher");

		setup_serial_port();
	}

private:
	/**
	 * @brief Timer callback function to publish the height sensor data
	 *
	 */
	void timer_callback()
	{
		char *readdata = new char[1];
		serial_port.read(readdata, 1);
		auto message = std_msgs::msg::String();
		RCLCPP_INFO(this->get_logger(), "data: %s", readdata);

		if (readdata[0] == 0x54) // 0x54 = T (from the user manual)
		{
			RCLCPP_INFO(this->get_logger(), "Height sensor start measurement");
			char *measurement = new char[2];
			serial_port.read(measurement, 2);
			message.data = "Height: " + std::to_string(measurement[0]) + std::to_string(measurement[1]);
			RCLCPP_INFO(this->get_logger(), "Publishing: %s", message.data.c_str());
			publisher_->publish(message);

		}
	}

	/**
	 * @brief Set the up serial port object to read from the sensor (/dev/ttyACM0)
	 *
	 */
	void setup_serial_port()
	{
		serial_port.open("/dev/ttyACM0", std::ios::in);
		if (!serial_port.is_open())
		{
			RCLCPP_ERROR(this->get_logger(), "Could not open serial port");
			return;
		}
		else
		{
			RCLCPP_INFO(this->get_logger(), "Serial port opened on /dev/ttyACM0");
		}

		char bmode[] = {BINARY_MODE}
		serial_port.write(bmode, 4);
	}

	rclcpp::TimerBase::SharedPtr timer_;
	rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
	std::fstream serial_port; // serial port for reading from device
};

int main(int argc, char *argv[])
{
	rclcpp::init(argc, argv);

	rclcpp::executors::SingleThreadedExecutor executor;
	rclcpp::Node::SharedPtr node = std::make_shared<HeightSensorPublisher>();
	executor.add_node(node);
	executor.spin();
	// rclcpp::spin(std::make_shared<HeightSensorPublisher>());

	rclcpp::shutdown();

	return 0;
}
