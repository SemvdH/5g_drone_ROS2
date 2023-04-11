// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__PositionSetpoint __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__PositionSetpoint __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionSetpoint_
{
  using Type = PositionSetpoint_<ContainerAllocator>;

  explicit PositionSetpoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->valid = false;
      this->type = 0;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->velocity_valid = false;
      this->velocity_frame = 0;
      this->alt_valid = false;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->yaw = 0.0f;
      this->yaw_valid = false;
      this->yawspeed = 0.0f;
      this->yawspeed_valid = false;
      this->landing_gear = 0;
      this->loiter_radius = 0.0f;
      this->loiter_direction = 0;
      this->acceptance_radius = 0.0f;
      this->cruising_speed = 0.0f;
      this->cruising_throttle = 0.0f;
      this->disable_weather_vane = false;
    }
  }

  explicit PositionSetpoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->valid = false;
      this->type = 0;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->velocity_valid = false;
      this->velocity_frame = 0;
      this->alt_valid = false;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->yaw = 0.0f;
      this->yaw_valid = false;
      this->yawspeed = 0.0f;
      this->yawspeed_valid = false;
      this->landing_gear = 0;
      this->loiter_radius = 0.0f;
      this->loiter_direction = 0;
      this->acceptance_radius = 0.0f;
      this->cruising_speed = 0.0f;
      this->cruising_throttle = 0.0f;
      this->disable_weather_vane = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _valid_type =
    bool;
  _valid_type valid;
  using _type_type =
    uint8_t;
  _type_type type;
  using _vx_type =
    float;
  _vx_type vx;
  using _vy_type =
    float;
  _vy_type vy;
  using _vz_type =
    float;
  _vz_type vz;
  using _velocity_valid_type =
    bool;
  _velocity_valid_type velocity_valid;
  using _velocity_frame_type =
    uint8_t;
  _velocity_frame_type velocity_frame;
  using _alt_valid_type =
    bool;
  _alt_valid_type alt_valid;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _alt_type =
    float;
  _alt_type alt;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _yaw_valid_type =
    bool;
  _yaw_valid_type yaw_valid;
  using _yawspeed_type =
    float;
  _yawspeed_type yawspeed;
  using _yawspeed_valid_type =
    bool;
  _yawspeed_valid_type yawspeed_valid;
  using _landing_gear_type =
    int8_t;
  _landing_gear_type landing_gear;
  using _loiter_radius_type =
    float;
  _loiter_radius_type loiter_radius;
  using _loiter_direction_type =
    int8_t;
  _loiter_direction_type loiter_direction;
  using _acceptance_radius_type =
    float;
  _acceptance_radius_type acceptance_radius;
  using _cruising_speed_type =
    float;
  _cruising_speed_type cruising_speed;
  using _cruising_throttle_type =
    float;
  _cruising_throttle_type cruising_throttle;
  using _disable_weather_vane_type =
    bool;
  _disable_weather_vane_type disable_weather_vane;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__vx(
    const float & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const float & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__vz(
    const float & _arg)
  {
    this->vz = _arg;
    return *this;
  }
  Type & set__velocity_valid(
    const bool & _arg)
  {
    this->velocity_valid = _arg;
    return *this;
  }
  Type & set__velocity_frame(
    const uint8_t & _arg)
  {
    this->velocity_frame = _arg;
    return *this;
  }
  Type & set__alt_valid(
    const bool & _arg)
  {
    this->alt_valid = _arg;
    return *this;
  }
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__alt(
    const float & _arg)
  {
    this->alt = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__yaw_valid(
    const bool & _arg)
  {
    this->yaw_valid = _arg;
    return *this;
  }
  Type & set__yawspeed(
    const float & _arg)
  {
    this->yawspeed = _arg;
    return *this;
  }
  Type & set__yawspeed_valid(
    const bool & _arg)
  {
    this->yawspeed_valid = _arg;
    return *this;
  }
  Type & set__landing_gear(
    const int8_t & _arg)
  {
    this->landing_gear = _arg;
    return *this;
  }
  Type & set__loiter_radius(
    const float & _arg)
  {
    this->loiter_radius = _arg;
    return *this;
  }
  Type & set__loiter_direction(
    const int8_t & _arg)
  {
    this->loiter_direction = _arg;
    return *this;
  }
  Type & set__acceptance_radius(
    const float & _arg)
  {
    this->acceptance_radius = _arg;
    return *this;
  }
  Type & set__cruising_speed(
    const float & _arg)
  {
    this->cruising_speed = _arg;
    return *this;
  }
  Type & set__cruising_throttle(
    const float & _arg)
  {
    this->cruising_throttle = _arg;
    return *this;
  }
  Type & set__disable_weather_vane(
    const bool & _arg)
  {
    this->disable_weather_vane = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SETPOINT_TYPE_POSITION =
    0u;
  static constexpr uint8_t SETPOINT_TYPE_VELOCITY =
    1u;
  static constexpr uint8_t SETPOINT_TYPE_LOITER =
    2u;
  static constexpr uint8_t SETPOINT_TYPE_TAKEOFF =
    3u;
  static constexpr uint8_t SETPOINT_TYPE_LAND =
    4u;
  static constexpr uint8_t SETPOINT_TYPE_IDLE =
    5u;
  static constexpr uint8_t SETPOINT_TYPE_FOLLOW_TARGET =
    6u;
  static constexpr uint8_t VELOCITY_FRAME_LOCAL_NED =
    1u;
  static constexpr uint8_t VELOCITY_FRAME_BODY_NED =
    8u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::PositionSetpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::PositionSetpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::PositionSetpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::PositionSetpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PositionSetpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PositionSetpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PositionSetpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PositionSetpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::PositionSetpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::PositionSetpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__PositionSetpoint
    std::shared_ptr<px4_msgs::msg::PositionSetpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__PositionSetpoint
    std::shared_ptr<px4_msgs::msg::PositionSetpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionSetpoint_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->vz != other.vz) {
      return false;
    }
    if (this->velocity_valid != other.velocity_valid) {
      return false;
    }
    if (this->velocity_frame != other.velocity_frame) {
      return false;
    }
    if (this->alt_valid != other.alt_valid) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->alt != other.alt) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->yaw_valid != other.yaw_valid) {
      return false;
    }
    if (this->yawspeed != other.yawspeed) {
      return false;
    }
    if (this->yawspeed_valid != other.yawspeed_valid) {
      return false;
    }
    if (this->landing_gear != other.landing_gear) {
      return false;
    }
    if (this->loiter_radius != other.loiter_radius) {
      return false;
    }
    if (this->loiter_direction != other.loiter_direction) {
      return false;
    }
    if (this->acceptance_radius != other.acceptance_radius) {
      return false;
    }
    if (this->cruising_speed != other.cruising_speed) {
      return false;
    }
    if (this->cruising_throttle != other.cruising_throttle) {
      return false;
    }
    if (this->disable_weather_vane != other.disable_weather_vane) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionSetpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionSetpoint_

// alias to use template instance with default allocator
using PositionSetpoint =
  px4_msgs::msg::PositionSetpoint_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t PositionSetpoint_<ContainerAllocator>::SETPOINT_TYPE_POSITION;
template<typename ContainerAllocator>
constexpr uint8_t PositionSetpoint_<ContainerAllocator>::SETPOINT_TYPE_VELOCITY;
template<typename ContainerAllocator>
constexpr uint8_t PositionSetpoint_<ContainerAllocator>::SETPOINT_TYPE_LOITER;
template<typename ContainerAllocator>
constexpr uint8_t PositionSetpoint_<ContainerAllocator>::SETPOINT_TYPE_TAKEOFF;
template<typename ContainerAllocator>
constexpr uint8_t PositionSetpoint_<ContainerAllocator>::SETPOINT_TYPE_LAND;
template<typename ContainerAllocator>
constexpr uint8_t PositionSetpoint_<ContainerAllocator>::SETPOINT_TYPE_IDLE;
template<typename ContainerAllocator>
constexpr uint8_t PositionSetpoint_<ContainerAllocator>::SETPOINT_TYPE_FOLLOW_TARGET;
template<typename ContainerAllocator>
constexpr uint8_t PositionSetpoint_<ContainerAllocator>::VELOCITY_FRAME_LOCAL_NED;
template<typename ContainerAllocator>
constexpr uint8_t PositionSetpoint_<ContainerAllocator>::VELOCITY_FRAME_BODY_NED;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__STRUCT_HPP_
