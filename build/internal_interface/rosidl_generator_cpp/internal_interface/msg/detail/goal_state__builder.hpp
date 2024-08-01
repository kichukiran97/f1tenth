// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/GoalState.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__GOAL_STATE__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__GOAL_STATE__BUILDER_HPP_

#include "internal_interface/msg/detail/goal_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_GoalState_goal_node_id
{
public:
  Init_GoalState_goal_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::internal_interface::msg::GoalState goal_node_id(::internal_interface::msg::GoalState::_goal_node_id_type arg)
  {
    msg_.goal_node_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::GoalState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::GoalState>()
{
  return internal_interface::msg::builder::Init_GoalState_goal_node_id();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__GOAL_STATE__BUILDER_HPP_
