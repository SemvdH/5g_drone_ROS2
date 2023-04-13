// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleTrajectoryWaypointDesired.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT_DESIRED__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT_DESIRED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'waypoints'
#include "px4_msgs/msg/detail/trajectory_waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleTrajectoryWaypointDesired __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleTrajectoryWaypointDesired __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleTrajectoryWaypointDesired_
{
  using Type = VehicleTrajectoryWaypointDesired_<ContainerAllocator>;

  explicit VehicleTrajectoryWaypointDesired_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->type = 0;
      this->waypoints.fill(px4_msgs::msg::TrajectoryWaypoint_<ContainerAllocator>{_init});
    }
  }

  explicit VehicleTrajectoryWaypointDesired_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoints(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->type = 0;
      this->waypoints.fill(px4_msgs::msg::TrajectoryWaypoint_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _type_type =
    uint8_t;
  _type_type type;
  using _waypoints_type =
    std::array<px4_msgs::msg::TrajectoryWaypoint_<ContainerAllocator>, 5>;
  _waypoints_type waypoints;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__waypoints(
    const std::array<px4_msgs::msg::TrajectoryWaypoint_<ContainerAllocator>, 5> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS =
    0u;
  static constexpr uint8_t POINT_0 =
    0u;
  static constexpr uint8_t POINT_1 =
    1u;
  static constexpr uint8_t POINT_2 =
    2u;
  static constexpr uint8_t POINT_3 =
    3u;
  static constexpr uint8_t POINT_4 =
    4u;
  static constexpr uint8_t NUMBER_POINTS =
    5u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleTrajectoryWaypointDesired_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleTrajectoryWaypointDesired_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleTrajectoryWaypointDesired_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleTrajectoryWaypointDesired_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleTrajectoryWaypointDesired_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleTrajectoryWaypointDesired_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleTrajectoryWaypointDesired_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleTrajectoryWaypointDesired_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleTrajectoryWaypointDesired_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleTrajectoryWaypointDesired_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleTrajectoryWaypointDesired
    std::shared_ptr<px4_msgs::msg::VehicleTrajectoryWaypointDesired_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleTrajectoryWaypointDesired
    std::shared_ptr<px4_msgs::msg::VehicleTrajectoryWaypointDesired_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleTrajectoryWaypointDesired_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleTrajectoryWaypointDesired_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleTrajectoryWaypointDesired_

// alias to use template instance with default allocator
using VehicleTrajectoryWaypointDesired =
  px4_msgs::msg::VehicleTrajectoryWaypointDesired_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryWaypointDesired_<ContainerAllocator>::MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS;
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryWaypointDesired_<ContainerAllocator>::POINT_0;
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryWaypointDesired_<ContainerAllocator>::POINT_1;
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryWaypointDesired_<ContainerAllocator>::POINT_2;
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryWaypointDesired_<ContainerAllocator>::POINT_3;
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryWaypointDesired_<ContainerAllocator>::POINT_4;
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryWaypointDesired_<ContainerAllocator>::NUMBER_POINTS;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT_DESIRED__STRUCT_HPP_
