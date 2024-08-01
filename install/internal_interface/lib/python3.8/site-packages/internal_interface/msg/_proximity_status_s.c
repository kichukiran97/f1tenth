// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from internal_interface:msg/ProximityStatus.idl
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
#include "internal_interface/msg/detail/proximity_status__struct.h"
#include "internal_interface/msg/detail/proximity_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool internal_interface__msg__proximity_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("internal_interface.msg._proximity_status.ProximityStatus", full_classname_dest, 56) == 0);
  }
  internal_interface__msg__ProximityStatus * ros_message = _ros_message;
  {  // front_is_clear
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_is_clear");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->front_is_clear = (Py_True == field);
    Py_DECREF(field);
  }
  {  // left_is_clear
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_is_clear");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_is_clear = (Py_True == field);
    Py_DECREF(field);
  }
  {  // right_is_clear
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_is_clear");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_is_clear = (Py_True == field);
    Py_DECREF(field);
  }
  {  // front_very_close
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_very_close");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->front_very_close = (Py_True == field);
    Py_DECREF(field);
  }
  {  // left_very_close
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_very_close");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_very_close = (Py_True == field);
    Py_DECREF(field);
  }
  {  // right_very_close
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_very_close");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_very_close = (Py_True == field);
    Py_DECREF(field);
  }
  {  // front_cm
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_cm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_cm = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_cm
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_cm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_cm = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_cm
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_cm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_cm = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * internal_interface__msg__proximity_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ProximityStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("internal_interface.msg._proximity_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ProximityStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  internal_interface__msg__ProximityStatus * ros_message = (internal_interface__msg__ProximityStatus *)raw_ros_message;
  {  // front_is_clear
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->front_is_clear ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_is_clear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_is_clear
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_is_clear ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_is_clear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_is_clear
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_is_clear ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_is_clear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_very_close
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->front_very_close ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_very_close", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_very_close
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_very_close ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_very_close", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_very_close
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_very_close ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_very_close", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_cm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_cm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_cm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_cm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_cm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_cm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_cm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_cm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_cm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
