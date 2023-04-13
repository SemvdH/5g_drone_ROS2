// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VehicleAttitudeGroundtruth.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/vehicle_attitude_groundtruth__struct.hpp"
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

void VehicleAttitudeGroundtruth_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::VehicleAttitudeGroundtruth(_init);
}

void VehicleAttitudeGroundtruth_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::VehicleAttitudeGroundtruth *>(message_memory);
  typed_message->~VehicleAttitudeGroundtruth();
}

size_t size_function__VehicleAttitudeGroundtruth__q(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__VehicleAttitudeGroundtruth__q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleAttitudeGroundtruth__q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__VehicleAttitudeGroundtruth__delta_q_reset(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__VehicleAttitudeGroundtruth__delta_q_reset(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleAttitudeGroundtruth__delta_q_reset(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VehicleAttitudeGroundtruth_message_member_array[5] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleAttitudeGroundtruth, timestamp),  // bytes offset in struct
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
    offsetof(px4_msgs::msg::VehicleAttitudeGroundtruth, timestamp_sample),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleAttitudeGroundtruth, q),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleAttitudeGroundtruth__q,  // size() function pointer
    get_const_function__VehicleAttitudeGroundtruth__q,  // get_const(index) function pointer
    get_function__VehicleAttitudeGroundtruth__q,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "delta_q_reset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleAttitudeGroundtruth, delta_q_reset),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleAttitudeGroundtruth__delta_q_reset,  // size() function pointer
    get_const_function__VehicleAttitudeGroundtruth__delta_q_reset,  // get_const(index) function pointer
    get_function__VehicleAttitudeGroundtruth__delta_q_reset,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "quat_reset_counter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleAttitudeGroundtruth, quat_reset_counter),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VehicleAttitudeGroundtruth_message_members = {
  "px4_msgs::msg",  // message namespace
  "VehicleAttitudeGroundtruth",  // message name
  5,  // number of fields
  sizeof(px4_msgs::msg::VehicleAttitudeGroundtruth),
  VehicleAttitudeGroundtruth_message_member_array,  // message members
  VehicleAttitudeGroundtruth_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleAttitudeGroundtruth_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VehicleAttitudeGroundtruth_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VehicleAttitudeGroundtruth_message_members,
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
get_message_type_support_handle<px4_msgs::msg::VehicleAttitudeGroundtruth>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleAttitudeGroundtruth_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, VehicleAttitudeGroundtruth)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleAttitudeGroundtruth_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
