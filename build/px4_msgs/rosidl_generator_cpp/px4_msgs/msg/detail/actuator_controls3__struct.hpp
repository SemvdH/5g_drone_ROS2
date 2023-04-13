// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/ActuatorControls3.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS3__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS3__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__ActuatorControls3 __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__ActuatorControls3 __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActuatorControls3_
{
  using Type = ActuatorControls3_<ContainerAllocator>;

  explicit ActuatorControls3_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 8>::iterator, float>(this->control.begin(), this->control.end(), 0.0f);
    }
  }

  explicit ActuatorControls3_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : control(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 8>::iterator, float>(this->control.begin(), this->control.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _control_type =
    std::array<float, 8>;
  _control_type control;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_sample(
    const uint64_t & _arg)
  {
    this->timestamp_sample = _arg;
    return *this;
  }
  Type & set__control(
    const std::array<float, 8> & _arg)
  {
    this->control = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NUM_ACTUATOR_CONTROLS =
    8u;
  static constexpr uint8_t NUM_ACTUATOR_CONTROL_GROUPS =
    4u;
  static constexpr uint8_t INDEX_ROLL =
    0u;
  static constexpr uint8_t INDEX_PITCH =
    1u;
  static constexpr uint8_t INDEX_YAW =
    2u;
  static constexpr uint8_t INDEX_THROTTLE =
    3u;
  static constexpr uint8_t INDEX_FLAPS =
    4u;
  static constexpr uint8_t INDEX_SPOILERS =
    5u;
  static constexpr uint8_t INDEX_AIRBRAKES =
    6u;
  static constexpr uint8_t INDEX_LANDING_GEAR =
    7u;
  static constexpr uint8_t INDEX_GIMBAL_SHUTTER =
    3u;
  static constexpr uint8_t INDEX_CAMERA_ZOOM =
    4u;
  static constexpr uint8_t GROUP_INDEX_ATTITUDE =
    0u;
  static constexpr uint8_t GROUP_INDEX_ATTITUDE_ALTERNATE =
    1u;
  static constexpr uint8_t GROUP_INDEX_GIMBAL =
    2u;
  static constexpr uint8_t GROUP_INDEX_MANUAL_PASSTHROUGH =
    3u;
  static constexpr uint8_t GROUP_INDEX_PAYLOAD =
    6u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::ActuatorControls3_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::ActuatorControls3_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::ActuatorControls3_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::ActuatorControls3_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ActuatorControls3_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ActuatorControls3_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ActuatorControls3_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ActuatorControls3_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::ActuatorControls3_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::ActuatorControls3_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__ActuatorControls3
    std::shared_ptr<px4_msgs::msg::ActuatorControls3_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__ActuatorControls3
    std::shared_ptr<px4_msgs::msg::ActuatorControls3_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorControls3_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->control != other.control) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorControls3_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorControls3_

// alias to use template instance with default allocator
using ActuatorControls3 =
  px4_msgs::msg::ActuatorControls3_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControls3_<ContainerAllocator>::NUM_ACTUATOR_CONTROLS;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControls3_<ContainerAllocator>::NUM_ACTUATOR_CONTROL_GROUPS;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControls3_<ContainerAllocator>::INDEX_ROLL;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControls3_<ContainerAllocator>::INDEX_PITCH;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControls3_<ContainerAllocator>::INDEX_YAW;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControls3_<ContainerAllocator>::INDEX_THROTTLE;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControls3_<ContainerAllocator>::INDEX_FLAPS;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControls3_<ContainerAllocator>::INDEX_SPOILERS;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControls3_<ContainerAllocator>::INDEX_AIRBRAKES;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControls3_<ContainerAllocator>::INDEX_LANDING_GEAR;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControls3_<ContainerAllocator>::INDEX_GIMBAL_SHUTTER;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControls3_<ContainerAllocator>::INDEX_CAMERA_ZOOM;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControls3_<ContainerAllocator>::GROUP_INDEX_ATTITUDE;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControls3_<ContainerAllocator>::GROUP_INDEX_ATTITUDE_ALTERNATE;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControls3_<ContainerAllocator>::GROUP_INDEX_GIMBAL;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControls3_<ContainerAllocator>::GROUP_INDEX_MANUAL_PASSTHROUGH;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControls3_<ContainerAllocator>::GROUP_INDEX_PAYLOAD;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS3__STRUCT_HPP_
