// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/LocalizedObjects.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__LOCALIZED_OBJECTS__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__LOCALIZED_OBJECTS__BUILDER_HPP_

#include "internal_interface/msg/detail/localized_objects__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_LocalizedObjects_objects
{
public:
  Init_LocalizedObjects_objects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::internal_interface::msg::LocalizedObjects objects(::internal_interface::msg::LocalizedObjects::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::LocalizedObjects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::LocalizedObjects>()
{
  return internal_interface::msg::builder::Init_LocalizedObjects_objects();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__LOCALIZED_OBJECTS__BUILDER_HPP_
