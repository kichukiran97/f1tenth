// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include "internal_interface/msg/detail/object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_Object_label
{
public:
  explicit Init_Object_label(::internal_interface::msg::Object & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::Object label(::internal_interface::msg::Object::_label_type arg)
  {
    msg_.label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::Object msg_;
};

class Init_Object_y2
{
public:
  explicit Init_Object_y2(::internal_interface::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_label y2(::internal_interface::msg::Object::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return Init_Object_label(msg_);
  }

private:
  ::internal_interface::msg::Object msg_;
};

class Init_Object_x2
{
public:
  explicit Init_Object_x2(::internal_interface::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_y2 x2(::internal_interface::msg::Object::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_Object_y2(msg_);
  }

private:
  ::internal_interface::msg::Object msg_;
};

class Init_Object_y1
{
public:
  explicit Init_Object_y1(::internal_interface::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_x2 y1(::internal_interface::msg::Object::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_Object_x2(msg_);
  }

private:
  ::internal_interface::msg::Object msg_;
};

class Init_Object_x1
{
public:
  Init_Object_x1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_y1 x1(::internal_interface::msg::Object::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_Object_y1(msg_);
  }

private:
  ::internal_interface::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::Object>()
{
  return internal_interface::msg::builder::Init_Object_x1();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__OBJECT__BUILDER_HPP_
