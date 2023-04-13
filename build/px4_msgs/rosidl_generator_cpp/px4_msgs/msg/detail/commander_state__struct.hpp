// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/CommanderState.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__COMMANDER_STATE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__COMMANDER_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__CommanderState __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__CommanderState __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CommanderState_
{
  using Type = CommanderState_<ContainerAllocator>;

  explicit CommanderState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->main_state = 0;
      this->main_state_changes = 0;
    }
  }

  explicit CommanderState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->main_state = 0;
      this->main_state_changes = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _main_state_type =
    uint8_t;
  _main_state_type main_state;
  using _main_state_changes_type =
    uint16_t;
  _main_state_changes_type main_state_changes;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__main_state(
    const uint8_t & _arg)
  {
    this->main_state = _arg;
    return *this;
  }
  Type & set__main_state_changes(
    const uint16_t & _arg)
  {
    this->main_state_changes = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MAIN_STATE_MANUAL =
    0u;
  static constexpr uint8_t MAIN_STATE_ALTCTL =
    1u;
  static constexpr uint8_t MAIN_STATE_POSCTL =
    2u;
  static constexpr uint8_t MAIN_STATE_AUTO_MISSION =
    3u;
  static constexpr uint8_t MAIN_STATE_AUTO_LOITER =
    4u;
  static constexpr uint8_t MAIN_STATE_AUTO_RTL =
    5u;
  static constexpr uint8_t MAIN_STATE_ACRO =
    6u;
  static constexpr uint8_t MAIN_STATE_OFFBOARD =
    7u;
  static constexpr uint8_t MAIN_STATE_STAB =
    8u;
  static constexpr uint8_t MAIN_STATE_AUTO_TAKEOFF =
    10u;
  static constexpr uint8_t MAIN_STATE_AUTO_LAND =
    11u;
  static constexpr uint8_t MAIN_STATE_AUTO_FOLLOW_TARGET =
    12u;
  static constexpr uint8_t MAIN_STATE_AUTO_PRECLAND =
    13u;
  static constexpr uint8_t MAIN_STATE_ORBIT =
    14u;
  static constexpr uint8_t MAIN_STATE_AUTO_VTOL_TAKEOFF =
    15u;
  static constexpr uint8_t MAIN_STATE_MAX =
    16u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::CommanderState_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::CommanderState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::CommanderState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::CommanderState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CommanderState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CommanderState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CommanderState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CommanderState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::CommanderState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::CommanderState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__CommanderState
    std::shared_ptr<px4_msgs::msg::CommanderState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__CommanderState
    std::shared_ptr<px4_msgs::msg::CommanderState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommanderState_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->main_state != other.main_state) {
      return false;
    }
    if (this->main_state_changes != other.main_state_changes) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommanderState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommanderState_

// alias to use template instance with default allocator
using CommanderState =
  px4_msgs::msg::CommanderState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t CommanderState_<ContainerAllocator>::MAIN_STATE_MANUAL;
template<typename ContainerAllocator>
constexpr uint8_t CommanderState_<ContainerAllocator>::MAIN_STATE_ALTCTL;
template<typename ContainerAllocator>
constexpr uint8_t CommanderState_<ContainerAllocator>::MAIN_STATE_POSCTL;
template<typename ContainerAllocator>
constexpr uint8_t CommanderState_<ContainerAllocator>::MAIN_STATE_AUTO_MISSION;
template<typename ContainerAllocator>
constexpr uint8_t CommanderState_<ContainerAllocator>::MAIN_STATE_AUTO_LOITER;
template<typename ContainerAllocator>
constexpr uint8_t CommanderState_<ContainerAllocator>::MAIN_STATE_AUTO_RTL;
template<typename ContainerAllocator>
constexpr uint8_t CommanderState_<ContainerAllocator>::MAIN_STATE_ACRO;
template<typename ContainerAllocator>
constexpr uint8_t CommanderState_<ContainerAllocator>::MAIN_STATE_OFFBOARD;
template<typename ContainerAllocator>
constexpr uint8_t CommanderState_<ContainerAllocator>::MAIN_STATE_STAB;
template<typename ContainerAllocator>
constexpr uint8_t CommanderState_<ContainerAllocator>::MAIN_STATE_AUTO_TAKEOFF;
template<typename ContainerAllocator>
constexpr uint8_t CommanderState_<ContainerAllocator>::MAIN_STATE_AUTO_LAND;
template<typename ContainerAllocator>
constexpr uint8_t CommanderState_<ContainerAllocator>::MAIN_STATE_AUTO_FOLLOW_TARGET;
template<typename ContainerAllocator>
constexpr uint8_t CommanderState_<ContainerAllocator>::MAIN_STATE_AUTO_PRECLAND;
template<typename ContainerAllocator>
constexpr uint8_t CommanderState_<ContainerAllocator>::MAIN_STATE_ORBIT;
template<typename ContainerAllocator>
constexpr uint8_t CommanderState_<ContainerAllocator>::MAIN_STATE_AUTO_VTOL_TAKEOFF;
template<typename ContainerAllocator>
constexpr uint8_t CommanderState_<ContainerAllocator>::MAIN_STATE_MAX;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__COMMANDER_STATE__STRUCT_HPP_
