// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/LookAheadPoint.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__LOOK_AHEAD_POINT__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__LOOK_AHEAD_POINT__BUILDER_HPP_

#include "internal_interface/msg/detail/look_ahead_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_LookAheadPoint_source
{
public:
  explicit Init_LookAheadPoint_source(::internal_interface::msg::LookAheadPoint & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::LookAheadPoint source(::internal_interface::msg::LookAheadPoint::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::LookAheadPoint msg_;
};

class Init_LookAheadPoint_confidence
{
public:
  explicit Init_LookAheadPoint_confidence(::internal_interface::msg::LookAheadPoint & msg)
  : msg_(msg)
  {}
  Init_LookAheadPoint_source confidence(::internal_interface::msg::LookAheadPoint::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_LookAheadPoint_source(msg_);
  }

private:
  ::internal_interface::msg::LookAheadPoint msg_;
};

class Init_LookAheadPoint_look_ahead_distance
{
public:
  explicit Init_LookAheadPoint_look_ahead_distance(::internal_interface::msg::LookAheadPoint & msg)
  : msg_(msg)
  {}
  Init_LookAheadPoint_confidence look_ahead_distance(::internal_interface::msg::LookAheadPoint::_look_ahead_distance_type arg)
  {
    msg_.look_ahead_distance = std::move(arg);
    return Init_LookAheadPoint_confidence(msg_);
  }

private:
  ::internal_interface::msg::LookAheadPoint msg_;
};

class Init_LookAheadPoint_alpha
{
public:
  Init_LookAheadPoint_alpha()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LookAheadPoint_look_ahead_distance alpha(::internal_interface::msg::LookAheadPoint::_alpha_type arg)
  {
    msg_.alpha = std::move(arg);
    return Init_LookAheadPoint_look_ahead_distance(msg_);
  }

private:
  ::internal_interface::msg::LookAheadPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::LookAheadPoint>()
{
  return internal_interface::msg::builder::Init_LookAheadPoint_alpha();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__LOOK_AHEAD_POINT__BUILDER_HPP_
