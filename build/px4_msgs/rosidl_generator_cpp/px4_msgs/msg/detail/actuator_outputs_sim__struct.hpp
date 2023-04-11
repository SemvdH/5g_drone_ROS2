// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/ActuatorOutputsSim.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_OUTPUTS_SIM__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_OUTPUTS_SIM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__ActuatorOutputsSim __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__ActuatorOutputsSim __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActuatorOutputsSim_
{
  using Type = ActuatorOutputsSim_<ContainerAllocator>;

  explicit ActuatorOutputsSim_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->noutputs = 0ul;
      std::fill<typename std::array<float, 16>::iterator, float>(this->output.begin(), this->output.end(), 0.0f);
    }
  }

  explicit ActuatorOutputsSim_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : output(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->noutputs = 0ul;
      std::fill<typename std::array<float, 16>::iterator, float>(this->output.begin(), this->output.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _noutputs_type =
    uint32_t;
  _noutputs_type noutputs;
  using _output_type =
    std::array<float, 16>;
  _output_type output;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__noutputs(
    const uint32_t & _arg)
  {
    this->noutputs = _arg;
    return *this;
  }
  Type & set__output(
    const std::array<float, 16> & _arg)
  {
    this->output = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NUM_ACTUATOR_OUTPUTS =
    16u;
  static constexpr uint8_t NUM_ACTUATOR_OUTPUT_GROUPS =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::ActuatorOutputsSim_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::ActuatorOutputsSim_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::ActuatorOutputsSim_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::ActuatorOutputsSim_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ActuatorOutputsSim_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ActuatorOutputsSim_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ActuatorOutputsSim_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ActuatorOutputsSim_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::ActuatorOutputsSim_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::ActuatorOutputsSim_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__ActuatorOutputsSim
    std::shared_ptr<px4_msgs::msg::ActuatorOutputsSim_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__ActuatorOutputsSim
    std::shared_ptr<px4_msgs::msg::ActuatorOutputsSim_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorOutputsSim_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->noutputs != other.noutputs) {
      return false;
    }
    if (this->output != other.output) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorOutputsSim_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorOutputsSim_

// alias to use template instance with default allocator
using ActuatorOutputsSim =
  px4_msgs::msg::ActuatorOutputsSim_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ActuatorOutputsSim_<ContainerAllocator>::NUM_ACTUATOR_OUTPUTS;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorOutputsSim_<ContainerAllocator>::NUM_ACTUATOR_OUTPUT_GROUPS;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_OUTPUTS_SIM__STRUCT_HPP_
