// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/EstimatorOpticalFlowVel.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/estimator_optical_flow_vel__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace px4_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EstimatorOpticalFlowVel_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::EstimatorOpticalFlowVel(_init);
}

void EstimatorOpticalFlowVel_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::EstimatorOpticalFlowVel *>(message_memory);
  typed_message->~EstimatorOpticalFlowVel();
}

size_t size_function__EstimatorOpticalFlowVel__vel_body(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__EstimatorOpticalFlowVel__vel_body(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorOpticalFlowVel__vel_body(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorOpticalFlowVel__vel_ne(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__EstimatorOpticalFlowVel__vel_ne(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorOpticalFlowVel__vel_ne(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorOpticalFlowVel__flow_uncompensated_integral(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__EstimatorOpticalFlowVel__flow_uncompensated_integral(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorOpticalFlowVel__flow_uncompensated_integral(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorOpticalFlowVel__flow_compensated_integral(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__EstimatorOpticalFlowVel__flow_compensated_integral(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorOpticalFlowVel__flow_compensated_integral(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorOpticalFlowVel__gyro_rate_integral(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorOpticalFlowVel__gyro_rate_integral(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorOpticalFlowVel__gyro_rate_integral(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EstimatorOpticalFlowVel_message_member_array[7] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorOpticalFlowVel, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp_sample",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorOpticalFlowVel, timestamp_sample),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel_body",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorOpticalFlowVel, vel_body),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorOpticalFlowVel__vel_body,  // size() function pointer
    get_const_function__EstimatorOpticalFlowVel__vel_body,  // get_const(index) function pointer
    get_function__EstimatorOpticalFlowVel__vel_body,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel_ne",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorOpticalFlowVel, vel_ne),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorOpticalFlowVel__vel_ne,  // size() function pointer
    get_const_function__EstimatorOpticalFlowVel__vel_ne,  // get_const(index) function pointer
    get_function__EstimatorOpticalFlowVel__vel_ne,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flow_uncompensated_integral",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorOpticalFlowVel, flow_uncompensated_integral),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorOpticalFlowVel__flow_uncompensated_integral,  // size() function pointer
    get_const_function__EstimatorOpticalFlowVel__flow_uncompensated_integral,  // get_const(index) function pointer
    get_function__EstimatorOpticalFlowVel__flow_uncompensated_integral,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flow_compensated_integral",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorOpticalFlowVel, flow_compensated_integral),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorOpticalFlowVel__flow_compensated_integral,  // size() function pointer
    get_const_function__EstimatorOpticalFlowVel__flow_compensated_integral,  // get_const(index) function pointer
    get_function__EstimatorOpticalFlowVel__flow_compensated_integral,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyro_rate_integral",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorOpticalFlowVel, gyro_rate_integral),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorOpticalFlowVel__gyro_rate_integral,  // size() function pointer
    get_const_function__EstimatorOpticalFlowVel__gyro_rate_integral,  // get_const(index) function pointer
    get_function__EstimatorOpticalFlowVel__gyro_rate_integral,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EstimatorOpticalFlowVel_message_members = {
  "px4_msgs::msg",  // message namespace
  "EstimatorOpticalFlowVel",  // message name
  7,  // number of fields
  sizeof(px4_msgs::msg::EstimatorOpticalFlowVel),
  EstimatorOpticalFlowVel_message_member_array,  // message members
  EstimatorOpticalFlowVel_init_function,  // function to initialize message memory (memory has to be allocated)
  EstimatorOpticalFlowVel_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EstimatorOpticalFlowVel_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EstimatorOpticalFlowVel_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace px4_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::EstimatorOpticalFlowVel>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::EstimatorOpticalFlowVel_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, EstimatorOpticalFlowVel)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::EstimatorOpticalFlowVel_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
