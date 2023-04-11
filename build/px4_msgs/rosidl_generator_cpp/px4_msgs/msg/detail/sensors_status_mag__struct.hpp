// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/SensorsStatusMag.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_MAG__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_MAG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__SensorsStatusMag __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__SensorsStatusMag __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorsStatusMag_
{
  using Type = SensorsStatusMag_<ContainerAllocator>;

  explicit SensorsStatusMag_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->device_id_primary = 0ul;
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->device_ids.begin(), this->device_ids.end(), 0ul);
      std::fill<typename std::array<float, 4>::iterator, float>(this->inconsistency.begin(), this->inconsistency.end(), 0.0f);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->healthy.begin(), this->healthy.end(), false);
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->priority.begin(), this->priority.end(), 0);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->enabled.begin(), this->enabled.end(), false);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->external.begin(), this->external.end(), false);
    }
  }

  explicit SensorsStatusMag_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : device_ids(_alloc),
    inconsistency(_alloc),
    healthy(_alloc),
    priority(_alloc),
    enabled(_alloc),
    external(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->device_id_primary = 0ul;
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->device_ids.begin(), this->device_ids.end(), 0ul);
      std::fill<typename std::array<float, 4>::iterator, float>(this->inconsistency.begin(), this->inconsistency.end(), 0.0f);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->healthy.begin(), this->healthy.end(), false);
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->priority.begin(), this->priority.end(), 0);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->enabled.begin(), this->enabled.end(), false);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->external.begin(), this->external.end(), false);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _device_id_primary_type =
    uint32_t;
  _device_id_primary_type device_id_primary;
  using _device_ids_type =
    std::array<uint32_t, 4>;
  _device_ids_type device_ids;
  using _inconsistency_type =
    std::array<float, 4>;
  _inconsistency_type inconsistency;
  using _healthy_type =
    std::array<bool, 4>;
  _healthy_type healthy;
  using _priority_type =
    std::array<uint8_t, 4>;
  _priority_type priority;
  using _enabled_type =
    std::array<bool, 4>;
  _enabled_type enabled;
  using _external_type =
    std::array<bool, 4>;
  _external_type external;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__device_id_primary(
    const uint32_t & _arg)
  {
    this->device_id_primary = _arg;
    return *this;
  }
  Type & set__device_ids(
    const std::array<uint32_t, 4> & _arg)
  {
    this->device_ids = _arg;
    return *this;
  }
  Type & set__inconsistency(
    const std::array<float, 4> & _arg)
  {
    this->inconsistency = _arg;
    return *this;
  }
  Type & set__healthy(
    const std::array<bool, 4> & _arg)
  {
    this->healthy = _arg;
    return *this;
  }
  Type & set__priority(
    const std::array<uint8_t, 4> & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__enabled(
    const std::array<bool, 4> & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__external(
    const std::array<bool, 4> & _arg)
  {
    this->external = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::SensorsStatusMag_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::SensorsStatusMag_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorsStatusMag_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorsStatusMag_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorsStatusMag_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorsStatusMag_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorsStatusMag_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorsStatusMag_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorsStatusMag_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorsStatusMag_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__SensorsStatusMag
    std::shared_ptr<px4_msgs::msg::SensorsStatusMag_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__SensorsStatusMag
    std::shared_ptr<px4_msgs::msg::SensorsStatusMag_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorsStatusMag_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->device_id_primary != other.device_id_primary) {
      return false;
    }
    if (this->device_ids != other.device_ids) {
      return false;
    }
    if (this->inconsistency != other.inconsistency) {
      return false;
    }
    if (this->healthy != other.healthy) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->external != other.external) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorsStatusMag_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorsStatusMag_

// alias to use template instance with default allocator
using SensorsStatusMag =
  px4_msgs::msg::SensorsStatusMag_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_MAG__STRUCT_HPP_
