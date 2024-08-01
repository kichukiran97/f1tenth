// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from internal_interface:msg/ManueverPart.idl
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
#include "internal_interface/msg/detail/manuever_part__struct.h"
#include "internal_interface/msg/detail/manuever_part__functions.h"

bool internal_interface__msg__control_input__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * internal_interface__msg__control_input__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool internal_interface__msg__manuever_part__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("internal_interface.msg._manuever_part.ManueverPart", full_classname_dest, 50) == 0);
  }
  internal_interface__msg__ManueverPart * ros_message = _ros_message;
  {  // control
    PyObject * field = PyObject_GetAttrString(_pymsg, "control");
    if (!field) {
      return false;
    }
    if (!internal_interface__msg__control_input__convert_from_py(field, &ros_message->control)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // duration_seconds
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration_seconds");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->duration_seconds = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * internal_interface__msg__manuever_part__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ManueverPart */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("internal_interface.msg._manuever_part");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ManueverPart");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  internal_interface__msg__ManueverPart * ros_message = (internal_interface__msg__ManueverPart *)raw_ros_message;
  {  // control
    PyObject * field = NULL;
    field = internal_interface__msg__control_input__convert_to_py(&ros_message->control);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "control", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration_seconds
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->duration_seconds);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration_seconds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}