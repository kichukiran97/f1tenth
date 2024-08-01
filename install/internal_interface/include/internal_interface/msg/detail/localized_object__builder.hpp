// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/LocalizedObject.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__LOCALIZED_OBJECT__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__LOCALIZED_OBJECT__BUILDER_HPP_

#include "internal_interface/msg/detail/localized_object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_LocalizedObject_label
{
public:
  explicit Init_LocalizedObject_label(::internal_interface::msg::LocalizedObject & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::LocalizedObject label(::internal_interface::msg::LocalizedObject::_label_type arg)
  {
    msg_.label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::LocalizedObject msg_;
};

class Init_LocalizedObject_map_y
{
public:
  explicit Init_LocalizedObject_map_y(::internal_interface::msg::LocalizedObject & msg)
  : msg_(msg)
  {}
  Init_LocalizedObject_label map_y(::internal_interface::msg::LocalizedObject::_map_y_type arg)
  {
    msg_.map_y = std::move(arg);
    return Init_LocalizedObject_label(msg_);
  }

private:
  ::internal_interface::msg::LocalizedObject msg_;
};

class Init_LocalizedObject_map_x
{
public:
  explicit Init_LocalizedObject_map_x(::internal_interface::msg::LocalizedObject & msg)
  : msg_(msg)
  {}
  Init_LocalizedObject_map_y map_x(::internal_interface::msg::LocalizedObject::_map_x_type arg)
  {
    msg_.map_x = std::move(arg);
    return Init_LocalizedObject_map_y(msg_);
  }

private:
  ::internal_interface::msg::LocalizedObject msg_;
};

class Init_LocalizedObject_local_y
{
public:
  explicit Init_LocalizedObject_local_y(::internal_interface::msg::LocalizedObject & msg)
  : msg_(msg)
  {}
  Init_LocalizedObject_map_x local_y(::internal_interface::msg::LocalizedObject::_local_y_type arg)
  {
    msg_.local_y = std::move(arg);
    return Init_LocalizedObject_map_x(msg_);
  }

private:
  ::internal_interface::msg::LocalizedObject msg_;
};

class Init_LocalizedObject_local_x
{
public:
  Init_LocalizedObject_local_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalizedObject_local_y local_x(::internal_interface::msg::LocalizedObject::_local_x_type arg)
  {
    msg_.local_x = std::move(arg);
    return Init_LocalizedObject_local_y(msg_);
  }

private:
  ::internal_interface::msg::LocalizedObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::LocalizedObject>()
{
  return internal_interface::msg::builder::Init_LocalizedObject_local_x();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__LOCALIZED_OBJECT__BUILDER_HPP_
