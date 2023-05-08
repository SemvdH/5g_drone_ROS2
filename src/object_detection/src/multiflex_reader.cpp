#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "object_detection/msg/multiflex_reading.hpp"

#include <terabee/ITerarangerFactory.hpp>
#include <terabee/ITerarangerMultiflex.hpp>
#include <terabee/DistanceData.hpp>

using terabee::DistanceData;

using namespace std::chrono_literals;

class MultiflexReader : public rclcpp::Node
{
public:
    MultiflexReader()
        : Node("multiflex_reader")
    {
        // get serial port of sensor through parameter
        rcl_interfaces::msg::ParameterDescriptor serial_port_descriptor = rcl_interfaces::msg::ParameterDescriptor{};
        serial_port_descriptor.description = "Serial port of the USB port that the multiflex PCB is connected to.";
        this->declare_parameter("multiflex_serial_port", "/dev/ttyACM0", serial_port_descriptor);

        // create the sensor object
        factory = terabee::ITerarangerFactory::getFactory();
        multiflex = factory->createTerarangerMultiflex(this->get_parameter("multiflex_serial_port").as_string());

        if (!multiflex) // check if the object can be created
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to create multiflex");
            return;
        }

        if (!multiflex->initialize()) // check if communication with the sensor works
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to initialize multiflex");
            return;
        }

        if (!multiflex->configureNumberOfSensors(0x3f)) // check if all 6 distance sensors work
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to set the number of sensors to 6!");
            return;
        }

        RCLCPP_INFO(this->get_logger(), "Multiflex initialized");

        publisher_ = this->create_publisher<object_detection::msg::MultiflexReading>("drone/object_detection", 10);
        timer_ = this->create_wall_timer(500ms, std::bind(&MultiflexReader::read_multiflex_data, this));
    }

private:
    // factory and object for multiflex sensor
    std::unique_ptr<terabee::ITerarangerFactory> factory;
    std::unique_ptr<terabee::ITerarangerMultiflex> multiflex;

    // timer and publisher for publishing message onto topic
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<object_detection::msg::MultiflexReading>::SharedPtr publisher_;

    /**
     * @brief Reads distance data from the sensor and publishes it onto the drone/object_detection topic
     *
     */
    void read_multiflex_data()
    {
        // get distance reading
        terabee::DistanceData data = multiflex->getDistance();

        // populate message with readings
        auto msg = object_detection::msg::MultiflexReading();
        for (size_t i = 0; i < data.size(); i++)
        {
            msg.distance_data[i] = data.distance[i];
        }

        // publish message
        publisher_->publish(msg);
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MultiflexReader>());
    rclcpp::shutdown();
    return 0;
}
