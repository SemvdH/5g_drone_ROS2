// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/OpticalFlow.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPTICAL_FLOW__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__OPTICAL_FLOW__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__OpticalFlow __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__OpticalFlow __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OpticalFlow_
{
  using Type = OpticalFlow_<ContainerAllocator>;

  explicit OpticalFlow_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->sensor_id = 0;
      this->pixel_flow_x_integral = 0.0f;
      this->pixel_flow_y_integral = 0.0f;
      this->gyro_x_rate_integral = 0.0f;
      this->gyro_y_rate_integral = 0.0f;
      this->gyro_z_rate_integral = 0.0f;
      this->ground_distance_m = 0.0f;
      this->integration_timespan = 0ul;
      this->time_since_last_sonar_update = 0ul;
      this->frame_count_since_last_readout = 0;
      this->gyro_temperature = 0;
      this->quality = 0;
      this->max_flow_rate = 0.0f;
      this->min_ground_distance = 0.0f;
      this->max_ground_distance = 0.0f;
      this->mode = 0;
    }
  }

  explicit OpticalFlow_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->sensor_id = 0;
      this->pixel_flow_x_integral = 0.0f;
      this->pixel_flow_y_integral = 0.0f;
      this->gyro_x_rate_integral = 0.0f;
      this->gyro_y_rate_integral = 0.0f;
      this->gyro_z_rate_integral = 0.0f;
      this->ground_distance_m = 0.0f;
      this->integration_timespan = 0ul;
      this->time_since_last_sonar_update = 0ul;
      this->frame_count_since_last_readout = 0;
      this->gyro_temperature = 0;
      this->quality = 0;
      this->max_flow_rate = 0.0f;
      this->min_ground_distance = 0.0f;
      this->max_ground_distance = 0.0f;
      this->mode = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _sensor_id_type =
    uint8_t;
  _sensor_id_type sensor_id;
  using _pixel_flow_x_integral_type =
    float;
  _pixel_flow_x_integral_type pixel_flow_x_integral;
  using _pixel_flow_y_integral_type =
    float;
  _pixel_flow_y_integral_type pixel_flow_y_integral;
  using _gyro_x_rate_integral_type =
    float;
  _gyro_x_rate_integral_type gyro_x_rate_integral;
  using _gyro_y_rate_integral_type =
    float;
  _gyro_y_rate_integral_type gyro_y_rate_integral;
  using _gyro_z_rate_integral_type =
    float;
  _gyro_z_rate_integral_type gyro_z_rate_integral;
  using _ground_distance_m_type =
    float;
  _ground_distance_m_type ground_distance_m;
  using _integration_timespan_type =
    uint32_t;
  _integration_timespan_type integration_timespan;
  using _time_since_last_sonar_update_type =
    uint32_t;
  _time_since_last_sonar_update_type time_since_last_sonar_update;
  using _frame_count_since_last_readout_type =
    uint16_t;
  _frame_count_since_last_readout_type frame_count_since_last_readout;
  using _gyro_temperature_type =
    int16_t;
  _gyro_temperature_type gyro_temperature;
  using _quality_type =
    uint8_t;
  _quality_type quality;
  using _max_flow_rate_type =
    float;
  _max_flow_rate_type max_flow_rate;
  using _min_ground_distance_type =
    float;
  _min_ground_distance_type min_ground_distance;
  using _max_ground_distance_type =
    float;
  _max_ground_distance_type max_ground_distance;
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__sensor_id(
    const uint8_t & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }
  Type & set__pixel_flow_x_integral(
    const float & _arg)
  {
    this->pixel_flow_x_integral = _arg;
    return *this;
  }
  Type & set__pixel_flow_y_integral(
    const float & _arg)
  {
    this->pixel_flow_y_integral = _arg;
    return *this;
  }
  Type & set__gyro_x_rate_integral(
    const float & _arg)
  {
    this->gyro_x_rate_integral = _arg;
    return *this;
  }
  Type & set__gyro_y_rate_integral(
    const float & _arg)
  {
    this->gyro_y_rate_integral = _arg;
    return *this;
  }
  Type & set__gyro_z_rate_integral(
    const float & _arg)
  {
    this->gyro_z_rate_integral = _arg;
    return *this;
  }
  Type & set__ground_distance_m(
    const float & _arg)
  {
    this->ground_distance_m = _arg;
    return *this;
  }
  Type & set__integration_timespan(
    const uint32_t & _arg)
  {
    this->integration_timespan = _arg;
    return *this;
  }
  Type & set__time_since_last_sonar_update(
    const uint32_t & _arg)
  {
    this->time_since_last_sonar_update = _arg;
    return *this;
  }
  Type & set__frame_count_since_last_readout(
    const uint16_t & _arg)
  {
    this->frame_count_since_last_readout = _arg;
    return *this;
  }
  Type & set__gyro_temperature(
    const int16_t & _arg)
  {
    this->gyro_temperature = _arg;
    return *this;
  }
  Type & set__quality(
    const uint8_t & _arg)
  {
    this->quality = _arg;
    return *this;
  }
  Type & set__max_flow_rate(
    const float & _arg)
  {
    this->max_flow_rate = _arg;
    return *this;
  }
  Type & set__min_ground_distance(
    const float & _arg)
  {
    this->min_ground_distance = _arg;
    return *this;
  }
  Type & set__max_ground_distance(
    const float & _arg)
  {
    this->max_ground_distance = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MODE_UNKNOWN =
    0u;
  static constexpr uint8_t MODE_BRIGHT =
    1u;
  static constexpr uint8_t MODE_LOWLIGHT =
    2u;
  static constexpr uint8_t MODE_SUPER_LOWLIGHT =
    3u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::OpticalFlow_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::OpticalFlow_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::OpticalFlow_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::OpticalFlow_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::OpticalFlow_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::OpticalFlow_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::OpticalFlow_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::OpticalFlow_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::OpticalFlow_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::OpticalFlow_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__OpticalFlow
    std::shared_ptr<px4_msgs::msg::OpticalFlow_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__OpticalFlow
    std::shared_ptr<px4_msgs::msg::OpticalFlow_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpticalFlow_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    if (this->pixel_flow_x_integral != other.pixel_flow_x_integral) {
      return false;
    }
    if (this->pixel_flow_y_integral != other.pixel_flow_y_integral) {
      return false;
    }
    if (this->gyro_x_rate_integral != other.gyro_x_rate_integral) {
      return false;
    }
    if (this->gyro_y_rate_integral != other.gyro_y_rate_integral) {
      return false;
    }
    if (this->gyro_z_rate_integral != other.gyro_z_rate_integral) {
      return false;
    }
    if (this->ground_distance_m != other.ground_distance_m) {
      return false;
    }
    if (this->integration_timespan != other.integration_timespan) {
      return false;
    }
    if (this->time_since_last_sonar_update != other.time_since_last_sonar_update) {
      return false;
    }
    if (this->frame_count_since_last_readout != other.frame_count_since_last_readout) {
      return false;
    }
    if (this->gyro_temperature != other.gyro_temperature) {
      return false;
    }
    if (this->quality != other.quality) {
      return false;
    }
    if (this->max_flow_rate != other.max_flow_rate) {
      return false;
    }
    if (this->min_ground_distance != other.min_ground_distance) {
      return false;
    }
    if (this->max_ground_distance != other.max_ground_distance) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpticalFlow_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpticalFlow_

// alias to use template instance with default allocator
using OpticalFlow =
  px4_msgs::msg::OpticalFlow_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t OpticalFlow_<ContainerAllocator>::MODE_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t OpticalFlow_<ContainerAllocator>::MODE_BRIGHT;
template<typename ContainerAllocator>
constexpr uint8_t OpticalFlow_<ContainerAllocator>::MODE_LOWLIGHT;
template<typename ContainerAllocator>
constexpr uint8_t OpticalFlow_<ContainerAllocator>::MODE_SUPER_LOWLIGHT;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__OPTICAL_FLOW__STRUCT_HPP_
