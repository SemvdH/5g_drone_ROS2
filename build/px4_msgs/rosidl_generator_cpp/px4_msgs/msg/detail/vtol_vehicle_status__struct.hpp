// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VtolVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VtolVehicleStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VtolVehicleStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VtolVehicleStatus_
{
  using Type = VtolVehicleStatus_<ContainerAllocator>;

  explicit VtolVehicleStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->vtol_in_rw_mode = false;
      this->vtol_in_trans_mode = false;
      this->in_transition_to_fw = false;
      this->vtol_transition_failsafe = false;
      this->fw_permanent_stab = false;
    }
  }

  explicit VtolVehicleStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->vtol_in_rw_mode = false;
      this->vtol_in_trans_mode = false;
      this->in_transition_to_fw = false;
      this->vtol_transition_failsafe = false;
      this->fw_permanent_stab = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _vtol_in_rw_mode_type =
    bool;
  _vtol_in_rw_mode_type vtol_in_rw_mode;
  using _vtol_in_trans_mode_type =
    bool;
  _vtol_in_trans_mode_type vtol_in_trans_mode;
  using _in_transition_to_fw_type =
    bool;
  _in_transition_to_fw_type in_transition_to_fw;
  using _vtol_transition_failsafe_type =
    bool;
  _vtol_transition_failsafe_type vtol_transition_failsafe;
  using _fw_permanent_stab_type =
    bool;
  _fw_permanent_stab_type fw_permanent_stab;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__vtol_in_rw_mode(
    const bool & _arg)
  {
    this->vtol_in_rw_mode = _arg;
    return *this;
  }
  Type & set__vtol_in_trans_mode(
    const bool & _arg)
  {
    this->vtol_in_trans_mode = _arg;
    return *this;
  }
  Type & set__in_transition_to_fw(
    const bool & _arg)
  {
    this->in_transition_to_fw = _arg;
    return *this;
  }
  Type & set__vtol_transition_failsafe(
    const bool & _arg)
  {
    this->vtol_transition_failsafe = _arg;
    return *this;
  }
  Type & set__fw_permanent_stab(
    const bool & _arg)
  {
    this->fw_permanent_stab = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t VEHICLE_VTOL_STATE_UNDEFINED =
    0u;
  static constexpr uint8_t VEHICLE_VTOL_STATE_TRANSITION_TO_FW =
    1u;
  static constexpr uint8_t VEHICLE_VTOL_STATE_TRANSITION_TO_MC =
    2u;
  static constexpr uint8_t VEHICLE_VTOL_STATE_MC =
    3u;
  static constexpr uint8_t VEHICLE_VTOL_STATE_FW =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VtolVehicleStatus
    std::shared_ptr<px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VtolVehicleStatus
    std::shared_ptr<px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VtolVehicleStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->vtol_in_rw_mode != other.vtol_in_rw_mode) {
      return false;
    }
    if (this->vtol_in_trans_mode != other.vtol_in_trans_mode) {
      return false;
    }
    if (this->in_transition_to_fw != other.in_transition_to_fw) {
      return false;
    }
    if (this->vtol_transition_failsafe != other.vtol_transition_failsafe) {
      return false;
    }
    if (this->fw_permanent_stab != other.fw_permanent_stab) {
      return false;
    }
    return true;
  }
  bool operator!=(const VtolVehicleStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VtolVehicleStatus_

// alias to use template instance with default allocator
using VtolVehicleStatus =
  px4_msgs::msg::VtolVehicleStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t VtolVehicleStatus_<ContainerAllocator>::VEHICLE_VTOL_STATE_UNDEFINED;
template<typename ContainerAllocator>
constexpr uint8_t VtolVehicleStatus_<ContainerAllocator>::VEHICLE_VTOL_STATE_TRANSITION_TO_FW;
template<typename ContainerAllocator>
constexpr uint8_t VtolVehicleStatus_<ContainerAllocator>::VEHICLE_VTOL_STATE_TRANSITION_TO_MC;
template<typename ContainerAllocator>
constexpr uint8_t VtolVehicleStatus_<ContainerAllocator>::VEHICLE_VTOL_STATE_MC;
template<typename ContainerAllocator>
constexpr uint8_t VtolVehicleStatus_<ContainerAllocator>::VEHICLE_VTOL_STATE_FW;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__STRUCT_HPP_
