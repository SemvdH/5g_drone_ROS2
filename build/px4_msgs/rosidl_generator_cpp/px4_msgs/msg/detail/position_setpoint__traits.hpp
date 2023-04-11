// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/position_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PositionSetpoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: valid
  {
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: vx
  {
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << ", ";
  }

  // member: vy
  {
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << ", ";
  }

  // member: vz
  {
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << ", ";
  }

  // member: velocity_valid
  {
    out << "velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_valid, out);
    out << ", ";
  }

  // member: velocity_frame
  {
    out << "velocity_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_frame, out);
    out << ", ";
  }

  // member: alt_valid
  {
    out << "alt_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_valid, out);
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

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: yaw_valid
  {
    out << "yaw_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_valid, out);
    out << ", ";
  }

  // member: yawspeed
  {
    out << "yawspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.yawspeed, out);
    out << ", ";
  }

  // member: yawspeed_valid
  {
    out << "yawspeed_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.yawspeed_valid, out);
    out << ", ";
  }

  // member: landing_gear
  {
    out << "landing_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.landing_gear, out);
    out << ", ";
  }

  // member: loiter_radius
  {
    out << "loiter_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.loiter_radius, out);
    out << ", ";
  }

  // member: loiter_direction
  {
    out << "loiter_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.loiter_direction, out);
    out << ", ";
  }

  // member: acceptance_radius
  {
    out << "acceptance_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.acceptance_radius, out);
    out << ", ";
  }

  // member: cruising_speed
  {
    out << "cruising_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cruising_speed, out);
    out << ", ";
  }

  // member: cruising_throttle
  {
    out << "cruising_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.cruising_throttle, out);
    out << ", ";
  }

  // member: disable_weather_vane
  {
    out << "disable_weather_vane: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_weather_vane, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionSetpoint & msg,
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

  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << "\n";
  }

  // member: vy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << "\n";
  }

  // member: vz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << "\n";
  }

  // member: velocity_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_valid, out);
    out << "\n";
  }

  // member: velocity_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_frame, out);
    out << "\n";
  }

  // member: alt_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_valid, out);
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

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: yaw_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_valid, out);
    out << "\n";
  }

  // member: yawspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.yawspeed, out);
    out << "\n";
  }

  // member: yawspeed_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawspeed_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.yawspeed_valid, out);
    out << "\n";
  }

  // member: landing_gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "landing_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.landing_gear, out);
    out << "\n";
  }

  // member: loiter_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loiter_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.loiter_radius, out);
    out << "\n";
  }

  // member: loiter_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loiter_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.loiter_direction, out);
    out << "\n";
  }

  // member: acceptance_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceptance_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.acceptance_radius, out);
    out << "\n";
  }

  // member: cruising_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cruising_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cruising_speed, out);
    out << "\n";
  }

  // member: cruising_throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cruising_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.cruising_throttle, out);
    out << "\n";
  }

  // member: disable_weather_vane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_weather_vane: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_weather_vane, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionSetpoint & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::PositionSetpoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::PositionSetpoint & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::PositionSetpoint>()
{
  return "px4_msgs::msg::PositionSetpoint";
}

template<>
inline const char * name<px4_msgs::msg::PositionSetpoint>()
{
  return "px4_msgs/msg/PositionSetpoint";
}

template<>
struct has_fixed_size<px4_msgs::msg::PositionSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::PositionSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::PositionSetpoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__TRAITS_HPP_
