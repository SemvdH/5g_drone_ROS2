// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleAttitudeSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FLAPS_OFF'.
enum
{
  px4_msgs__msg__VehicleAttitudeSetpoint__FLAPS_OFF = 0
};

/// Constant 'FLAPS_LAND'.
enum
{
  px4_msgs__msg__VehicleAttitudeSetpoint__FLAPS_LAND = 1
};

/// Constant 'FLAPS_TAKEOFF'.
enum
{
  px4_msgs__msg__VehicleAttitudeSetpoint__FLAPS_TAKEOFF = 2
};

// Struct defined in msg/VehicleAttitudeSetpoint in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleAttitudeSetpoint
{
  uint64_t timestamp;
  float roll_body;
  float pitch_body;
  float yaw_body;
  float yaw_sp_move_rate;
  float q_d[4];
  float thrust_body[3];
  bool roll_reset_integral;
  bool pitch_reset_integral;
  bool yaw_reset_integral;
  bool fw_control_yaw;
  uint8_t apply_flaps;
} px4_msgs__msg__VehicleAttitudeSetpoint;

// Struct for a sequence of px4_msgs__msg__VehicleAttitudeSetpoint.
typedef struct px4_msgs__msg__VehicleAttitudeSetpoint__Sequence
{
  px4_msgs__msg__VehicleAttitudeSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleAttitudeSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__STRUCT_H_
