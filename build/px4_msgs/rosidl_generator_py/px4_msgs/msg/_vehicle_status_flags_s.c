// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "px4_msgs/msg/detail/vehicle_status_flags__struct.h"
#include "px4_msgs/msg/detail/vehicle_status_flags__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__vehicle_status_flags__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("px4_msgs.msg._vehicle_status_flags.VehicleStatusFlags", full_classname_dest, 53) == 0);
  }
  px4_msgs__msg__VehicleStatusFlags * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // calibration_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibration_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->calibration_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // system_sensors_initialized
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_sensors_initialized");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->system_sensors_initialized = (Py_True == field);
    Py_DECREF(field);
  }
  {  // system_hotplug_timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_hotplug_timeout");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->system_hotplug_timeout = (Py_True == field);
    Py_DECREF(field);
  }
  {  // auto_mission_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_mission_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->auto_mission_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // angular_velocity_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_velocity_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->angular_velocity_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // attitude_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "attitude_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->attitude_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // local_altitude_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_altitude_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->local_altitude_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // local_position_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_position_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->local_position_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // local_velocity_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_velocity_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->local_velocity_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // global_position_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "global_position_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->global_position_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps_position_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_position_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps_position_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // home_position_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "home_position_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->home_position_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // power_input_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_input_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->power_input_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // battery_healthy
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_healthy");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->battery_healthy = (Py_True == field);
    Py_DECREF(field);
  }
  {  // escs_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "escs_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->escs_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // escs_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "escs_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->escs_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // position_reliant_on_gps
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_reliant_on_gps");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->position_reliant_on_gps = (Py_True == field);
    Py_DECREF(field);
  }
  {  // position_reliant_on_optical_flow
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_reliant_on_optical_flow");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->position_reliant_on_optical_flow = (Py_True == field);
    Py_DECREF(field);
  }
  {  // position_reliant_on_vision_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_reliant_on_vision_position");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->position_reliant_on_vision_position = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dead_reckoning
    PyObject * field = PyObject_GetAttrString(_pymsg, "dead_reckoning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dead_reckoning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flight_terminated
    PyObject * field = PyObject_GetAttrString(_pymsg, "flight_terminated");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flight_terminated = (Py_True == field);
    Py_DECREF(field);
  }
  {  // circuit_breaker_engaged_power_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "circuit_breaker_engaged_power_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->circuit_breaker_engaged_power_check = (Py_True == field);
    Py_DECREF(field);
  }
  {  // circuit_breaker_engaged_airspd_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "circuit_breaker_engaged_airspd_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->circuit_breaker_engaged_airspd_check = (Py_True == field);
    Py_DECREF(field);
  }
  {  // circuit_breaker_engaged_enginefailure_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "circuit_breaker_engaged_enginefailure_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->circuit_breaker_engaged_enginefailure_check = (Py_True == field);
    Py_DECREF(field);
  }
  {  // circuit_breaker_flight_termination_disabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "circuit_breaker_flight_termination_disabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->circuit_breaker_flight_termination_disabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // circuit_breaker_engaged_usb_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "circuit_breaker_engaged_usb_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->circuit_breaker_engaged_usb_check = (Py_True == field);
    Py_DECREF(field);
  }
  {  // circuit_breaker_engaged_posfailure_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "circuit_breaker_engaged_posfailure_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->circuit_breaker_engaged_posfailure_check = (Py_True == field);
    Py_DECREF(field);
  }
  {  // circuit_breaker_vtol_fw_arming_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "circuit_breaker_vtol_fw_arming_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->circuit_breaker_vtol_fw_arming_check = (Py_True == field);
    Py_DECREF(field);
  }
  {  // offboard_control_signal_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "offboard_control_signal_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->offboard_control_signal_lost = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rc_signal_found_once
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_signal_found_once");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rc_signal_found_once = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rc_calibration_in_progress
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_calibration_in_progress");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rc_calibration_in_progress = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rc_calibration_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_calibration_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rc_calibration_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vtol_transition_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "vtol_transition_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vtol_transition_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // usb_connected
    PyObject * field = PyObject_GetAttrString(_pymsg, "usb_connected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->usb_connected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sd_card_detected_once
    PyObject * field = PyObject_GetAttrString(_pymsg, "sd_card_detected_once");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sd_card_detected_once = (Py_True == field);
    Py_DECREF(field);
  }
  {  // avoidance_system_required
    PyObject * field = PyObject_GetAttrString(_pymsg, "avoidance_system_required");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->avoidance_system_required = (Py_True == field);
    Py_DECREF(field);
  }
  {  // avoidance_system_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "avoidance_system_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->avoidance_system_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // parachute_system_present
    PyObject * field = PyObject_GetAttrString(_pymsg, "parachute_system_present");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->parachute_system_present = (Py_True == field);
    Py_DECREF(field);
  }
  {  // parachute_system_healthy
    PyObject * field = PyObject_GetAttrString(_pymsg, "parachute_system_healthy");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->parachute_system_healthy = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__vehicle_status_flags__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleStatusFlags */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._vehicle_status_flags");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleStatusFlags");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__VehicleStatusFlags * ros_message = (px4_msgs__msg__VehicleStatusFlags *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // calibration_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->calibration_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibration_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_sensors_initialized
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->system_sensors_initialized ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_sensors_initialized", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_hotplug_timeout
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->system_hotplug_timeout ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_hotplug_timeout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_mission_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->auto_mission_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_mission_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_velocity_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->angular_velocity_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_velocity_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attitude_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->attitude_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "attitude_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_altitude_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->local_altitude_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_altitude_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_position_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->local_position_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_position_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_velocity_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->local_velocity_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_velocity_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // global_position_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->global_position_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "global_position_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_position_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps_position_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_position_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // home_position_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->home_position_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "home_position_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_input_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->power_input_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_input_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_healthy
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->battery_healthy ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_healthy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // escs_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->escs_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "escs_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // escs_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->escs_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "escs_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_reliant_on_gps
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->position_reliant_on_gps ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_reliant_on_gps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_reliant_on_optical_flow
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->position_reliant_on_optical_flow ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_reliant_on_optical_flow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_reliant_on_vision_position
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->position_reliant_on_vision_position ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_reliant_on_vision_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dead_reckoning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dead_reckoning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dead_reckoning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flight_terminated
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flight_terminated ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flight_terminated", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circuit_breaker_engaged_power_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->circuit_breaker_engaged_power_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "circuit_breaker_engaged_power_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circuit_breaker_engaged_airspd_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->circuit_breaker_engaged_airspd_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "circuit_breaker_engaged_airspd_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circuit_breaker_engaged_enginefailure_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->circuit_breaker_engaged_enginefailure_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "circuit_breaker_engaged_enginefailure_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circuit_breaker_flight_termination_disabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->circuit_breaker_flight_termination_disabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "circuit_breaker_flight_termination_disabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circuit_breaker_engaged_usb_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->circuit_breaker_engaged_usb_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "circuit_breaker_engaged_usb_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circuit_breaker_engaged_posfailure_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->circuit_breaker_engaged_posfailure_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "circuit_breaker_engaged_posfailure_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circuit_breaker_vtol_fw_arming_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->circuit_breaker_vtol_fw_arming_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "circuit_breaker_vtol_fw_arming_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offboard_control_signal_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->offboard_control_signal_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offboard_control_signal_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_signal_found_once
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rc_signal_found_once ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_signal_found_once", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_calibration_in_progress
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rc_calibration_in_progress ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_calibration_in_progress", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_calibration_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rc_calibration_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_calibration_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vtol_transition_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vtol_transition_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vtol_transition_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // usb_connected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->usb_connected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "usb_connected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sd_card_detected_once
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sd_card_detected_once ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sd_card_detected_once", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avoidance_system_required
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->avoidance_system_required ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avoidance_system_required", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avoidance_system_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->avoidance_system_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avoidance_system_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parachute_system_present
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->parachute_system_present ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parachute_system_present", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parachute_system_healthy
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->parachute_system_healthy ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parachute_system_healthy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
