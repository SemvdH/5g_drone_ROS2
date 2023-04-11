// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/Safety.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SAFETY__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SAFETY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/safety__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Safety & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: safety_switch_available
  {
    out << "safety_switch_available: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_switch_available, out);
    out << ", ";
  }

  // member: safety_off
  {
    out << "safety_off: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_off, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Safety & msg,
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

  // member: safety_switch_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_switch_available: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_switch_available, out);
    out << "\n";
  }

  // member: safety_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_off: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_off, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Safety & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::Safety & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::Safety & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::Safety>()
{
  return "px4_msgs::msg::Safety";
}

template<>
inline const char * name<px4_msgs::msg::Safety>()
{
  return "px4_msgs/msg/Safety";
}

template<>
struct has_fixed_size<px4_msgs::msg::Safety>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::Safety>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::Safety>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SAFETY__TRAITS_HPP_
