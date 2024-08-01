// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/PurePursuitParams.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__PURE_PURSUIT_PARAMS__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__PURE_PURSUIT_PARAMS__BUILDER_HPP_

#include "internal_interface/msg/detail/pure_pursuit_params__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_PurePursuitParams_alpha_mul
{
public:
  explicit Init_PurePursuitParams_alpha_mul(::internal_interface::msg::PurePursuitParams & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::PurePursuitParams alpha_mul(::internal_interface::msg::PurePursuitParams::_alpha_mul_type arg)
  {
    msg_.alpha_mul = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::PurePursuitParams msg_;
};

class Init_PurePursuitParams_max_speed
{
public:
  Init_PurePursuitParams_max_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PurePursuitParams_alpha_mul max_speed(::internal_interface::msg::PurePursuitParams::_max_speed_type arg)
  {
    msg_.max_speed = std::move(arg);
    return Init_PurePursuitParams_alpha_mul(msg_);
  }

private:
  ::internal_interface::msg::PurePursuitParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::PurePursuitParams>()
{
  return internal_interface::msg::builder::Init_PurePursuitParams_max_speed();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__PURE_PURSUIT_PARAMS__BUILDER_HPP_
