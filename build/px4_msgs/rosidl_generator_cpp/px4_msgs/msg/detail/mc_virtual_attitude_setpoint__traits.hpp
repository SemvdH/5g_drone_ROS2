// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/McVirtualAttitudeSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MC_VIRTUAL_ATTITUDE_SETPOINT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__MC_VIRTUAL_ATTITUDE_SETPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/mc_virtual_attitude_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const McVirtualAttitudeSetpoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: roll_body
  {
    out << "roll_body: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_body, out);
    out << ", ";
  }

  // member: pitch_body
  {
    out << "pitch_body: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_body, out);
    out << ", ";
  }

  // member: yaw_body
  {
    out << "yaw_body: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_body, out);
    out << ", ";
  }

  // member: yaw_sp_move_rate
  {
    out << "yaw_sp_move_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_sp_move_rate, out);
    out << ", ";
  }

  // member: q_d
  {
    if (msg.q_d.size() == 0) {
      out << "q_d: []";
    } else {
      out << "q_d: [";
      size_t pending_items = msg.q_d.size();
      for (auto item : msg.q_d) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: thrust_body
  {
    if (msg.thrust_body.size() == 0) {
      out << "thrust_body: []";
    } else {
      out << "thrust_body: [";
      size_t pending_items = msg.thrust_body.size();
      for (auto item : msg.thrust_body) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: roll_reset_integral
  {
    out << "roll_reset_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_reset_integral, out);
    out << ", ";
  }

  // member: pitch_reset_integral
  {
    out << "pitch_reset_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_reset_integral, out);
    out << ", ";
  }

  // member: yaw_reset_integral
  {
    out << "yaw_reset_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_reset_integral, out);
    out << ", ";
  }

  // member: fw_control_yaw
  {
    out << "fw_control_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.fw_control_yaw, out);
    out << ", ";
  }

  // member: apply_flaps
  {
    out << "apply_flaps: ";
    rosidl_generator_traits::value_to_yaml(msg.apply_flaps, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const McVirtualAttitudeSetpoint & msg,
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

  // member: roll_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_body: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_body, out);
    out << "\n";
  }

  // member: pitch_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_body: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_body, out);
    out << "\n";
  }

  // member: yaw_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_body: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_body, out);
    out << "\n";
  }

  // member: yaw_sp_move_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_sp_move_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_sp_move_rate, out);
    out << "\n";
  }

  // member: q_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q_d.size() == 0) {
      out << "q_d: []\n";
    } else {
      out << "q_d:\n";
      for (auto item : msg.q_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: thrust_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.thrust_body.size() == 0) {
      out << "thrust_body: []\n";
    } else {
      out << "thrust_body:\n";
      for (auto item : msg.thrust_body) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: roll_reset_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_reset_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_reset_integral, out);
    out << "\n";
  }

  // member: pitch_reset_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_reset_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_reset_integral, out);
    out << "\n";
  }

  // member: yaw_reset_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_reset_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_reset_integral, out);
    out << "\n";
  }

  // member: fw_control_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fw_control_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.fw_control_yaw, out);
    out << "\n";
  }

  // member: apply_flaps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "apply_flaps: ";
    rosidl_generator_traits::value_to_yaml(msg.apply_flaps, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const McVirtualAttitudeSetpoint & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::McVirtualAttitudeSetpoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::McVirtualAttitudeSetpoint & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::McVirtualAttitudeSetpoint>()
{
  return "px4_msgs::msg::McVirtualAttitudeSetpoint";
}

template<>
inline const char * name<px4_msgs::msg::McVirtualAttitudeSetpoint>()
{
  return "px4_msgs/msg/McVirtualAttitudeSetpoint";
}

template<>
struct has_fixed_size<px4_msgs::msg::McVirtualAttitudeSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::McVirtualAttitudeSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::McVirtualAttitudeSetpoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__MC_VIRTUAL_ATTITUDE_SETPOINT__TRAITS_HPP_
