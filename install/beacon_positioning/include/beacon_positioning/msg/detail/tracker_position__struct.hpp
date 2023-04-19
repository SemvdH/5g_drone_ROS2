// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from beacon_positioning:msg/TrackerPosition.idl
// generated code does not contain a copyright notice

#ifndef BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__STRUCT_HPP_
#define BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__beacon_positioning__msg__TrackerPosition __attribute__((deprecated))
#else
# define DEPRECATED__beacon_positioning__msg__TrackerPosition __declspec(deprecated)
#endif

namespace beacon_positioning
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackerPosition_
{
  using Type = TrackerPosition_<ContainerAllocator>;

  explicit TrackerPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->x_pos = 0ll;
      this->y_pos = 0ll;
      this->z_pos = 0ll;
      std::fill<typename std::array<int64_t, 4>::iterator, int64_t>(this->anchor_distances.begin(), this->anchor_distances.end(), 0ll);
    }
  }

  explicit TrackerPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : anchor_distances(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->x_pos = 0ll;
      this->y_pos = 0ll;
      this->z_pos = 0ll;
      std::fill<typename std::array<int64_t, 4>::iterator, int64_t>(this->anchor_distances.begin(), this->anchor_distances.end(), 0ll);
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _x_pos_type =
    int64_t;
  _x_pos_type x_pos;
  using _y_pos_type =
    int64_t;
  _y_pos_type y_pos;
  using _z_pos_type =
    int64_t;
  _z_pos_type z_pos;
  using _anchor_distances_type =
    std::array<int64_t, 4>;
  _anchor_distances_type anchor_distances;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__x_pos(
    const int64_t & _arg)
  {
    this->x_pos = _arg;
    return *this;
  }
  Type & set__y_pos(
    const int64_t & _arg)
  {
    this->y_pos = _arg;
    return *this;
  }
  Type & set__z_pos(
    const int64_t & _arg)
  {
    this->z_pos = _arg;
    return *this;
  }
  Type & set__anchor_distances(
    const std::array<int64_t, 4> & _arg)
  {
    this->anchor_distances = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beacon_positioning::msg::TrackerPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const beacon_positioning::msg::TrackerPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beacon_positioning::msg::TrackerPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beacon_positioning::msg::TrackerPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beacon_positioning::msg::TrackerPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beacon_positioning::msg::TrackerPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beacon_positioning::msg::TrackerPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beacon_positioning::msg::TrackerPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beacon_positioning::msg::TrackerPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beacon_positioning::msg::TrackerPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beacon_positioning__msg__TrackerPosition
    std::shared_ptr<beacon_positioning::msg::TrackerPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beacon_positioning__msg__TrackerPosition
    std::shared_ptr<beacon_positioning::msg::TrackerPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackerPosition_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->x_pos != other.x_pos) {
      return false;
    }
    if (this->y_pos != other.y_pos) {
      return false;
    }
    if (this->z_pos != other.z_pos) {
      return false;
    }
    if (this->anchor_distances != other.anchor_distances) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackerPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackerPosition_

// alias to use template instance with default allocator
using TrackerPosition =
  beacon_positioning::msg::TrackerPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace beacon_positioning

#endif  // BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__STRUCT_HPP_
