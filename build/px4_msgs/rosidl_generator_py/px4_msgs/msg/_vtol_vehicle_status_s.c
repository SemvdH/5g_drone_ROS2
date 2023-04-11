// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/VtolVehicleStatus.idl
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
#include "px4_msgs/msg/detail/vtol_vehicle_status__struct.h"
#include "px4_msgs/msg/detail/vtol_vehicle_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__vtol_vehicle_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("px4_msgs.msg._vtol_vehicle_status.VtolVehicleStatus", full_classname_dest, 51) == 0);
  }
  px4_msgs__msg__VtolVehicleStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // vtol_in_rw_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "vtol_in_rw_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vtol_in_rw_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vtol_in_trans_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "vtol_in_trans_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vtol_in_trans_mode = (Py_True == field);
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
  {  // vtol_transition_failsafe
    PyObject * field = PyObject_GetAttrString(_pymsg, "vtol_transition_failsafe");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vtol_transition_failsafe = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fw_permanent_stab
    PyObject * field = PyObject_GetAttrString(_pymsg, "fw_permanent_stab");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fw_permanent_stab = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__vtol_vehicle_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VtolVehicleStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._vtol_vehicle_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VtolVehicleStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__VtolVehicleStatus * ros_message = (px4_msgs__msg__VtolVehicleStatus *)raw_ros_message;
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
  {  // vtol_in_rw_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vtol_in_rw_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vtol_in_rw_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vtol_in_trans_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vtol_in_trans_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vtol_in_trans_mode", field);
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
  {  // vtol_transition_failsafe
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vtol_transition_failsafe ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vtol_transition_failsafe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fw_permanent_stab
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fw_permanent_stab ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fw_permanent_stab", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
