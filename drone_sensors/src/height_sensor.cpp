#include <chrono>  //time measurement
#include <fstream> // reading from serial port

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals; // for time measurements

class HeightSensorPublisher : public rclcpp::Node
{
public:
	HeightSensorPublisher() : Node("height_sensor_publisher")
	{
		publisher_ = this->create_publisher<std_msgs::msg::String>("height_sensor", 10);
		timer_ = this->create_wall_timer(
			50ms, std::bind(&HeightSensorPublisher::timer_callback, this));
		RCLCPP_INFO(this->get_logger(), "Starting height sensor publisher");

		setup_serial_port();
	}

	void test()
	{
		RCLCPP_INFO(this->get_logger(), "Je moeder is een plopkoek");
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

		serial_port.close();
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
