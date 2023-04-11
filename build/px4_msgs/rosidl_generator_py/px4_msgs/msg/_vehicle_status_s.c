// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/VehicleStatus.idl
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
#include "px4_msgs/msg/detail/vehicle_status__struct.h"
#include "px4_msgs/msg/detail/vehicle_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__vehicle_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("px4_msgs.msg._vehicle_status.VehicleStatus", full_classname_dest, 42) == 0);
  }
  px4_msgs__msg__VehicleStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // nav_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nav_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nav_state_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_state_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nav_state_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // arming_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "arming_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->arming_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hil_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "hil_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hil_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // failsafe
    PyObject * field = PyObject_GetAttrString(_pymsg, "failsafe");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->failsafe = (Py_True == field);
    Py_DECREF(field);
  }
  {  // failsafe_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "failsafe_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->failsafe_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // system_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->system_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // system_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->system_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // component_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "component_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->component_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vehicle_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicle_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // is_vtol
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_vtol");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_vtol = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_vtol_tailsitter
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_vtol_tailsitter");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_vtol_tailsitter = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vtol_fw_permanent_stab
    PyObject * field = PyObject_GetAttrString(_pymsg, "vtol_fw_permanent_stab");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vtol_fw_permanent_stab = (Py_True == field);
    Py_DECREF(field);
  }
  {  // in_transition_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_transition_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_transition_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // in_transition_to_fw
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_transition_to_fw");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_transition_to_fw = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rc_signal_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_signal_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rc_signal_lost = (Py_True == field);
    Py_DECREF(field);
  }
  {  // data_link_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "data_link_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->data_link_lost = (Py_True == field);
    Py_DECREF(field);
  }
  {  // data_link_lost_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "data_link_lost_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data_link_lost_counter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // high_latency_data_link_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "high_latency_data_link_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->high_latency_data_link_lost = (Py_True == field);
    Py_DECREF(field);
  }
  {  // engine_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->engine_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mission_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mission_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // geofence_violated
    PyObject * field = PyObject_GetAttrString(_pymsg, "geofence_violated");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->geofence_violated = (Py_True == field);
    Py_DECREF(field);
  }
  {  // failure_detector_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "failure_detector_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->failure_detector_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // onboard_control_sensors_present
    PyObject * field = PyObject_GetAttrString(_pymsg, "onboard_control_sensors_present");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->onboard_control_sensors_present = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // onboard_control_sensors_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "onboard_control_sensors_enabled");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->onboard_control_sensors_enabled = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // onboard_control_sensors_health
    PyObject * field = PyObject_GetAttrString(_pymsg, "onboard_control_sensors_health");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->onboard_control_sensors_health = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // latest_arming_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "latest_arming_reason");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->latest_arming_reason = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // latest_disarming_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "latest_disarming_reason");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->latest_disarming_reason = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // armed_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "armed_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->armed_time = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // takeoff_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "takeoff_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->takeoff_time = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__vehicle_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._vehicle_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__VehicleStatus * ros_message = (px4_msgs__msg__VehicleStatus *)raw_ros_message;
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
  {  // nav_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nav_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nav_state_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->nav_state_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_state_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arming_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->arming_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arming_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hil_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hil_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hil_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // failsafe
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->failsafe ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "failsafe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // failsafe_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->failsafe_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "failsafe_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->system_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->system_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // component_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->component_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "component_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vehicle_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_vtol
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_vtol ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_vtol", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_vtol_tailsitter
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_vtol_tailsitter ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_vtol_tailsitter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vtol_fw_permanent_stab
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vtol_fw_permanent_stab ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vtol_fw_permanent_stab", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_transition_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_transition_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_transition_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_transition_to_fw
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_transition_to_fw ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_transition_to_fw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_signal_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rc_signal_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_signal_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data_link_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->data_link_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data_link_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data_link_lost_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->data_link_lost_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data_link_lost_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // high_latency_data_link_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->high_latency_data_link_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "high_latency_data_link_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->engine_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mission_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mission_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // geofence_violated
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->geofence_violated ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "geofence_violated", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // failure_detector_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->failure_detector_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "failure_detector_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // onboard_control_sensors_present
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->onboard_control_sensors_present);
    {
      int rc = PyObject_SetAttrString(_pymessage, "onboard_control_sensors_present", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // onboard_control_sensors_enabled
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->onboard_control_sensors_enabled);
    {
      int rc = PyObject_SetAttrString(_pymessage, "onboard_control_sensors_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // onboard_control_sensors_health
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->onboard_control_sensors_health);
    {
      int rc = PyObject_SetAttrString(_pymessage, "onboard_control_sensors_health", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latest_arming_reason
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->latest_arming_reason);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latest_arming_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latest_disarming_reason
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->latest_disarming_reason);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latest_disarming_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // armed_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->armed_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "armed_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // takeoff_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->takeoff_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "takeoff_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
