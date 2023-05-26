/**
 * @file height_reader.cpp
 * @author Sem van der Hoeven (sem.hoeven@gmail.com)
 * @brief Uses the Terabee API to read the Terabee Evo Mini
 * height sensor data and publishes it on a /drone/height topic
 */
#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "drone_services/msg/height_data.hpp"

#include <terabee/ITerarangerFactory.hpp>
#include <terabee/ITerarangerEvoMini.hpp>
#include <terabee/DistanceData.hpp>

using namespace std::chrono_literals;

using terabee::DistanceData;
using terabee::ITerarangerEvoMini;

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
        publisher_ = this->create_publisher<drone_services::msg::HeightData>("drone/height", 10);
    }

private:
    /**
     * @brief reads the height value from the Terabee Evo Mini sensor and publishes a
     *
     */
    void read_height()
    {
        auto msg = drone_services::msg::HeightData();

        // high initial minimal value
        float min = 255;
        terabee::DistanceData distance_data = evo_mini->getDistance();
        // add readings and calculate mimimum value
        for (size_t i = 0; i < distance_data.size(); i++)
        {
            msg.heights[i] = distance_data.distance[i];
            if (distance_data.distance[i] < min && distance_data.distance[i] >= 0)
            {
                min = distance_data.distance[i];
            }
        }
        // add minimum value and publish message
        msg.min_height = min;
        publisher_->publish(msg);

        RCLCPP_INFO(this->get_logger(), "publishing message with min distance %f", msg.min_height);
    }

    // timer for publishing height readings
    rclcpp::TimerBase::SharedPtr timer_;
    // publisher for height readings
    rclcpp::Publisher<drone_services::msg::HeightData>::SharedPtr publisher_;

    // factory for height sensor
    std::unique_ptr<terabee::ITerarangerFactory> factory;
    // height sensor object pointer
    std::unique_ptr<terabee::ITerarangerEvoMini> evo_mini;
};

int main(int argc, char **argv)
{

    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<HeightReader>());
    rclcpp::shutdown();

    return 0;
}
