// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from internal_interface:msg/ManueverDescription.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "internal_interface/msg/detail/manuever_description__struct.hpp"
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

void ManueverDescription_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) internal_interface::msg::ManueverDescription(_init);
}

void ManueverDescription_fini_function(void * message_memory)
{
  auto typed_message = static_cast<internal_interface::msg::ManueverDescription *>(message_memory);
  typed_message->~ManueverDescription();
}

size_t size_function__ManueverDescription__parts(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<internal_interface::msg::ManueverPart> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ManueverDescription__parts(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<internal_interface::msg::ManueverPart> *>(untyped_member);
  return &member[index];
}

void * get_function__ManueverDescription__parts(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<internal_interface::msg::ManueverPart> *>(untyped_member);
  return &member[index];
}

void resize_function__ManueverDescription__parts(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<internal_interface::msg::ManueverPart> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ManueverDescription_message_member_array[2] = {
  {
    "parts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<internal_interface::msg::ManueverPart>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface::msg::ManueverDescription, parts),  // bytes offset in struct
    nullptr,  // default value
    size_function__ManueverDescription__parts,  // size() function pointer
    get_const_function__ManueverDescription__parts,  // get_const(index) function pointer
    get_function__ManueverDescription__parts,  // get(index) function pointer
    resize_function__ManueverDescription__parts  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(internal_interface::msg::ManueverDescription, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ManueverDescription_message_members = {
  "internal_interface::msg",  // message namespace
  "ManueverDescription",  // message name
  2,  // number of fields
  sizeof(internal_interface::msg::ManueverDescription),
  ManueverDescription_message_member_array,  // message members
  ManueverDescription_init_function,  // function to initialize message memory (memory has to be allocated)
  ManueverDescription_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ManueverDescription_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ManueverDescription_message_members,
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
get_message_type_support_handle<internal_interface::msg::ManueverDescription>()
{
  return &::internal_interface::msg::rosidl_typesupport_introspection_cpp::ManueverDescription_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, internal_interface, msg, ManueverDescription)() {
  return &::internal_interface::msg::rosidl_typesupport_introspection_cpp::ManueverDescription_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
