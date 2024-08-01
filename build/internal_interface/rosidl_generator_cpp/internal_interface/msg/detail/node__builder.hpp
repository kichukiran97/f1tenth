// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__NODE__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__NODE__BUILDER_HPP_

#include "internal_interface/msg/detail/node__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_Node_map_y
{
public:
  explicit Init_Node_map_y(::internal_interface::msg::Node & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::Node map_y(::internal_interface::msg::Node::_map_y_type arg)
  {
    msg_.map_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::Node msg_;
};

class Init_Node_map_x
{
public:
  explicit Init_Node_map_x(::internal_interface::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_map_y map_x(::internal_interface::msg::Node::_map_x_type arg)
  {
    msg_.map_x = std::move(arg);
    return Init_Node_map_y(msg_);
  }

private:
  ::internal_interface::msg::Node msg_;
};

class Init_Node_node_id
{
public:
  Init_Node_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Node_map_x node_id(::internal_interface::msg::Node::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_Node_map_x(msg_);
  }

private:
  ::internal_interface::msg::Node msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::Node>()
{
  return internal_interface::msg::builder::Init_Node_node_id();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__NODE__BUILDER_HPP_
