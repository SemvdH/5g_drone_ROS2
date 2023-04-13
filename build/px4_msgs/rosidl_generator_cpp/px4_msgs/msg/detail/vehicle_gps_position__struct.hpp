// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleGpsPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_GPS_POSITION__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_GPS_POSITION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleGpsPosition __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleGpsPosition __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleGpsPosition_
{
  using Type = VehicleGpsPosition_<ContainerAllocator>;

  explicit VehicleGpsPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->lat = 0l;
      this->lon = 0l;
      this->alt = 0l;
      this->alt_ellipsoid = 0l;
      this->s_variance_m_s = 0.0f;
      this->c_variance_rad = 0.0f;
      this->fix_type = 0;
      this->eph = 0.0f;
      this->epv = 0.0f;
      this->hdop = 0.0f;
      this->vdop = 0.0f;
      this->noise_per_ms = 0l;
      this->jamming_indicator = 0l;
      this->jamming_state = 0;
      this->vel_m_s = 0.0f;
      this->vel_n_m_s = 0.0f;
      this->vel_e_m_s = 0.0f;
      this->vel_d_m_s = 0.0f;
      this->cog_rad = 0.0f;
      this->vel_ned_valid = false;
      this->timestamp_time_relative = 0l;
      this->time_utc_usec = 0ull;
      this->satellites_used = 0;
      this->heading = 0.0f;
      this->heading_offset = 0.0f;
      this->selected = 0;
    }
  }

  explicit VehicleGpsPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->lat = 0l;
      this->lon = 0l;
      this->alt = 0l;
      this->alt_ellipsoid = 0l;
      this->s_variance_m_s = 0.0f;
      this->c_variance_rad = 0.0f;
      this->fix_type = 0;
      this->eph = 0.0f;
      this->epv = 0.0f;
      this->hdop = 0.0f;
      this->vdop = 0.0f;
      this->noise_per_ms = 0l;
      this->jamming_indicator = 0l;
      this->jamming_state = 0;
      this->vel_m_s = 0.0f;
      this->vel_n_m_s = 0.0f;
      this->vel_e_m_s = 0.0f;
      this->vel_d_m_s = 0.0f;
      this->cog_rad = 0.0f;
      this->vel_ned_valid = false;
      this->timestamp_time_relative = 0l;
      this->time_utc_usec = 0ull;
      this->satellites_used = 0;
      this->heading = 0.0f;
      this->heading_offset = 0.0f;
      this->selected = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _lat_type =
    int32_t;
  _lat_type lat;
  using _lon_type =
    int32_t;
  _lon_type lon;
  using _alt_type =
    int32_t;
  _alt_type alt;
  using _alt_ellipsoid_type =
    int32_t;
  _alt_ellipsoid_type alt_ellipsoid;
  using _s_variance_m_s_type =
    float;
  _s_variance_m_s_type s_variance_m_s;
  using _c_variance_rad_type =
    float;
  _c_variance_rad_type c_variance_rad;
  using _fix_type_type =
    uint8_t;
  _fix_type_type fix_type;
  using _eph_type =
    float;
  _eph_type eph;
  using _epv_type =
    float;
  _epv_type epv;
  using _hdop_type =
    float;
  _hdop_type hdop;
  using _vdop_type =
    float;
  _vdop_type vdop;
  using _noise_per_ms_type =
    int32_t;
  _noise_per_ms_type noise_per_ms;
  using _jamming_indicator_type =
    int32_t;
  _jamming_indicator_type jamming_indicator;
  using _jamming_state_type =
    uint8_t;
  _jamming_state_type jamming_state;
  using _vel_m_s_type =
    float;
  _vel_m_s_type vel_m_s;
  using _vel_n_m_s_type =
    float;
  _vel_n_m_s_type vel_n_m_s;
  using _vel_e_m_s_type =
    float;
  _vel_e_m_s_type vel_e_m_s;
  using _vel_d_m_s_type =
    float;
  _vel_d_m_s_type vel_d_m_s;
  using _cog_rad_type =
    float;
  _cog_rad_type cog_rad;
  using _vel_ned_valid_type =
    bool;
  _vel_ned_valid_type vel_ned_valid;
  using _timestamp_time_relative_type =
    int32_t;
  _timestamp_time_relative_type timestamp_time_relative;
  using _time_utc_usec_type =
    uint64_t;
  _time_utc_usec_type time_utc_usec;
  using _satellites_used_type =
    uint8_t;
  _satellites_used_type satellites_used;
  using _heading_type =
    float;
  _heading_type heading;
  using _heading_offset_type =
    float;
  _heading_offset_type heading_offset;
  using _selected_type =
    uint8_t;
  _selected_type selected;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__lat(
    const int32_t & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const int32_t & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__alt(
    const int32_t & _arg)
  {
    this->alt = _arg;
    return *this;
  }
  Type & set__alt_ellipsoid(
    const int32_t & _arg)
  {
    this->alt_ellipsoid = _arg;
    return *this;
  }
  Type & set__s_variance_m_s(
    const float & _arg)
  {
    this->s_variance_m_s = _arg;
    return *this;
  }
  Type & set__c_variance_rad(
    const float & _arg)
  {
    this->c_variance_rad = _arg;
    return *this;
  }
  Type & set__fix_type(
    const uint8_t & _arg)
  {
    this->fix_type = _arg;
    return *this;
  }
  Type & set__eph(
    const float & _arg)
  {
    this->eph = _arg;
    return *this;
  }
  Type & set__epv(
    const float & _arg)
  {
    this->epv = _arg;
    return *this;
  }
  Type & set__hdop(
    const float & _arg)
  {
    this->hdop = _arg;
    return *this;
  }
  Type & set__vdop(
    const float & _arg)
  {
    this->vdop = _arg;
    return *this;
  }
  Type & set__noise_per_ms(
    const int32_t & _arg)
  {
    this->noise_per_ms = _arg;
    return *this;
  }
  Type & set__jamming_indicator(
    const int32_t & _arg)
  {
    this->jamming_indicator = _arg;
    return *this;
  }
  Type & set__jamming_state(
    const uint8_t & _arg)
  {
    this->jamming_state = _arg;
    return *this;
  }
  Type & set__vel_m_s(
    const float & _arg)
  {
    this->vel_m_s = _arg;
    return *this;
  }
  Type & set__vel_n_m_s(
    const float & _arg)
  {
    this->vel_n_m_s = _arg;
    return *this;
  }
  Type & set__vel_e_m_s(
    const float & _arg)
  {
    this->vel_e_m_s = _arg;
    return *this;
  }
  Type & set__vel_d_m_s(
    const float & _arg)
  {
    this->vel_d_m_s = _arg;
    return *this;
  }
  Type & set__cog_rad(
    const float & _arg)
  {
    this->cog_rad = _arg;
    return *this;
  }
  Type & set__vel_ned_valid(
    const bool & _arg)
  {
    this->vel_ned_valid = _arg;
    return *this;
  }
  Type & set__timestamp_time_relative(
    const int32_t & _arg)
  {
    this->timestamp_time_relative = _arg;
    return *this;
  }
  Type & set__time_utc_usec(
    const uint64_t & _arg)
  {
    this->time_utc_usec = _arg;
    return *this;
  }
  Type & set__satellites_used(
    const uint8_t & _arg)
  {
    this->satellites_used = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__heading_offset(
    const float & _arg)
  {
    this->heading_offset = _arg;
    return *this;
  }
  Type & set__selected(
    const uint8_t & _arg)
  {
    this->selected = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleGpsPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleGpsPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleGpsPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleGpsPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleGpsPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleGpsPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleGpsPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleGpsPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleGpsPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleGpsPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleGpsPosition
    std::shared_ptr<px4_msgs::msg::VehicleGpsPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleGpsPosition
    std::shared_ptr<px4_msgs::msg::VehicleGpsPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleGpsPosition_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->alt != other.alt) {
      return false;
    }
    if (this->alt_ellipsoid != other.alt_ellipsoid) {
      return false;
    }
    if (this->s_variance_m_s != other.s_variance_m_s) {
      return false;
    }
    if (this->c_variance_rad != other.c_variance_rad) {
      return false;
    }
    if (this->fix_type != other.fix_type) {
      return false;
    }
    if (this->eph != other.eph) {
      return false;
    }
    if (this->epv != other.epv) {
      return false;
    }
    if (this->hdop != other.hdop) {
      return false;
    }
    if (this->vdop != other.vdop) {
      return false;
    }
    if (this->noise_per_ms != other.noise_per_ms) {
      return false;
    }
    if (this->jamming_indicator != other.jamming_indicator) {
      return false;
    }
    if (this->jamming_state != other.jamming_state) {
      return false;
    }
    if (this->vel_m_s != other.vel_m_s) {
      return false;
    }
    if (this->vel_n_m_s != other.vel_n_m_s) {
      return false;
    }
    if (this->vel_e_m_s != other.vel_e_m_s) {
      return false;
    }
    if (this->vel_d_m_s != other.vel_d_m_s) {
      return false;
    }
    if (this->cog_rad != other.cog_rad) {
      return false;
    }
    if (this->vel_ned_valid != other.vel_ned_valid) {
      return false;
    }
    if (this->timestamp_time_relative != other.timestamp_time_relative) {
      return false;
    }
    if (this->time_utc_usec != other.time_utc_usec) {
      return false;
    }
    if (this->satellites_used != other.satellites_used) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->heading_offset != other.heading_offset) {
      return false;
    }
    if (this->selected != other.selected) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleGpsPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleGpsPosition_

// alias to use template instance with default allocator
using VehicleGpsPosition =
  px4_msgs::msg::VehicleGpsPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_GPS_POSITION__STRUCT_HPP_
