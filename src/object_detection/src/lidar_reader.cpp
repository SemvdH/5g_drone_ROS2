#include <chrono>

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

class LidarReader : public rclcpp::Node
{
public:
    LidarReader()
        : Node("lidar_reader")
    {
        // get serial port of sensor through parameter
        rcl_interfaces::msg::ParameterDescriptor descriptor = rcl_interfaces::msg::ParameterDescriptor{};
        descriptor.description = "serial port for the USB port of the LIDAR";
        this->declare_parameter("lidar_serial_port", "/dev/ttyACM0", descriptor);

        // create publisher and bind timer to publish function
        publisher_ = this->create_publisher<object_detection::msg::LidarReading>("drone/object_detection", 10);
        timer_ = this->create_wall_timer(500ms, std::bind(&LidarReader::read_lidar_data, this));

        factory = terabee::ITerarangerFactory::getFactory();
        tower = factory->createTerarangerTowerEvo(this->get_parameter("lidar_serial_port").as_string());

        if (!tower) // check if the object could be created
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to create TerarangerTowerEvo");
            return;
        }

        // set lidar to measure including IMU
        tower->setImuMode(ITerarangerTowerEvo::QuaternionLinearAcc);

        if (!tower->initialize()) // check if communication with the sensor works
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to initialize TerarangerTowerEvo");
            return;
        }
    }

private:
    // publisher for lidar data
    rclcpp::Publisher<object_detection::msg::LidarReading>::SharedPtr publisher_;
    // timer for publishing readings
    rclcpp::TimerBase::SharedPtr timer_;

    // terabee tower evo variables
    std::unique_ptr<terabee::ITerarangerTowerEvo> tower;
    std::unique_ptr<terabee::ITerarangerFactory> factory;

    /**
     * @brief Reads the data from the LIDAR distance modules and the IMU, and publishes it onto the drone/object_detection topic
     * 
     */
    void read_lidar_data()
    {
        auto msg = object_detection::msg::LidarReading();

        // read distance data from all sensors
        msg.sensor_1 = tower->getDistance().distance.at(0);
        msg.sensor_2 = tower->getDistance().distance.at(2);
        msg.sensor_3 = tower->getDistance().distance.at(4);
        msg.sensor_4 = tower->getDistance().distance.at(6);

        // read data from built-in IMU
        ImuData imu_data = tower->getImuData();
        for (size_t i = 0; i < imu_data.data.size(); i++)
        {
            msg.imu_data.push_back(imu_data.data[i]);
        }

        // publish message
        publisher_->publish(msg);
        RCLCPP_INFO(this->get_logger(), "Publishing message");
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<LidarReader>());
    rclcpp::shutdown();
    return 0;
}
