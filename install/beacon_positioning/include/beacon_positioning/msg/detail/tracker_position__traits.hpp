// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from beacon_positioning:msg/TrackerPosition.idl
// generated code does not contain a copyright notice

#ifndef BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__TRAITS_HPP_
#define BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__TRAITS_HPP_

#include "beacon_positioning/msg/detail/tracker_position__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<beacon_positioning::msg::TrackerPosition>()
{
  return "beacon_positioning::msg::TrackerPosition";
}

template<>
inline const char * name<beacon_positioning::msg::TrackerPosition>()
{
  return "beacon_positioning/msg/TrackerPosition";
}

template<>
struct has_fixed_size<beacon_positioning::msg::TrackerPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<beacon_positioning::msg::TrackerPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<beacon_positioning::msg::TrackerPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__TRAITS_HPP_
