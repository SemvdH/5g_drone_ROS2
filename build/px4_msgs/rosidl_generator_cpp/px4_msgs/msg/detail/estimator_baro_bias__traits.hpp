// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorBaroBias.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_BARO_BIAS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_BARO_BIAS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/estimator_baro_bias__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EstimatorBaroBias & msg,
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

  // member: baro_device_id
  {
    out << "baro_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_device_id, out);
    out << ", ";
  }

  // member: bias
  {
    out << "bias: ";
    rosidl_generator_traits::value_to_yaml(msg.bias, out);
    out << ", ";
  }

  // member: bias_var
  {
    out << "bias_var: ";
    rosidl_generator_traits::value_to_yaml(msg.bias_var, out);
    out << ", ";
  }

  // member: innov
  {
    out << "innov: ";
    rosidl_generator_traits::value_to_yaml(msg.innov, out);
    out << ", ";
  }

  // member: innov_var
  {
    out << "innov_var: ";
    rosidl_generator_traits::value_to_yaml(msg.innov_var, out);
    out << ", ";
  }

  // member: innov_test_ratio
  {
    out << "innov_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.innov_test_ratio, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EstimatorBaroBias & msg,
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

  // member: baro_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_device_id, out);
    out << "\n";
  }

  // member: bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bias: ";
    rosidl_generator_traits::value_to_yaml(msg.bias, out);
    out << "\n";
  }

  // member: bias_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bias_var: ";
    rosidl_generator_traits::value_to_yaml(msg.bias_var, out);
    out << "\n";
  }

  // member: innov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innov: ";
    rosidl_generator_traits::value_to_yaml(msg.innov, out);
    out << "\n";
  }

  // member: innov_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innov_var: ";
    rosidl_generator_traits::value_to_yaml(msg.innov_var, out);
    out << "\n";
  }

  // member: innov_test_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innov_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.innov_test_ratio, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EstimatorBaroBias & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::EstimatorBaroBias & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::EstimatorBaroBias & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorBaroBias>()
{
  return "px4_msgs::msg::EstimatorBaroBias";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorBaroBias>()
{
  return "px4_msgs/msg/EstimatorBaroBias";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorBaroBias>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorBaroBias>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorBaroBias>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_BARO_BIAS__TRAITS_HPP_
