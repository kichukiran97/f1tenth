// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from internal_interface:msg/LocalizedObjects.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "internal_interface/msg/detail/localized_objects__struct.hpp"
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

void LocalizedObjects_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) internal_interface::msg::LocalizedObjects(_init);
}

void LocalizedObjects_fini_function(void * message_memory)
{
  auto typed_message = static_cast<internal_interface::msg::LocalizedObjects *>(message_memory);
  typed_message->~LocalizedObjects();
}

size_t size_function__LocalizedObjects__objects(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<internal_interface::msg::LocalizedObject> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LocalizedObjects__objects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<internal_interface::msg::LocalizedObject> *>(untyped_member);
  return &member[index];
}

void * get_function__LocalizedObjects__objects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<internal_interface::msg::LocalizedObject> *>(untyped_member);
  return &member[index];
}

void resize_function__LocalizedObjects__objects(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<internal_interface::msg::LocalizedObject> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LocalizedObjects_message_member_array[1] = {
  {
    "objects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<internal_interface::msg::LocalizedObject>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface::msg::LocalizedObjects, objects),  // bytes offset in struct
    nullptr,  // default value
    size_function__LocalizedObjects__objects,  // size() function pointer
    get_const_function__LocalizedObjects__objects,  // get_const(index) function pointer
    get_function__LocalizedObjects__objects,  // get(index) function pointer
    resize_function__LocalizedObjects__objects  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LocalizedObjects_message_members = {
  "internal_interface::msg",  // message namespace
  "LocalizedObjects",  // message name
  1,  // number of fields
  sizeof(internal_interface::msg::LocalizedObjects),
  LocalizedObjects_message_member_array,  // message members
  LocalizedObjects_init_function,  // function to initialize message memory (memory has to be allocated)
  LocalizedObjects_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LocalizedObjects_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LocalizedObjects_message_members,
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
get_message_type_support_handle<internal_interface::msg::LocalizedObjects>()
{
  return &::internal_interface::msg::rosidl_typesupport_introspection_cpp::LocalizedObjects_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, internal_interface, msg, LocalizedObjects)() {
  return &::internal_interface::msg::rosidl_typesupport_introspection_cpp::LocalizedObjects_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
