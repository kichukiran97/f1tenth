// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from internal_interface:msg/Intersection.idl
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
#include "internal_interface/msg/detail/intersection__struct.h"
#include "internal_interface/msg/detail/intersection__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool internal_interface__msg__intersection__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("internal_interface.msg._intersection.Intersection", full_classname_dest, 49) == 0);
  }
  internal_interface__msg__Intersection * ros_message = _ros_message;
  {  // intersection_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "intersection_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->intersection_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // intersection_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "intersection_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->intersection_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_detected = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * internal_interface__msg__intersection__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Intersection */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("internal_interface.msg._intersection");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Intersection");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  internal_interface__msg__Intersection * ros_message = (internal_interface__msg__Intersection *)raw_ros_message;
  {  // intersection_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->intersection_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "intersection_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // intersection_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->intersection_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "intersection_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
