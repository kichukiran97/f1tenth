// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from internal_interface:msg/Node.idl
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
#include "internal_interface/msg/detail/node__struct.h"
#include "internal_interface/msg/detail/node__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool internal_interface__msg__node__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("internal_interface.msg._node.Node", full_classname_dest, 33) == 0);
  }
  internal_interface__msg__Node * ros_message = _ros_message;
  {  // node_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->node_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // map_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->map_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // map_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->map_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * internal_interface__msg__node__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Node */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("internal_interface.msg._node");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Node");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  internal_interface__msg__Node * ros_message = (internal_interface__msg__Node *)raw_ros_message;
  {  // node_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->node_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->map_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->map_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
