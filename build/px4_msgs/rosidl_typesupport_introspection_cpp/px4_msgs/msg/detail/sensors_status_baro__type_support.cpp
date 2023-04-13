// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/SensorsStatusBaro.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/sensors_status_baro__struct.hpp"
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

void SensorsStatusBaro_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::SensorsStatusBaro(_init);
}

void SensorsStatusBaro_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::SensorsStatusBaro *>(message_memory);
  typed_message->~SensorsStatusBaro();
}

size_t size_function__SensorsStatusBaro__device_ids(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatusBaro__device_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatusBaro__device_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__SensorsStatusBaro__inconsistency(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatusBaro__inconsistency(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatusBaro__inconsistency(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__SensorsStatusBaro__healthy(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatusBaro__healthy(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatusBaro__healthy(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__SensorsStatusBaro__priority(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatusBaro__priority(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatusBaro__priority(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__SensorsStatusBaro__enabled(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatusBaro__enabled(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatusBaro__enabled(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__SensorsStatusBaro__external(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatusBaro__external(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatusBaro__external(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorsStatusBaro_message_member_array[8] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatusBaro, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "device_id_primary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatusBaro, device_id_primary),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "device_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatusBaro, device_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatusBaro__device_ids,  // size() function pointer
    get_const_function__SensorsStatusBaro__device_ids,  // get_const(index) function pointer
    get_function__SensorsStatusBaro__device_ids,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "inconsistency",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatusBaro, inconsistency),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatusBaro__inconsistency,  // size() function pointer
    get_const_function__SensorsStatusBaro__inconsistency,  // get_const(index) function pointer
    get_function__SensorsStatusBaro__inconsistency,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "healthy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatusBaro, healthy),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatusBaro__healthy,  // size() function pointer
    get_const_function__SensorsStatusBaro__healthy,  // get_const(index) function pointer
    get_function__SensorsStatusBaro__healthy,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "priority",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatusBaro, priority),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatusBaro__priority,  // size() function pointer
    get_const_function__SensorsStatusBaro__priority,  // get_const(index) function pointer
    get_function__SensorsStatusBaro__priority,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "enabled",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatusBaro, enabled),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatusBaro__enabled,  // size() function pointer
    get_const_function__SensorsStatusBaro__enabled,  // get_const(index) function pointer
    get_function__SensorsStatusBaro__enabled,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "external",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatusBaro, external),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatusBaro__external,  // size() function pointer
    get_const_function__SensorsStatusBaro__external,  // get_const(index) function pointer
    get_function__SensorsStatusBaro__external,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorsStatusBaro_message_members = {
  "px4_msgs::msg",  // message namespace
  "SensorsStatusBaro",  // message name
  8,  // number of fields
  sizeof(px4_msgs::msg::SensorsStatusBaro),
  SensorsStatusBaro_message_member_array,  // message members
  SensorsStatusBaro_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorsStatusBaro_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorsStatusBaro_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorsStatusBaro_message_members,
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
get_message_type_support_handle<px4_msgs::msg::SensorsStatusBaro>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::SensorsStatusBaro_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, SensorsStatusBaro)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::SensorsStatusBaro_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
