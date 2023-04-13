// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/TestMotor.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TEST_MOTOR__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__TEST_MOTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NUM_MOTOR_OUTPUTS'.
enum
{
  px4_msgs__msg__TestMotor__NUM_MOTOR_OUTPUTS = 8
};

/// Constant 'ACTION_STOP'.
enum
{
  px4_msgs__msg__TestMotor__ACTION_STOP = 0
};

/// Constant 'ACTION_RUN'.
enum
{
  px4_msgs__msg__TestMotor__ACTION_RUN = 1
};

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__TestMotor__ORB_QUEUE_LENGTH = 4
};

// Struct defined in msg/TestMotor in the package px4_msgs.
typedef struct px4_msgs__msg__TestMotor
{
  uint64_t timestamp;
  uint8_t action;
  uint32_t motor_number;
  float value;
  uint32_t timeout_ms;
  uint8_t driver_instance;
} px4_msgs__msg__TestMotor;

// Struct for a sequence of px4_msgs__msg__TestMotor.
typedef struct px4_msgs__msg__TestMotor__Sequence
{
  px4_msgs__msg__TestMotor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__TestMotor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__TEST_MOTOR__STRUCT_H_
