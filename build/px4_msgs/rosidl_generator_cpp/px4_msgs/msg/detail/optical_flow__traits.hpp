// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/OpticalFlow.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPTICAL_FLOW__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__OPTICAL_FLOW__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/optical_flow__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OpticalFlow & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: sensor_id
  {
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << ", ";
  }

  // member: pixel_flow_x_integral
  {
    out << "pixel_flow_x_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.pixel_flow_x_integral, out);
    out << ", ";
  }

  // member: pixel_flow_y_integral
  {
    out << "pixel_flow_y_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.pixel_flow_y_integral, out);
    out << ", ";
  }

  // member: gyro_x_rate_integral
  {
    out << "gyro_x_rate_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_x_rate_integral, out);
    out << ", ";
  }

  // member: gyro_y_rate_integral
  {
    out << "gyro_y_rate_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_y_rate_integral, out);
    out << ", ";
  }

  // member: gyro_z_rate_integral
  {
    out << "gyro_z_rate_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_z_rate_integral, out);
    out << ", ";
  }

  // member: ground_distance_m
  {
    out << "ground_distance_m: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_distance_m, out);
    out << ", ";
  }

  // member: integration_timespan
  {
    out << "integration_timespan: ";
    rosidl_generator_traits::value_to_yaml(msg.integration_timespan, out);
    out << ", ";
  }

  // member: time_since_last_sonar_update
  {
    out << "time_since_last_sonar_update: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_last_sonar_update, out);
    out << ", ";
  }

  // member: frame_count_since_last_readout
  {
    out << "frame_count_since_last_readout: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_count_since_last_readout, out);
    out << ", ";
  }

  // member: gyro_temperature
  {
    out << "gyro_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_temperature, out);
    out << ", ";
  }

  // member: quality
  {
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
    out << ", ";
  }

  // member: max_flow_rate
  {
    out << "max_flow_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_flow_rate, out);
    out << ", ";
  }

  // member: min_ground_distance
  {
    out << "min_ground_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.min_ground_distance, out);
    out << ", ";
  }

  // member: max_ground_distance
  {
    out << "max_ground_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_ground_distance, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpticalFlow & msg,
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

  // member: sensor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << "\n";
  }

  // member: pixel_flow_x_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pixel_flow_x_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.pixel_flow_x_integral, out);
    out << "\n";
  }

  // member: pixel_flow_y_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pixel_flow_y_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.pixel_flow_y_integral, out);
    out << "\n";
  }

  // member: gyro_x_rate_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_x_rate_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_x_rate_integral, out);
    out << "\n";
  }

  // member: gyro_y_rate_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_y_rate_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_y_rate_integral, out);
    out << "\n";
  }

  // member: gyro_z_rate_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_z_rate_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_z_rate_integral, out);
    out << "\n";
  }

  // member: ground_distance_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_distance_m: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_distance_m, out);
    out << "\n";
  }

  // member: integration_timespan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integration_timespan: ";
    rosidl_generator_traits::value_to_yaml(msg.integration_timespan, out);
    out << "\n";
  }

  // member: time_since_last_sonar_update
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_since_last_sonar_update: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_last_sonar_update, out);
    out << "\n";
  }

  // member: frame_count_since_last_readout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_count_since_last_readout: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_count_since_last_readout, out);
    out << "\n";
  }

  // member: gyro_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_temperature, out);
    out << "\n";
  }

  // member: quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
    out << "\n";
  }

  // member: max_flow_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_flow_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_flow_rate, out);
    out << "\n";
  }

  // member: min_ground_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_ground_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.min_ground_distance, out);
    out << "\n";
  }

  // member: max_ground_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_ground_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_ground_distance, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpticalFlow & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::OpticalFlow & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::OpticalFlow & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::OpticalFlow>()
{
  return "px4_msgs::msg::OpticalFlow";
}

template<>
inline const char * name<px4_msgs::msg::OpticalFlow>()
{
  return "px4_msgs/msg/OpticalFlow";
}

template<>
struct has_fixed_size<px4_msgs::msg::OpticalFlow>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::OpticalFlow>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::OpticalFlow>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__OPTICAL_FLOW__TRAITS_HPP_
