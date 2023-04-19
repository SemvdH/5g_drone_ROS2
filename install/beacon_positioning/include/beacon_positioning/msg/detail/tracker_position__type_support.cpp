// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from beacon_positioning:msg/TrackerPosition.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "beacon_positioning/msg/detail/tracker_position__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace beacon_positioning
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrackerPosition_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) beacon_positioning::msg::TrackerPosition(_init);
}

void TrackerPosition_fini_function(void * message_memory)
{
  auto typed_message = static_cast<beacon_positioning::msg::TrackerPosition *>(message_memory);
  typed_message->~TrackerPosition();
}

size_t size_function__TrackerPosition__anchor_distances(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__TrackerPosition__anchor_distances(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int64_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__TrackerPosition__anchor_distances(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int64_t, 4> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrackerPosition_message_member_array[5] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beacon_positioning::msg::TrackerPosition, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "x_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beacon_positioning::msg::TrackerPosition, x_pos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beacon_positioning::msg::TrackerPosition, y_pos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "z_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beacon_positioning::msg::TrackerPosition, z_pos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "anchor_distances",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(beacon_positioning::msg::TrackerPosition, anchor_distances),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrackerPosition__anchor_distances,  // size() function pointer
    get_const_function__TrackerPosition__anchor_distances,  // get_const(index) function pointer
    get_function__TrackerPosition__anchor_distances,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrackerPosition_message_members = {
  "beacon_positioning::msg",  // message namespace
  "TrackerPosition",  // message name
  5,  // number of fields
  sizeof(beacon_positioning::msg::TrackerPosition),
  TrackerPosition_message_member_array,  // message members
  TrackerPosition_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackerPosition_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrackerPosition_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrackerPosition_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace beacon_positioning


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<beacon_positioning::msg::TrackerPosition>()
{
  return &::beacon_positioning::msg::rosidl_typesupport_introspection_cpp::TrackerPosition_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, beacon_positioning, msg, TrackerPosition)() {
  return &::beacon_positioning::msg::rosidl_typesupport_introspection_cpp::TrackerPosition_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
