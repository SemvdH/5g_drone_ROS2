// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VtolVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vtol_vehicle_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VtolVehicleStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: vtol_in_rw_mode
  {
    out << "vtol_in_rw_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.vtol_in_rw_mode, out);
    out << ", ";
  }

  // member: vtol_in_trans_mode
  {
    out << "vtol_in_trans_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.vtol_in_trans_mode, out);
    out << ", ";
  }

  // member: in_transition_to_fw
  {
    out << "in_transition_to_fw: ";
    rosidl_generator_traits::value_to_yaml(msg.in_transition_to_fw, out);
    out << ", ";
  }

  // member: vtol_transition_failsafe
  {
    out << "vtol_transition_failsafe: ";
    rosidl_generator_traits::value_to_yaml(msg.vtol_transition_failsafe, out);
    out << ", ";
  }

  // member: fw_permanent_stab
  {
    out << "fw_permanent_stab: ";
    rosidl_generator_traits::value_to_yaml(msg.fw_permanent_stab, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VtolVehicleStatus & msg,
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

  // member: vtol_in_rw_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vtol_in_rw_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.vtol_in_rw_mode, out);
    out << "\n";
  }

  // member: vtol_in_trans_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vtol_in_trans_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.vtol_in_trans_mode, out);
    out << "\n";
  }

  // member: in_transition_to_fw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_transition_to_fw: ";
    rosidl_generator_traits::value_to_yaml(msg.in_transition_to_fw, out);
    out << "\n";
  }

  // member: vtol_transition_failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vtol_transition_failsafe: ";
    rosidl_generator_traits::value_to_yaml(msg.vtol_transition_failsafe, out);
    out << "\n";
  }

  // member: fw_permanent_stab
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fw_permanent_stab: ";
    rosidl_generator_traits::value_to_yaml(msg.fw_permanent_stab, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VtolVehicleStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VtolVehicleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VtolVehicleStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VtolVehicleStatus>()
{
  return "px4_msgs::msg::VtolVehicleStatus";
}

template<>
inline const char * name<px4_msgs::msg::VtolVehicleStatus>()
{
  return "px4_msgs/msg/VtolVehicleStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::VtolVehicleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VtolVehicleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VtolVehicleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__TRAITS_HPP_
