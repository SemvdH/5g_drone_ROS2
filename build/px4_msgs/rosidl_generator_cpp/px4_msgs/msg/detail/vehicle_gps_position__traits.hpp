// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleGpsPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_GPS_POSITION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_GPS_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vehicle_gps_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleGpsPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << ", ";
  }

  // member: alt
  {
    out << "alt: ";
    rosidl_generator_traits::value_to_yaml(msg.alt, out);
    out << ", ";
  }

  // member: alt_ellipsoid
  {
    out << "alt_ellipsoid: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_ellipsoid, out);
    out << ", ";
  }

  // member: s_variance_m_s
  {
    out << "s_variance_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.s_variance_m_s, out);
    out << ", ";
  }

  // member: c_variance_rad
  {
    out << "c_variance_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.c_variance_rad, out);
    out << ", ";
  }

  // member: fix_type
  {
    out << "fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_type, out);
    out << ", ";
  }

  // member: eph
  {
    out << "eph: ";
    rosidl_generator_traits::value_to_yaml(msg.eph, out);
    out << ", ";
  }

  // member: epv
  {
    out << "epv: ";
    rosidl_generator_traits::value_to_yaml(msg.epv, out);
    out << ", ";
  }

  // member: hdop
  {
    out << "hdop: ";
    rosidl_generator_traits::value_to_yaml(msg.hdop, out);
    out << ", ";
  }

  // member: vdop
  {
    out << "vdop: ";
    rosidl_generator_traits::value_to_yaml(msg.vdop, out);
    out << ", ";
  }

  // member: noise_per_ms
  {
    out << "noise_per_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.noise_per_ms, out);
    out << ", ";
  }

  // member: jamming_indicator
  {
    out << "jamming_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.jamming_indicator, out);
    out << ", ";
  }

  // member: jamming_state
  {
    out << "jamming_state: ";
    rosidl_generator_traits::value_to_yaml(msg.jamming_state, out);
    out << ", ";
  }

  // member: vel_m_s
  {
    out << "vel_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_m_s, out);
    out << ", ";
  }

  // member: vel_n_m_s
  {
    out << "vel_n_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_n_m_s, out);
    out << ", ";
  }

  // member: vel_e_m_s
  {
    out << "vel_e_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_e_m_s, out);
    out << ", ";
  }

  // member: vel_d_m_s
  {
    out << "vel_d_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_d_m_s, out);
    out << ", ";
  }

  // member: cog_rad
  {
    out << "cog_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.cog_rad, out);
    out << ", ";
  }

  // member: vel_ned_valid
  {
    out << "vel_ned_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_ned_valid, out);
    out << ", ";
  }

  // member: timestamp_time_relative
  {
    out << "timestamp_time_relative: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_time_relative, out);
    out << ", ";
  }

  // member: time_utc_usec
  {
    out << "time_utc_usec: ";
    rosidl_generator_traits::value_to_yaml(msg.time_utc_usec, out);
    out << ", ";
  }

  // member: satellites_used
  {
    out << "satellites_used: ";
    rosidl_generator_traits::value_to_yaml(msg.satellites_used, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: heading_offset
  {
    out << "heading_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_offset, out);
    out << ", ";
  }

  // member: selected
  {
    out << "selected: ";
    rosidl_generator_traits::value_to_yaml(msg.selected, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleGpsPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt: ";
    rosidl_generator_traits::value_to_yaml(msg.alt, out);
    out << "\n";
  }

  // member: alt_ellipsoid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt_ellipsoid: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_ellipsoid, out);
    out << "\n";
  }

  // member: s_variance_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_variance_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.s_variance_m_s, out);
    out << "\n";
  }

  // member: c_variance_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c_variance_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.c_variance_rad, out);
    out << "\n";
  }

  // member: fix_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_type, out);
    out << "\n";
  }

  // member: eph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eph: ";
    rosidl_generator_traits::value_to_yaml(msg.eph, out);
    out << "\n";
  }

  // member: epv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epv: ";
    rosidl_generator_traits::value_to_yaml(msg.epv, out);
    out << "\n";
  }

  // member: hdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hdop: ";
    rosidl_generator_traits::value_to_yaml(msg.hdop, out);
    out << "\n";
  }

  // member: vdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vdop: ";
    rosidl_generator_traits::value_to_yaml(msg.vdop, out);
    out << "\n";
  }

  // member: noise_per_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "noise_per_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.noise_per_ms, out);
    out << "\n";
  }

  // member: jamming_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jamming_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.jamming_indicator, out);
    out << "\n";
  }

  // member: jamming_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jamming_state: ";
    rosidl_generator_traits::value_to_yaml(msg.jamming_state, out);
    out << "\n";
  }

  // member: vel_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_m_s, out);
    out << "\n";
  }

  // member: vel_n_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_n_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_n_m_s, out);
    out << "\n";
  }

  // member: vel_e_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_e_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_e_m_s, out);
    out << "\n";
  }

  // member: vel_d_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_d_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_d_m_s, out);
    out << "\n";
  }

  // member: cog_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cog_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.cog_rad, out);
    out << "\n";
  }

  // member: vel_ned_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_ned_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_ned_valid, out);
    out << "\n";
  }

  // member: timestamp_time_relative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_time_relative: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_time_relative, out);
    out << "\n";
  }

  // member: time_utc_usec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_utc_usec: ";
    rosidl_generator_traits::value_to_yaml(msg.time_utc_usec, out);
    out << "\n";
  }

  // member: satellites_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "satellites_used: ";
    rosidl_generator_traits::value_to_yaml(msg.satellites_used, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: heading_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_offset, out);
    out << "\n";
  }

  // member: selected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "selected: ";
    rosidl_generator_traits::value_to_yaml(msg.selected, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleGpsPosition & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_generator_traits
{

[[deprecated("use px4_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_msgs::msg::VehicleGpsPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VehicleGpsPosition & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleGpsPosition>()
{
  return "px4_msgs::msg::VehicleGpsPosition";
}

template<>
inline const char * name<px4_msgs::msg::VehicleGpsPosition>()
{
  return "px4_msgs/msg/VehicleGpsPosition";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleGpsPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleGpsPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleGpsPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_GPS_POSITION__TRAITS_HPP_
