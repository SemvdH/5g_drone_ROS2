#include <chrono> //time measurement

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class HeightSensorPublisher : public rclcpp::Node
{
	public:
		HeightSensorPublisher() : Node("height_sensor_publisher")
			{
				publisher_ = this->create_publisher<std_msgs::msg::String>("height_sensor", 10);
				timer_ = this->create_wall_timer(
					500ms, std::bind(&HeightSensorPublisher::timer_callback, this));

			}
	private:
		void timer_callback()
		{
			auto message = std_msgs::msg::String();
			message.data = "Hello heigth sensor!";
			RCLCPP_INFO(this->get_logger(), "Publishing: %s", message.data.c_str());
			publisher_->publish(message);
		}
		rclcpp::TimerBase::SharedPtr timer_;
		rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
};

int main(int argc, char *argv[])
{
	rclcpp::init(argc,argv);
	rclcpp::spin(std::make_shared<HeightSensorPublisher>());
	rclcpp::shutdown();

	return 0;
}


