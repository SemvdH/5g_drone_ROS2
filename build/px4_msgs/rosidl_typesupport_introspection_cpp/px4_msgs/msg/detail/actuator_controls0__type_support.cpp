// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/ActuatorControls0.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/actuator_controls0__struct.hpp"
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

void ActuatorControls0_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::ActuatorControls0(_init);
}

void ActuatorControls0_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::ActuatorControls0 *>(message_memory);
  typed_message->~ActuatorControls0();
}

size_t size_function__ActuatorControls0__control(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__ActuatorControls0__control(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorControls0__control(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 8> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorControls0__control(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ActuatorControls0__control(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ActuatorControls0__control(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ActuatorControls0__control(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActuatorControls0_message_member_array[3] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ActuatorControls0, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
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
    offsetof(px4_msgs::msg::ActuatorControls0, timestamp_sample),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "control",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ActuatorControls0, control),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorControls0__control,  // size() function pointer
    get_const_function__ActuatorControls0__control,  // get_const(index) function pointer
    get_function__ActuatorControls0__control,  // get(index) function pointer
    fetch_function__ActuatorControls0__control,  // fetch(index, &value) function pointer
    assign_function__ActuatorControls0__control,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActuatorControls0_message_members = {
  "px4_msgs::msg",  // message namespace
  "ActuatorControls0",  // message name
  3,  // number of fields
  sizeof(px4_msgs::msg::ActuatorControls0),
  ActuatorControls0_message_member_array,  // message members
  ActuatorControls0_init_function,  // function to initialize message memory (memory has to be allocated)
  ActuatorControls0_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActuatorControls0_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActuatorControls0_message_members,
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
get_message_type_support_handle<px4_msgs::msg::ActuatorControls0>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::ActuatorControls0_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, ActuatorControls0)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::ActuatorControls0_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
