// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/CommanderState.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__COMMANDER_STATE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__COMMANDER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAIN_STATE_MANUAL'.
enum
{
  px4_msgs__msg__CommanderState__MAIN_STATE_MANUAL = 0
};

/// Constant 'MAIN_STATE_ALTCTL'.
enum
{
  px4_msgs__msg__CommanderState__MAIN_STATE_ALTCTL = 1
};

/// Constant 'MAIN_STATE_POSCTL'.
enum
{
  px4_msgs__msg__CommanderState__MAIN_STATE_POSCTL = 2
};

/// Constant 'MAIN_STATE_AUTO_MISSION'.
enum
{
  px4_msgs__msg__CommanderState__MAIN_STATE_AUTO_MISSION = 3
};

/// Constant 'MAIN_STATE_AUTO_LOITER'.
enum
{
  px4_msgs__msg__CommanderState__MAIN_STATE_AUTO_LOITER = 4
};

/// Constant 'MAIN_STATE_AUTO_RTL'.
enum
{
  px4_msgs__msg__CommanderState__MAIN_STATE_AUTO_RTL = 5
};

/// Constant 'MAIN_STATE_ACRO'.
enum
{
  px4_msgs__msg__CommanderState__MAIN_STATE_ACRO = 6
};

/// Constant 'MAIN_STATE_OFFBOARD'.
enum
{
  px4_msgs__msg__CommanderState__MAIN_STATE_OFFBOARD = 7
};

/// Constant 'MAIN_STATE_STAB'.
enum
{
  px4_msgs__msg__CommanderState__MAIN_STATE_STAB = 8
};

/// Constant 'MAIN_STATE_AUTO_TAKEOFF'.
/**
  * LEGACY RATTITUDE                  = 9
 */
enum
{
  px4_msgs__msg__CommanderState__MAIN_STATE_AUTO_TAKEOFF = 10
};

/// Constant 'MAIN_STATE_AUTO_LAND'.
enum
{
  px4_msgs__msg__CommanderState__MAIN_STATE_AUTO_LAND = 11
};

/// Constant 'MAIN_STATE_AUTO_FOLLOW_TARGET'.
enum
{
  px4_msgs__msg__CommanderState__MAIN_STATE_AUTO_FOLLOW_TARGET = 12
};

/// Constant 'MAIN_STATE_AUTO_PRECLAND'.
enum
{
  px4_msgs__msg__CommanderState__MAIN_STATE_AUTO_PRECLAND = 13
};

/// Constant 'MAIN_STATE_ORBIT'.
enum
{
  px4_msgs__msg__CommanderState__MAIN_STATE_ORBIT = 14
};

/// Constant 'MAIN_STATE_AUTO_VTOL_TAKEOFF'.
enum
{
  px4_msgs__msg__CommanderState__MAIN_STATE_AUTO_VTOL_TAKEOFF = 15
};

/// Constant 'MAIN_STATE_MAX'.
enum
{
  px4_msgs__msg__CommanderState__MAIN_STATE_MAX = 16
};

/// Struct defined in msg/CommanderState in the package px4_msgs.
/**
  * Main state, i.e. what user wants. Controlled by RC or from ground station via telemetry link.
 */
typedef struct px4_msgs__msg__CommanderState
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint8_t main_state;
  uint16_t main_state_changes;
} px4_msgs__msg__CommanderState;

// Struct for a sequence of px4_msgs__msg__CommanderState.
typedef struct px4_msgs__msg__CommanderState__Sequence
{
  px4_msgs__msg__CommanderState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__CommanderState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__COMMANDER_STATE__STRUCT_H_
