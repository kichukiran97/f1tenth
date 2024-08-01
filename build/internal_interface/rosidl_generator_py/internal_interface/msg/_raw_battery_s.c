// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from internal_interface:msg/RawBattery.idl
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
#include "internal_interface/msg/detail/raw_battery__struct.h"
#include "internal_interface/msg/detail/raw_battery__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool internal_interface__msg__raw_battery__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("internal_interface.msg._raw_battery.RawBattery", full_classname_dest, 46) == 0);
  }
  internal_interface__msg__RawBattery * ros_message = _ros_message;
  {  // voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // instant_consumption
    PyObject * field = PyObject_GetAttrString(_pymsg, "instant_consumption");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->instant_consumption = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * internal_interface__msg__raw_battery__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RawBattery */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("internal_interface.msg._raw_battery");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RawBattery");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  internal_interface__msg__RawBattery * ros_message = (internal_interface__msg__RawBattery *)raw_ros_message;
  {  // voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // instant_consumption
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->instant_consumption);
    {
      int rc = PyObject_SetAttrString(_pymessage, "instant_consumption", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
