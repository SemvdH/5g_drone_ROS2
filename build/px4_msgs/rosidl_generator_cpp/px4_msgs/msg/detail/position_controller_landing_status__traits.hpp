// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/PositionControllerLandingStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_LANDING_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_LANDING_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/position_controller_landing_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PositionControllerLandingStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: horizontal_slope_displacement
  {
    out << "horizontal_slope_displacement: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_slope_displacement, out);
    out << ", ";
  }

  // member: slope_angle_rad
  {
    out << "slope_angle_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.slope_angle_rad, out);
    out << ", ";
  }

  // member: flare_length
  {
    out << "flare_length: ";
    rosidl_generator_traits::value_to_yaml(msg.flare_length, out);
    out << ", ";
  }

  // member: abort_landing
  {
    out << "abort_landing: ";
    rosidl_generator_traits::value_to_yaml(msg.abort_landing, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionControllerLandingStatus & msg,
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

  // member: horizontal_slope_displacement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_slope_displacement: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_slope_displacement, out);
    out << "\n";
  }

  // member: slope_angle_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slope_angle_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.slope_angle_rad, out);
    out << "\n";
  }

  // member: flare_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flare_length: ";
    rosidl_generator_traits::value_to_yaml(msg.flare_length, out);
    out << "\n";
  }

  // member: abort_landing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abort_landing: ";
    rosidl_generator_traits::value_to_yaml(msg.abort_landing, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionControllerLandingStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::PositionControllerLandingStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::PositionControllerLandingStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::PositionControllerLandingStatus>()
{
  return "px4_msgs::msg::PositionControllerLandingStatus";
}

template<>
inline const char * name<px4_msgs::msg::PositionControllerLandingStatus>()
{
  return "px4_msgs/msg/PositionControllerLandingStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::PositionControllerLandingStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::PositionControllerLandingStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::PositionControllerLandingStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_LANDING_STATUS__TRAITS_HPP_
