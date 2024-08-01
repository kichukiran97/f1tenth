// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from internal_interface:msg/GpsCurve.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "internal_interface/msg/detail/gps_curve__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace internal_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GpsCurve_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) internal_interface::msg::GpsCurve(_init);
}

void GpsCurve_fini_function(void * message_memory)
{
  auto typed_message = static_cast<internal_interface::msg::GpsCurve *>(message_memory);
  typed_message->~GpsCurve();
}

size_t size_function__GpsCurve__nodes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<internal_interface::msg::GpsNode> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GpsCurve__nodes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<internal_interface::msg::GpsNode> *>(untyped_member);
  return &member[index];
}

void * get_function__GpsCurve__nodes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<internal_interface::msg::GpsNode> *>(untyped_member);
  return &member[index];
}

void resize_function__GpsCurve__nodes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<internal_interface::msg::GpsNode> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GpsCurve_message_member_array[3] = {
  {
    "nodes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<internal_interface::msg::GpsNode>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface::msg::GpsCurve, nodes),  // bytes offset in struct
    nullptr,  // default value
    size_function__GpsCurve__nodes,  // size() function pointer
    get_const_function__GpsCurve__nodes,  // get_const(index) function pointer
    get_function__GpsCurve__nodes,  // get(index) function pointer
    resize_function__GpsCurve__nodes  // resize(index) function pointer
  },
  {
    "car",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<internal_interface::msg::GpsNode>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface::msg::GpsCurve, car),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<internal_interface::msg::GpsNode>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface::msg::GpsCurve, target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GpsCurve_message_members = {
  "internal_interface::msg",  // message namespace
  "GpsCurve",  // message name
  3,  // number of fields
  sizeof(internal_interface::msg::GpsCurve),
  GpsCurve_message_member_array,  // message members
  GpsCurve_init_function,  // function to initialize message memory (memory has to be allocated)
  GpsCurve_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GpsCurve_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GpsCurve_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace internal_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<internal_interface::msg::GpsCurve>()
{
  return &::internal_interface::msg::rosidl_typesupport_introspection_cpp::GpsCurve_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, internal_interface, msg, GpsCurve)() {
  return &::internal_interface::msg::rosidl_typesupport_introspection_cpp::GpsCurve_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
