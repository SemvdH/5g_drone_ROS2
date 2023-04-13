// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleGpsPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_GPS_POSITION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_GPS_POSITION__BUILDER_HPP_

#include "px4_msgs/msg/detail/vehicle_gps_position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleGpsPosition_selected
{
public:
  explicit Init_VehicleGpsPosition_selected(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleGpsPosition selected(::px4_msgs::msg::VehicleGpsPosition::_selected_type arg)
  {
    msg_.selected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_heading_offset
{
public:
  explicit Init_VehicleGpsPosition_heading_offset(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_selected heading_offset(::px4_msgs::msg::VehicleGpsPosition::_heading_offset_type arg)
  {
    msg_.heading_offset = std::move(arg);
    return Init_VehicleGpsPosition_selected(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_heading
{
public:
  explicit Init_VehicleGpsPosition_heading(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_heading_offset heading(::px4_msgs::msg::VehicleGpsPosition::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_VehicleGpsPosition_heading_offset(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_satellites_used
{
public:
  explicit Init_VehicleGpsPosition_satellites_used(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_heading satellites_used(::px4_msgs::msg::VehicleGpsPosition::_satellites_used_type arg)
  {
    msg_.satellites_used = std::move(arg);
    return Init_VehicleGpsPosition_heading(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_time_utc_usec
{
public:
  explicit Init_VehicleGpsPosition_time_utc_usec(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_satellites_used time_utc_usec(::px4_msgs::msg::VehicleGpsPosition::_time_utc_usec_type arg)
  {
    msg_.time_utc_usec = std::move(arg);
    return Init_VehicleGpsPosition_satellites_used(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_timestamp_time_relative
{
public:
  explicit Init_VehicleGpsPosition_timestamp_time_relative(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_time_utc_usec timestamp_time_relative(::px4_msgs::msg::VehicleGpsPosition::_timestamp_time_relative_type arg)
  {
    msg_.timestamp_time_relative = std::move(arg);
    return Init_VehicleGpsPosition_time_utc_usec(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_vel_ned_valid
{
public:
  explicit Init_VehicleGpsPosition_vel_ned_valid(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_timestamp_time_relative vel_ned_valid(::px4_msgs::msg::VehicleGpsPosition::_vel_ned_valid_type arg)
  {
    msg_.vel_ned_valid = std::move(arg);
    return Init_VehicleGpsPosition_timestamp_time_relative(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_cog_rad
{
public:
  explicit Init_VehicleGpsPosition_cog_rad(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_vel_ned_valid cog_rad(::px4_msgs::msg::VehicleGpsPosition::_cog_rad_type arg)
  {
    msg_.cog_rad = std::move(arg);
    return Init_VehicleGpsPosition_vel_ned_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_vel_d_m_s
{
public:
  explicit Init_VehicleGpsPosition_vel_d_m_s(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_cog_rad vel_d_m_s(::px4_msgs::msg::VehicleGpsPosition::_vel_d_m_s_type arg)
  {
    msg_.vel_d_m_s = std::move(arg);
    return Init_VehicleGpsPosition_cog_rad(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_vel_e_m_s
{
public:
  explicit Init_VehicleGpsPosition_vel_e_m_s(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_vel_d_m_s vel_e_m_s(::px4_msgs::msg::VehicleGpsPosition::_vel_e_m_s_type arg)
  {
    msg_.vel_e_m_s = std::move(arg);
    return Init_VehicleGpsPosition_vel_d_m_s(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_vel_n_m_s
{
public:
  explicit Init_VehicleGpsPosition_vel_n_m_s(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_vel_e_m_s vel_n_m_s(::px4_msgs::msg::VehicleGpsPosition::_vel_n_m_s_type arg)
  {
    msg_.vel_n_m_s = std::move(arg);
    return Init_VehicleGpsPosition_vel_e_m_s(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_vel_m_s
{
public:
  explicit Init_VehicleGpsPosition_vel_m_s(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_vel_n_m_s vel_m_s(::px4_msgs::msg::VehicleGpsPosition::_vel_m_s_type arg)
  {
    msg_.vel_m_s = std::move(arg);
    return Init_VehicleGpsPosition_vel_n_m_s(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_jamming_state
{
public:
  explicit Init_VehicleGpsPosition_jamming_state(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_vel_m_s jamming_state(::px4_msgs::msg::VehicleGpsPosition::_jamming_state_type arg)
  {
    msg_.jamming_state = std::move(arg);
    return Init_VehicleGpsPosition_vel_m_s(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_jamming_indicator
{
public:
  explicit Init_VehicleGpsPosition_jamming_indicator(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_jamming_state jamming_indicator(::px4_msgs::msg::VehicleGpsPosition::_jamming_indicator_type arg)
  {
    msg_.jamming_indicator = std::move(arg);
    return Init_VehicleGpsPosition_jamming_state(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_noise_per_ms
{
public:
  explicit Init_VehicleGpsPosition_noise_per_ms(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_jamming_indicator noise_per_ms(::px4_msgs::msg::VehicleGpsPosition::_noise_per_ms_type arg)
  {
    msg_.noise_per_ms = std::move(arg);
    return Init_VehicleGpsPosition_jamming_indicator(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_vdop
{
public:
  explicit Init_VehicleGpsPosition_vdop(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_noise_per_ms vdop(::px4_msgs::msg::VehicleGpsPosition::_vdop_type arg)
  {
    msg_.vdop = std::move(arg);
    return Init_VehicleGpsPosition_noise_per_ms(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_hdop
{
public:
  explicit Init_VehicleGpsPosition_hdop(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_vdop hdop(::px4_msgs::msg::VehicleGpsPosition::_hdop_type arg)
  {
    msg_.hdop = std::move(arg);
    return Init_VehicleGpsPosition_vdop(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_epv
{
public:
  explicit Init_VehicleGpsPosition_epv(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_hdop epv(::px4_msgs::msg::VehicleGpsPosition::_epv_type arg)
  {
    msg_.epv = std::move(arg);
    return Init_VehicleGpsPosition_hdop(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_eph
{
public:
  explicit Init_VehicleGpsPosition_eph(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_epv eph(::px4_msgs::msg::VehicleGpsPosition::_eph_type arg)
  {
    msg_.eph = std::move(arg);
    return Init_VehicleGpsPosition_epv(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_fix_type
{
public:
  explicit Init_VehicleGpsPosition_fix_type(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_eph fix_type(::px4_msgs::msg::VehicleGpsPosition::_fix_type_type arg)
  {
    msg_.fix_type = std::move(arg);
    return Init_VehicleGpsPosition_eph(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_c_variance_rad
{
public:
  explicit Init_VehicleGpsPosition_c_variance_rad(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_fix_type c_variance_rad(::px4_msgs::msg::VehicleGpsPosition::_c_variance_rad_type arg)
  {
    msg_.c_variance_rad = std::move(arg);
    return Init_VehicleGpsPosition_fix_type(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_s_variance_m_s
{
public:
  explicit Init_VehicleGpsPosition_s_variance_m_s(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_c_variance_rad s_variance_m_s(::px4_msgs::msg::VehicleGpsPosition::_s_variance_m_s_type arg)
  {
    msg_.s_variance_m_s = std::move(arg);
    return Init_VehicleGpsPosition_c_variance_rad(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_alt_ellipsoid
{
public:
  explicit Init_VehicleGpsPosition_alt_ellipsoid(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_s_variance_m_s alt_ellipsoid(::px4_msgs::msg::VehicleGpsPosition::_alt_ellipsoid_type arg)
  {
    msg_.alt_ellipsoid = std::move(arg);
    return Init_VehicleGpsPosition_s_variance_m_s(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_alt
{
public:
  explicit Init_VehicleGpsPosition_alt(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_alt_ellipsoid alt(::px4_msgs::msg::VehicleGpsPosition::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return Init_VehicleGpsPosition_alt_ellipsoid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_lon
{
public:
  explicit Init_VehicleGpsPosition_lon(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_alt lon(::px4_msgs::msg::VehicleGpsPosition::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_VehicleGpsPosition_alt(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_lat
{
public:
  explicit Init_VehicleGpsPosition_lat(::px4_msgs::msg::VehicleGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGpsPosition_lon lat(::px4_msgs::msg::VehicleGpsPosition::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_VehicleGpsPosition_lon(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

class Init_VehicleGpsPosition_timestamp
{
public:
  Init_VehicleGpsPosition_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleGpsPosition_lat timestamp(::px4_msgs::msg::VehicleGpsPosition::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleGpsPosition_lat(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGpsPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleGpsPosition>()
{
  return px4_msgs::msg::builder::Init_VehicleGpsPosition_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_GPS_POSITION__BUILDER_HPP_
