// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from internal_interface:msg/GpsCurve.idl
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
#include "internal_interface/msg/detail/gps_curve__struct.h"
#include "internal_interface/msg/detail/gps_curve__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "internal_interface/msg/detail/gps_node__functions.h"
// end nested array functions include
bool internal_interface__msg__gps_node__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * internal_interface__msg__gps_node__convert_to_py(void * raw_ros_message);
bool internal_interface__msg__gps_node__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * internal_interface__msg__gps_node__convert_to_py(void * raw_ros_message);
bool internal_interface__msg__gps_node__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * internal_interface__msg__gps_node__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool internal_interface__msg__gps_curve__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("internal_interface.msg._gps_curve.GpsCurve", full_classname_dest, 42) == 0);
  }
  internal_interface__msg__GpsCurve * ros_message = _ros_message;
  {  // nodes
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodes");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'nodes'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!internal_interface__msg__GpsNode__Sequence__init(&(ros_message->nodes), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create internal_interface__msg__GpsNode__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    internal_interface__msg__GpsNode * dest = ros_message->nodes.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!internal_interface__msg__gps_node__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // car
    PyObject * field = PyObject_GetAttrString(_pymsg, "car");
    if (!field) {
      return false;
    }
    if (!internal_interface__msg__gps_node__convert_from_py(field, &ros_message->car)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // target
    PyObject * field = PyObject_GetAttrString(_pymsg, "target");
    if (!field) {
      return false;
    }
    if (!internal_interface__msg__gps_node__convert_from_py(field, &ros_message->target)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * internal_interface__msg__gps_curve__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GpsCurve */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("internal_interface.msg._gps_curve");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GpsCurve");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  internal_interface__msg__GpsCurve * ros_message = (internal_interface__msg__GpsCurve *)raw_ros_message;
  {  // nodes
    PyObject * field = NULL;
    size_t size = ros_message->nodes.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    internal_interface__msg__GpsNode * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->nodes.data[i]);
      PyObject * pyitem = internal_interface__msg__gps_node__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // car
    PyObject * field = NULL;
    field = internal_interface__msg__gps_node__convert_to_py(&ros_message->car);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "car", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target
    PyObject * field = NULL;
    field = internal_interface__msg__gps_node__convert_to_py(&ros_message->target);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
