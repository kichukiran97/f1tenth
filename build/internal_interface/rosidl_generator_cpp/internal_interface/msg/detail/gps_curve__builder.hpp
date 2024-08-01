// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/GpsCurve.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__GPS_CURVE__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__GPS_CURVE__BUILDER_HPP_

#include "internal_interface/msg/detail/gps_curve__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_GpsCurve_target
{
public:
  explicit Init_GpsCurve_target(::internal_interface::msg::GpsCurve & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::GpsCurve target(::internal_interface::msg::GpsCurve::_target_type arg)
  {
    msg_.target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::GpsCurve msg_;
};

class Init_GpsCurve_car
{
public:
  explicit Init_GpsCurve_car(::internal_interface::msg::GpsCurve & msg)
  : msg_(msg)
  {}
  Init_GpsCurve_target car(::internal_interface::msg::GpsCurve::_car_type arg)
  {
    msg_.car = std::move(arg);
    return Init_GpsCurve_target(msg_);
  }

private:
  ::internal_interface::msg::GpsCurve msg_;
};

class Init_GpsCurve_nodes
{
public:
  Init_GpsCurve_nodes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpsCurve_car nodes(::internal_interface::msg::GpsCurve::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return Init_GpsCurve_car(msg_);
  }

private:
  ::internal_interface::msg::GpsCurve msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::GpsCurve>()
{
  return internal_interface::msg::builder::Init_GpsCurve_nodes();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__GPS_CURVE__BUILDER_HPP_
