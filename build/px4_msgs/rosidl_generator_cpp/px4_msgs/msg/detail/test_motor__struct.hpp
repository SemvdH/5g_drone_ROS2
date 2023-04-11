// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/TestMotor.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TEST_MOTOR__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__TEST_MOTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__TestMotor __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__TestMotor __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestMotor_
{
  using Type = TestMotor_<ContainerAllocator>;

  explicit TestMotor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->action = 0;
      this->motor_number = 0ul;
      this->value = 0.0f;
      this->timeout_ms = 0ul;
      this->driver_instance = 0;
    }
  }

  explicit TestMotor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->action = 0;
      this->motor_number = 0ul;
      this->value = 0.0f;
      this->timeout_ms = 0ul;
      this->driver_instance = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _action_type =
    uint8_t;
  _action_type action;
  using _motor_number_type =
    uint32_t;
  _motor_number_type motor_number;
  using _value_type =
    float;
  _value_type value;
  using _timeout_ms_type =
    uint32_t;
  _timeout_ms_type timeout_ms;
  using _driver_instance_type =
    uint8_t;
  _driver_instance_type driver_instance;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__action(
    const uint8_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__motor_number(
    const uint32_t & _arg)
  {
    this->motor_number = _arg;
    return *this;
  }
  Type & set__value(
    const float & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__timeout_ms(
    const uint32_t & _arg)
  {
    this->timeout_ms = _arg;
    return *this;
  }
  Type & set__driver_instance(
    const uint8_t & _arg)
  {
    this->driver_instance = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NUM_MOTOR_OUTPUTS =
    8u;
  static constexpr uint8_t ACTION_STOP =
    0u;
  static constexpr uint8_t ACTION_RUN =
    1u;
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::TestMotor_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::TestMotor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::TestMotor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::TestMotor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TestMotor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TestMotor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TestMotor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TestMotor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::TestMotor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::TestMotor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__TestMotor
    std::shared_ptr<px4_msgs::msg::TestMotor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__TestMotor
    std::shared_ptr<px4_msgs::msg::TestMotor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestMotor_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->motor_number != other.motor_number) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->timeout_ms != other.timeout_ms) {
      return false;
    }
    if (this->driver_instance != other.driver_instance) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestMotor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestMotor_

// alias to use template instance with default allocator
using TestMotor =
  px4_msgs::msg::TestMotor_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t TestMotor_<ContainerAllocator>::NUM_MOTOR_OUTPUTS;
template<typename ContainerAllocator>
constexpr uint8_t TestMotor_<ContainerAllocator>::ACTION_STOP;
template<typename ContainerAllocator>
constexpr uint8_t TestMotor_<ContainerAllocator>::ACTION_RUN;
template<typename ContainerAllocator>
constexpr uint8_t TestMotor_<ContainerAllocator>::ORB_QUEUE_LENGTH;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TEST_MOTOR__STRUCT_HPP_
