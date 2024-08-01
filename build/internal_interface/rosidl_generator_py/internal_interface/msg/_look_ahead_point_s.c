// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from internal_interface:msg/LookAheadPoint.idl
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
#include "internal_interface/msg/detail/look_ahead_point__struct.h"
#include "internal_interface/msg/detail/look_ahead_point__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool internal_interface__msg__look_ahead_point__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("internal_interface.msg._look_ahead_point.LookAheadPoint", full_classname_dest, 55) == 0);
  }
  internal_interface__msg__LookAheadPoint * ros_message = _ros_message;
  {  // alpha
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // look_ahead_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "look_ahead_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->look_ahead_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->confidence = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // source
    PyObject * field = PyObject_GetAttrString(_pymsg, "source");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->source, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * internal_interface__msg__look_ahead_point__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LookAheadPoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("internal_interface.msg._look_ahead_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LookAheadPoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  internal_interface__msg__LookAheadPoint * ros_message = (internal_interface__msg__LookAheadPoint *)raw_ros_message;
  {  // alpha
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // look_ahead_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->look_ahead_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "look_ahead_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->source.data,
      strlen(ros_message->source.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
