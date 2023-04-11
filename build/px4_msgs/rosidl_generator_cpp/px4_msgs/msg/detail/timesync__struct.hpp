// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/Timesync.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TIMESYNC__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__TIMESYNC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__Timesync __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__Timesync __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Timesync_
{
  using Type = Timesync_<ContainerAllocator>;

  explicit Timesync_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->seq = 0;
      this->tc1 = 0ll;
      this->ts1 = 0ll;
    }
  }

  explicit Timesync_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->seq = 0;
      this->tc1 = 0ll;
      this->ts1 = 0ll;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _seq_type =
    uint8_t;
  _seq_type seq;
  using _tc1_type =
    int64_t;
  _tc1_type tc1;
  using _ts1_type =
    int64_t;
  _ts1_type ts1;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__seq(
    const uint8_t & _arg)
  {
    this->seq = _arg;
    return *this;
  }
  Type & set__tc1(
    const int64_t & _arg)
  {
    this->tc1 = _arg;
    return *this;
  }
  Type & set__ts1(
    const int64_t & _arg)
  {
    this->ts1 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::Timesync_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::Timesync_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::Timesync_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::Timesync_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Timesync_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Timesync_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Timesync_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Timesync_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::Timesync_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::Timesync_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__Timesync
    std::shared_ptr<px4_msgs::msg::Timesync_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__Timesync
    std::shared_ptr<px4_msgs::msg::Timesync_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Timesync_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->seq != other.seq) {
      return false;
    }
    if (this->tc1 != other.tc1) {
      return false;
    }
    if (this->ts1 != other.ts1) {
      return false;
    }
    return true;
  }
  bool operator!=(const Timesync_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Timesync_

// alias to use template instance with default allocator
using Timesync =
  px4_msgs::msg::Timesync_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TIMESYNC__STRUCT_HPP_
