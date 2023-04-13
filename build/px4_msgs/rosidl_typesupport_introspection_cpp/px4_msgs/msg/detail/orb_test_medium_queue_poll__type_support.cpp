// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/OrbTestMediumQueuePoll.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/orb_test_medium_queue_poll__struct.hpp"
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

void OrbTestMediumQueuePoll_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::OrbTestMediumQueuePoll(_init);
}

void OrbTestMediumQueuePoll_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::OrbTestMediumQueuePoll *>(message_memory);
  typed_message->~OrbTestMediumQueuePoll();
}

size_t size_function__OrbTestMediumQueuePoll__junk(const void * untyped_member)
{
  (void)untyped_member;
  return 64;
}

const void * get_const_function__OrbTestMediumQueuePoll__junk(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 64> *>(untyped_member);
  return &member[index];
}

void * get_function__OrbTestMediumQueuePoll__junk(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 64> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OrbTestMediumQueuePoll_message_member_array[3] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OrbTestMediumQueuePoll, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "val",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OrbTestMediumQueuePoll, val),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "junk",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    64,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OrbTestMediumQueuePoll, junk),  // bytes offset in struct
    nullptr,  // default value
    size_function__OrbTestMediumQueuePoll__junk,  // size() function pointer
    get_const_function__OrbTestMediumQueuePoll__junk,  // get_const(index) function pointer
    get_function__OrbTestMediumQueuePoll__junk,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OrbTestMediumQueuePoll_message_members = {
  "px4_msgs::msg",  // message namespace
  "OrbTestMediumQueuePoll",  // message name
  3,  // number of fields
  sizeof(px4_msgs::msg::OrbTestMediumQueuePoll),
  OrbTestMediumQueuePoll_message_member_array,  // message members
  OrbTestMediumQueuePoll_init_function,  // function to initialize message memory (memory has to be allocated)
  OrbTestMediumQueuePoll_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OrbTestMediumQueuePoll_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OrbTestMediumQueuePoll_message_members,
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
get_message_type_support_handle<px4_msgs::msg::OrbTestMediumQueuePoll>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::OrbTestMediumQueuePoll_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, OrbTestMediumQueuePoll)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::OrbTestMediumQueuePoll_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
