// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/GpsNode.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__GPS_NODE__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__GPS_NODE__BUILDER_HPP_

#include "internal_interface/msg/detail/gps_node__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_GpsNode_y
{
public:
  explicit Init_GpsNode_y(::internal_interface::msg::GpsNode & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::GpsNode y(::internal_interface::msg::GpsNode::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::GpsNode msg_;
};

class Init_GpsNode_x
{
public:
  Init_GpsNode_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpsNode_y x(::internal_interface::msg::GpsNode::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GpsNode_y(msg_);
  }

private:
  ::internal_interface::msg::GpsNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::GpsNode>()
{
  return internal_interface::msg::builder::Init_GpsNode_x();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__GPS_NODE__BUILDER_HPP_
