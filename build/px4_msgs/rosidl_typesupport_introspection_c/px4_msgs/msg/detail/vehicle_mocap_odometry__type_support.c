// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/VehicleMocapOdometry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/vehicle_mocap_odometry__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/vehicle_mocap_odometry__functions.h"
#include "px4_msgs/msg/detail/vehicle_mocap_odometry__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__VehicleMocapOdometry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__VehicleMocapOdometry__init(message_memory);
}

void px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__VehicleMocapOdometry_fini_function(void * message_memory)
{
  px4_msgs__msg__VehicleMocapOdometry__fini(message_memory);
}

size_t px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__size_function__VehicleMocapOdometry__q(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleMocapOdometry__q(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_function__VehicleMocapOdometry__q(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleMocapOdometry__q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleMocapOdometry__q(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleMocapOdometry__q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_function__VehicleMocapOdometry__q(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__size_function__VehicleMocapOdometry__q_offset(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleMocapOdometry__q_offset(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_function__VehicleMocapOdometry__q_offset(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleMocapOdometry__q_offset(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleMocapOdometry__q_offset(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleMocapOdometry__q_offset(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_function__VehicleMocapOdometry__q_offset(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__size_function__VehicleMocapOdometry__pose_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 21;
}

const void * px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleMocapOdometry__pose_covariance(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_function__VehicleMocapOdometry__pose_covariance(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleMocapOdometry__pose_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleMocapOdometry__pose_covariance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleMocapOdometry__pose_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_function__VehicleMocapOdometry__pose_covariance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__size_function__VehicleMocapOdometry__velocity_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 21;
}

const void * px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleMocapOdometry__velocity_covariance(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_function__VehicleMocapOdometry__velocity_covariance(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleMocapOdometry__velocity_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleMocapOdometry__velocity_covariance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleMocapOdometry__velocity_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_function__VehicleMocapOdometry__velocity_covariance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__VehicleMocapOdometry_message_member_array[18] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_sample",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, timestamp_sample),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, local_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "q",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, q),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__size_function__VehicleMocapOdometry__q,  // size() function pointer
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleMocapOdometry__q,  // get_const(index) function pointer
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_function__VehicleMocapOdometry__q,  // get(index) function pointer
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleMocapOdometry__q,  // fetch(index, &value) function pointer
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleMocapOdometry__q,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "q_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, q_offset),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__size_function__VehicleMocapOdometry__q_offset,  // size() function pointer
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleMocapOdometry__q_offset,  // get_const(index) function pointer
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_function__VehicleMocapOdometry__q_offset,  // get(index) function pointer
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleMocapOdometry__q_offset,  // fetch(index, &value) function pointer
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleMocapOdometry__q_offset,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    21,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, pose_covariance),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__size_function__VehicleMocapOdometry__pose_covariance,  // size() function pointer
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleMocapOdometry__pose_covariance,  // get_const(index) function pointer
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_function__VehicleMocapOdometry__pose_covariance,  // get(index) function pointer
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleMocapOdometry__pose_covariance,  // fetch(index, &value) function pointer
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleMocapOdometry__pose_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, velocity_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, vx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, vy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, vz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rollspeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, rollspeed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitchspeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, pitchspeed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yawspeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, yawspeed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    21,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, velocity_covariance),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__size_function__VehicleMocapOdometry__velocity_covariance,  // size() function pointer
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleMocapOdometry__velocity_covariance,  // get_const(index) function pointer
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__get_function__VehicleMocapOdometry__velocity_covariance,  // get(index) function pointer
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleMocapOdometry__velocity_covariance,  // fetch(index, &value) function pointer
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleMocapOdometry__velocity_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reset_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleMocapOdometry, reset_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__VehicleMocapOdometry_message_members = {
  "px4_msgs__msg",  // message namespace
  "VehicleMocapOdometry",  // message name
  18,  // number of fields
  sizeof(px4_msgs__msg__VehicleMocapOdometry),
  px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__VehicleMocapOdometry_message_member_array,  // message members
  px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__VehicleMocapOdometry_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__VehicleMocapOdometry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__VehicleMocapOdometry_message_type_support_handle = {
  0,
  &px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__VehicleMocapOdometry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, VehicleMocapOdometry)() {
  if (!px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__VehicleMocapOdometry_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__VehicleMocapOdometry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__VehicleMocapOdometry__rosidl_typesupport_introspection_c__VehicleMocapOdometry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
