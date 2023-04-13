// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/Safety.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SAFETY__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SAFETY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__Safety __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__Safety __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Safety_
{
  using Type = Safety_<ContainerAllocator>;

  explicit Safety_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->safety_switch_available = false;
      this->safety_off = false;
    }
  }

  explicit Safety_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->safety_switch_available = false;
      this->safety_off = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _safety_switch_available_type =
    bool;
  _safety_switch_available_type safety_switch_available;
  using _safety_off_type =
    bool;
  _safety_off_type safety_off;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__safety_switch_available(
    const bool & _arg)
  {
    this->safety_switch_available = _arg;
    return *this;
  }
  Type & set__safety_off(
    const bool & _arg)
  {
    this->safety_off = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::Safety_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::Safety_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::Safety_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::Safety_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Safety_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Safety_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Safety_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Safety_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::Safety_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::Safety_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__Safety
    std::shared_ptr<px4_msgs::msg::Safety_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__Safety
    std::shared_ptr<px4_msgs::msg::Safety_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Safety_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->safety_switch_available != other.safety_switch_available) {
      return false;
    }
    if (this->safety_off != other.safety_off) {
      return false;
    }
    return true;
  }
  bool operator!=(const Safety_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Safety_

// alias to use template instance with default allocator
using Safety =
  px4_msgs::msg::Safety_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SAFETY__STRUCT_HPP_
