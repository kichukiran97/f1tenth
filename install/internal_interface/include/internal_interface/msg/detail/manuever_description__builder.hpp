// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/ManueverDescription.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_DESCRIPTION__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_DESCRIPTION__BUILDER_HPP_

#include "internal_interface/msg/detail/manuever_description__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_ManueverDescription_name
{
public:
  explicit Init_ManueverDescription_name(::internal_interface::msg::ManueverDescription & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::ManueverDescription name(::internal_interface::msg::ManueverDescription::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::ManueverDescription msg_;
};

class Init_ManueverDescription_parts
{
public:
  Init_ManueverDescription_parts()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManueverDescription_name parts(::internal_interface::msg::ManueverDescription::_parts_type arg)
  {
    msg_.parts = std::move(arg);
    return Init_ManueverDescription_name(msg_);
  }

private:
  ::internal_interface::msg::ManueverDescription msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::ManueverDescription>()
{
  return internal_interface::msg::builder::Init_ManueverDescription_parts();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_DESCRIPTION__BUILDER_HPP_
