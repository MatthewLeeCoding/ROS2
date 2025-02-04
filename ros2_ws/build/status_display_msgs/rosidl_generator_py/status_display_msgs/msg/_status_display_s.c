// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from status_display_msgs:msg/StatusDisplay.idl
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
#include "status_display_msgs/msg/detail/status_display__struct.h"
#include "status_display_msgs/msg/detail/status_display__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool status_display_msgs__msg__status_display__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("status_display_msgs.msg._status_display.StatusDisplay", full_classname_dest, 53) == 0);
  }
  status_display_msgs__msg__StatusDisplay * ros_message = _ros_message;
  {  // left_setpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_setpoint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_setpoint = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_output");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_output = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_setpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_setpoint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_setpoint = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_output");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_output = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * status_display_msgs__msg__status_display__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StatusDisplay */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("status_display_msgs.msg._status_display");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StatusDisplay");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  status_display_msgs__msg__StatusDisplay * ros_message = (status_display_msgs__msg__StatusDisplay *)raw_ros_message;
  {  // left_setpoint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_setpoint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_setpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_output
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_setpoint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_setpoint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_setpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_output
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
