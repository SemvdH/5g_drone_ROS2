// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ARMING_STATE_INIT'.
enum
{
  px4_msgs__msg__VehicleStatus__ARMING_STATE_INIT = 0
};

/// Constant 'ARMING_STATE_STANDBY'.
enum
{
  px4_msgs__msg__VehicleStatus__ARMING_STATE_STANDBY = 1
};

/// Constant 'ARMING_STATE_ARMED'.
enum
{
  px4_msgs__msg__VehicleStatus__ARMING_STATE_ARMED = 2
};

/// Constant 'ARMING_STATE_STANDBY_ERROR'.
enum
{
  px4_msgs__msg__VehicleStatus__ARMING_STATE_STANDBY_ERROR = 3
};

/// Constant 'ARMING_STATE_SHUTDOWN'.
enum
{
  px4_msgs__msg__VehicleStatus__ARMING_STATE_SHUTDOWN = 4
};

/// Constant 'ARMING_STATE_IN_AIR_RESTORE'.
enum
{
  px4_msgs__msg__VehicleStatus__ARMING_STATE_IN_AIR_RESTORE = 5
};

/// Constant 'ARMING_STATE_MAX'.
enum
{
  px4_msgs__msg__VehicleStatus__ARMING_STATE_MAX = 6
};

/// Constant 'FAILURE_NONE'.
/**
  * FailureDetector status
 */
enum
{
  px4_msgs__msg__VehicleStatus__FAILURE_NONE = 0
};

/// Constant 'FAILURE_ROLL'.
/**
  * (1 << 0)
 */
enum
{
  px4_msgs__msg__VehicleStatus__FAILURE_ROLL = 1
};

/// Constant 'FAILURE_PITCH'.
/**
  * (1 << 1)
 */
enum
{
  px4_msgs__msg__VehicleStatus__FAILURE_PITCH = 2
};

/// Constant 'FAILURE_ALT'.
/**
  * (1 << 2)
 */
enum
{
  px4_msgs__msg__VehicleStatus__FAILURE_ALT = 4
};

/// Constant 'FAILURE_EXT'.
/**
  * (1 << 3)
 */
enum
{
  px4_msgs__msg__VehicleStatus__FAILURE_EXT = 8
};

/// Constant 'FAILURE_ARM_ESC'.
/**
  * (1 << 4)
 */
enum
{
  px4_msgs__msg__VehicleStatus__FAILURE_ARM_ESC = 16
};

/// Constant 'FAILURE_HIGH_WIND'.
/**
  * (1 << 5)
 */
enum
{
  px4_msgs__msg__VehicleStatus__FAILURE_HIGH_WIND = 32
};

/// Constant 'FAILURE_BATTERY'.
/**
  * (1 << 6)
 */
enum
{
  px4_msgs__msg__VehicleStatus__FAILURE_BATTERY = 64
};

/// Constant 'FAILURE_IMBALANCED_PROP'.
/**
  * (1 << 7)
 */
enum
{
  px4_msgs__msg__VehicleStatus__FAILURE_IMBALANCED_PROP = 128
};

/// Constant 'HIL_STATE_OFF'.
/**
  * HIL
 */
enum
{
  px4_msgs__msg__VehicleStatus__HIL_STATE_OFF = 0
};

/// Constant 'HIL_STATE_ON'.
enum
{
  px4_msgs__msg__VehicleStatus__HIL_STATE_ON = 1
};

/// Constant 'NAVIGATION_STATE_MANUAL'.
/**
  * Navigation state, i.e. "what should vehicle do".
  * Manual mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_MANUAL = 0
};

/// Constant 'NAVIGATION_STATE_ALTCTL'.
/**
  * Altitude control mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_ALTCTL = 1
};

/// Constant 'NAVIGATION_STATE_POSCTL'.
/**
  * Position control mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_POSCTL = 2
};

/// Constant 'NAVIGATION_STATE_AUTO_MISSION'.
/**
  * Auto mission mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_AUTO_MISSION = 3
};

/// Constant 'NAVIGATION_STATE_AUTO_LOITER'.
/**
  * Auto loiter mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_AUTO_LOITER = 4
};

/// Constant 'NAVIGATION_STATE_AUTO_RTL'.
/**
  * Auto return to launch mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_AUTO_RTL = 5
};

/// Constant 'NAVIGATION_STATE_AUTO_LANDENGFAIL'.
/**
  * Auto land on engine failure
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_AUTO_LANDENGFAIL = 8
};

/// Constant 'NAVIGATION_STATE_UNUSED'.
/**
  * Free slot
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_UNUSED = 9
};

/// Constant 'NAVIGATION_STATE_ACRO'.
/**
  * Acro mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_ACRO = 10
};

/// Constant 'NAVIGATION_STATE_UNUSED1'.
/**
  * Free slot
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_UNUSED1 = 11
};

/// Constant 'NAVIGATION_STATE_DESCEND'.
/**
  * Descend mode (no position control)
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_DESCEND = 12
};

/// Constant 'NAVIGATION_STATE_TERMINATION'.
/**
  * Termination mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_TERMINATION = 13
};

/// Constant 'NAVIGATION_STATE_OFFBOARD'.
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_OFFBOARD = 14
};

/// Constant 'NAVIGATION_STATE_STAB'.
/**
  * Stabilized mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_STAB = 15
};

/// Constant 'NAVIGATION_STATE_UNUSED2'.
/**
  * Free slot
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_UNUSED2 = 16
};

/// Constant 'NAVIGATION_STATE_AUTO_TAKEOFF'.
/**
  * Takeoff
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_AUTO_TAKEOFF = 17
};

/// Constant 'NAVIGATION_STATE_AUTO_LAND'.
/**
  * Land
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_AUTO_LAND = 18
};

/// Constant 'NAVIGATION_STATE_AUTO_FOLLOW_TARGET'.
/**
  * Auto Follow
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_AUTO_FOLLOW_TARGET = 19
};

/// Constant 'NAVIGATION_STATE_AUTO_PRECLAND'.
/**
  * Precision land with landing target
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_AUTO_PRECLAND = 20
};

/// Constant 'NAVIGATION_STATE_ORBIT'.
/**
  * Orbit in a circle
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_ORBIT = 21
};

/// Constant 'NAVIGATION_STATE_AUTO_VTOL_TAKEOFF'.
/**
  * Takeoff, transition, establish loiter
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_AUTO_VTOL_TAKEOFF = 22
};

/// Constant 'NAVIGATION_STATE_MAX'.
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_MAX = 23
};

/// Constant 'VEHICLE_TYPE_UNKNOWN'.
enum
{
  px4_msgs__msg__VehicleStatus__VEHICLE_TYPE_UNKNOWN = 0
};

/// Constant 'VEHICLE_TYPE_ROTARY_WING'.
enum
{
  px4_msgs__msg__VehicleStatus__VEHICLE_TYPE_ROTARY_WING = 1
};

/// Constant 'VEHICLE_TYPE_FIXED_WING'.
enum
{
  px4_msgs__msg__VehicleStatus__VEHICLE_TYPE_FIXED_WING = 2
};

/// Constant 'VEHICLE_TYPE_ROVER'.
enum
{
  px4_msgs__msg__VehicleStatus__VEHICLE_TYPE_ROVER = 3
};

/// Constant 'VEHICLE_TYPE_AIRSHIP'.
enum
{
  px4_msgs__msg__VehicleStatus__VEHICLE_TYPE_AIRSHIP = 4
};

/// Constant 'ARM_DISARM_REASON_TRANSITION_TO_STANDBY'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_TRANSITION_TO_STANDBY = 0
};

/// Constant 'ARM_DISARM_REASON_RC_STICK'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_RC_STICK = 1
};

/// Constant 'ARM_DISARM_REASON_RC_SWITCH'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_RC_SWITCH = 2
};

/// Constant 'ARM_DISARM_REASON_COMMAND_INTERNAL'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_COMMAND_INTERNAL = 3
};

/// Constant 'ARM_DISARM_REASON_COMMAND_EXTERNAL'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_COMMAND_EXTERNAL = 4
};

/// Constant 'ARM_DISARM_REASON_MISSION_START'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_MISSION_START = 5
};

/// Constant 'ARM_DISARM_REASON_SAFETY_BUTTON'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_SAFETY_BUTTON = 6
};

/// Constant 'ARM_DISARM_REASON_AUTO_DISARM_LAND'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_AUTO_DISARM_LAND = 7
};

/// Constant 'ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT = 8
};

/// Constant 'ARM_DISARM_REASON_KILL_SWITCH'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_KILL_SWITCH = 9
};

/// Constant 'ARM_DISARM_REASON_LOCKDOWN'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_LOCKDOWN = 10
};

/// Constant 'ARM_DISARM_REASON_FAILURE_DETECTOR'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_FAILURE_DETECTOR = 11
};

/// Constant 'ARM_DISARM_REASON_SHUTDOWN'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_SHUTDOWN = 12
};

/// Constant 'ARM_DISARM_REASON_UNIT_TEST'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_UNIT_TEST = 13
};

/// Struct defined in msg/VehicleStatus in the package px4_msgs.
/**
  * If you change the order, add or remove arming_state_t states make sure to update the arrays
  * in state_machine_helper.cpp as well.
 */
typedef struct px4_msgs__msg__VehicleStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// state machine / state of vehicle.
  /// Encodes the complete system state and is set by the commander app.
  /// set navigation state machine to specified value
  uint8_t nav_state;
  /// time when current nav_state activated
  uint64_t nav_state_timestamp;
  /// current arming state
  uint8_t arming_state;
  /// current hil state
  uint8_t hil_state;
  /// true if system is in failsafe state (e.g.:RTL, Hover, Terminate, ...)
  bool failsafe;
  /// time when failsafe was activated
  uint64_t failsafe_timestamp;
  /// system type, contains mavlink MAV_TYPE
  uint8_t system_type;
  /// system id, contains MAVLink's system ID field
  uint8_t system_id;
  /// subsystem / component id, contains MAVLink's component ID field
  uint8_t component_id;
  /// Type of vehicle (fixed-wing, rotary wing, ground)
  /// If the vehicle is a VTOL, then this value will be VEHICLE_TYPE_ROTARY_WING while flying as a multicopter,
  /// and VEHICLE_TYPE_FIXED_WING when flying as a fixed-wing
  uint8_t vehicle_type;
  /// True if the system is VTOL capable
  bool is_vtol;
  /// True if the system performs a 90° pitch down rotation during transition from MC to FW
  bool is_vtol_tailsitter;
  /// True if VTOL should stabilize attitude for fw in manual mode
  bool vtol_fw_permanent_stab;
  /// True if VTOL is doing a transition
  bool in_transition_mode;
  /// True if VTOL is doing a transition from MC to FW
  bool in_transition_to_fw;
  /// true if RC reception lost
  bool rc_signal_lost;
  /// datalink to GCS lost
  bool data_link_lost;
  /// counts unique data link lost events
  uint8_t data_link_lost_counter;
  /// Set to true if the high latency data link (eg. RockBlock Iridium 9603 telemetry module) is lost
  bool high_latency_data_link_lost;
  /// Set to true if an engine failure is detected
  bool engine_failure;
  /// Set to true if mission could not continue/finish
  bool mission_failure;
  bool geofence_violated;
  /// Bitmask containing FailureDetector status [0, 0, 0, 0, 0, FAILURE_ALT, FAILURE_PITCH, FAILURE_ROLL]
  uint8_t failure_detector_status;
  /// see SYS_STATUS mavlink message for the following
  /// lower 32 bits are for the base flags, higher 32 bits are or the extended flags
  uint64_t onboard_control_sensors_present;
  uint64_t onboard_control_sensors_enabled;
  uint64_t onboard_control_sensors_health;
  uint8_t latest_arming_reason;
  uint8_t latest_disarming_reason;
  /// Arming timestamp (microseconds)
  uint64_t armed_time;
  /// Takeoff timestamp (microseconds)
  uint64_t takeoff_time;
} px4_msgs__msg__VehicleStatus;

// Struct for a sequence of px4_msgs__msg__VehicleStatus.
typedef struct px4_msgs__msg__VehicleStatus__Sequence
{
  px4_msgs__msg__VehicleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
