// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/OpticalFlow.idl
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
#include "px4_msgs/msg/detail/optical_flow__struct.h"
#include "px4_msgs/msg/detail/optical_flow__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__optical_flow__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("px4_msgs.msg._optical_flow.OpticalFlow", full_classname_dest, 38) == 0);
  }
  px4_msgs__msg__OpticalFlow * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // sensor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensor_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pixel_flow_x_integral
    PyObject * field = PyObject_GetAttrString(_pymsg, "pixel_flow_x_integral");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pixel_flow_x_integral = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pixel_flow_y_integral
    PyObject * field = PyObject_GetAttrString(_pymsg, "pixel_flow_y_integral");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pixel_flow_y_integral = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_x_rate_integral
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_x_rate_integral");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_x_rate_integral = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_y_rate_integral
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_y_rate_integral");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_y_rate_integral = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_z_rate_integral
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_z_rate_integral");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_z_rate_integral = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ground_distance_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "ground_distance_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ground_distance_m = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // integration_timespan
    PyObject * field = PyObject_GetAttrString(_pymsg, "integration_timespan");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->integration_timespan = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // time_since_last_sonar_update
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_since_last_sonar_update");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_since_last_sonar_update = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // frame_count_since_last_readout
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame_count_since_last_readout");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frame_count_since_last_readout = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gyro_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gyro_temperature = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "quality");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->quality = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_flow_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_flow_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_flow_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_ground_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_ground_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_ground_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_ground_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_ground_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_ground_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__optical_flow__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OpticalFlow */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._optical_flow");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OpticalFlow");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__OpticalFlow * ros_message = (px4_msgs__msg__OpticalFlow *)raw_ros_message;
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
  {  // sensor_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensor_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pixel_flow_x_integral
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pixel_flow_x_integral);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pixel_flow_x_integral", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pixel_flow_y_integral
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pixel_flow_y_integral);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pixel_flow_y_integral", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_x_rate_integral
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_x_rate_integral);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_x_rate_integral", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_y_rate_integral
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_y_rate_integral);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_y_rate_integral", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_z_rate_integral
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_z_rate_integral);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_z_rate_integral", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ground_distance_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ground_distance_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ground_distance_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // integration_timespan
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->integration_timespan);
    {
      int rc = PyObject_SetAttrString(_pymessage, "integration_timespan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_since_last_sonar_update
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_since_last_sonar_update);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_since_last_sonar_update", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frame_count_since_last_readout
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->frame_count_since_last_readout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame_count_since_last_readout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_temperature
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gyro_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quality
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->quality);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quality", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_flow_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_flow_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_flow_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_ground_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_ground_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_ground_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_ground_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_ground_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_ground_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
