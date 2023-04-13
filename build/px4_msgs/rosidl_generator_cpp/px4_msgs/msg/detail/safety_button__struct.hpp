// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/SafetyButton.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SAFETY_BUTTON__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SAFETY_BUTTON__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__SafetyButton __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__SafetyButton __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SafetyButton_
{
  using Type = SafetyButton_<ContainerAllocator>;

  explicit SafetyButton_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->triggered = false;
    }
  }

  explicit SafetyButton_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->triggered = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _triggered_type =
    bool;
  _triggered_type triggered;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__triggered(
    const bool & _arg)
  {
    this->triggered = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    2u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::SafetyButton_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::SafetyButton_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::SafetyButton_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::SafetyButton_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SafetyButton_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SafetyButton_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SafetyButton_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SafetyButton_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::SafetyButton_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::SafetyButton_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__SafetyButton
    std::shared_ptr<px4_msgs::msg::SafetyButton_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__SafetyButton
    std::shared_ptr<px4_msgs::msg::SafetyButton_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetyButton_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->triggered != other.triggered) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetyButton_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetyButton_

// alias to use template instance with default allocator
using SafetyButton =
  px4_msgs::msg::SafetyButton_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SafetyButton_<ContainerAllocator>::ORB_QUEUE_LENGTH;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SAFETY_BUTTON__STRUCT_HPP_
