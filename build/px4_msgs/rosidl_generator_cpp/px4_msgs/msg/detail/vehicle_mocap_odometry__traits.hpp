// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleMocapOdometry.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_MOCAP_ODOMETRY__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_MOCAP_ODOMETRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vehicle_mocap_odometry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleMocapOdometry & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: timestamp_sample
  {
    out << "timestamp_sample: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_sample, out);
    out << ", ";
  }

  // member: local_frame
  {
    out << "local_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.local_frame, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: q
  {
    if (msg.q.size() == 0) {
      out << "q: []";
    } else {
      out << "q: [";
      size_t pending_items = msg.q.size();
      for (auto item : msg.q) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: q_offset
  {
    if (msg.q_offset.size() == 0) {
      out << "q_offset: []";
    } else {
      out << "q_offset: [";
      size_t pending_items = msg.q_offset.size();
      for (auto item : msg.q_offset) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pose_covariance
  {
    if (msg.pose_covariance.size() == 0) {
      out << "pose_covariance: []";
    } else {
      out << "pose_covariance: [";
      size_t pending_items = msg.pose_covariance.size();
      for (auto item : msg.pose_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity_frame
  {
    out << "velocity_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_frame, out);
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

  // member: rollspeed
  {
    out << "rollspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.rollspeed, out);
    out << ", ";
  }

  // member: pitchspeed
  {
    out << "pitchspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.pitchspeed, out);
    out << ", ";
  }

  // member: yawspeed
  {
    out << "yawspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.yawspeed, out);
    out << ", ";
  }

  // member: velocity_covariance
  {
    if (msg.velocity_covariance.size() == 0) {
      out << "velocity_covariance: []";
    } else {
      out << "velocity_covariance: [";
      size_t pending_items = msg.velocity_covariance.size();
      for (auto item : msg.velocity_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reset_counter
  {
    out << "reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_counter, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleMocapOdometry & msg,
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

  // member: timestamp_sample
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_sample: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_sample, out);
    out << "\n";
  }

  // member: local_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.local_frame, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q.size() == 0) {
      out << "q: []\n";
    } else {
      out << "q:\n";
      for (auto item : msg.q) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: q_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q_offset.size() == 0) {
      out << "q_offset: []\n";
    } else {
      out << "q_offset:\n";
      for (auto item : msg.q_offset) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pose_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose_covariance.size() == 0) {
      out << "pose_covariance: []\n";
    } else {
      out << "pose_covariance:\n";
      for (auto item : msg.pose_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: rollspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rollspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.rollspeed, out);
    out << "\n";
  }

  // member: pitchspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitchspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.pitchspeed, out);
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

  // member: velocity_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity_covariance.size() == 0) {
      out << "velocity_covariance: []\n";
    } else {
      out << "velocity_covariance:\n";
      for (auto item : msg.velocity_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: reset_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_counter, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleMocapOdometry & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VehicleMocapOdometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VehicleMocapOdometry & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleMocapOdometry>()
{
  return "px4_msgs::msg::VehicleMocapOdometry";
}

template<>
inline const char * name<px4_msgs::msg::VehicleMocapOdometry>()
{
  return "px4_msgs/msg/VehicleMocapOdometry";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleMocapOdometry>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleMocapOdometry>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleMocapOdometry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_MOCAP_ODOMETRY__TRAITS_HPP_
