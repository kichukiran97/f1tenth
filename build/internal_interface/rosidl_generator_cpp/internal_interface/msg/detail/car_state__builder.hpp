// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/CarState.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__CAR_STATE__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__CAR_STATE__BUILDER_HPP_

#include "internal_interface/msg/detail/car_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_CarState_pitch
{
public:
  explicit Init_CarState_pitch(::internal_interface::msg::CarState & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::CarState pitch(::internal_interface::msg::CarState::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::CarState msg_;
};

class Init_CarState_roll
{
public:
  explicit Init_CarState_roll(::internal_interface::msg::CarState & msg)
  : msg_(msg)
  {}
  Init_CarState_pitch roll(::internal_interface::msg::CarState::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_CarState_pitch(msg_);
  }

private:
  ::internal_interface::msg::CarState msg_;
};

class Init_CarState_yaw
{
public:
  explicit Init_CarState_yaw(::internal_interface::msg::CarState & msg)
  : msg_(msg)
  {}
  Init_CarState_roll yaw(::internal_interface::msg::CarState::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_CarState_roll(msg_);
  }

private:
  ::internal_interface::msg::CarState msg_;
};

class Init_CarState_accel_z
{
public:
  explicit Init_CarState_accel_z(::internal_interface::msg::CarState & msg)
  : msg_(msg)
  {}
  Init_CarState_yaw accel_z(::internal_interface::msg::CarState::_accel_z_type arg)
  {
    msg_.accel_z = std::move(arg);
    return Init_CarState_yaw(msg_);
  }

private:
  ::internal_interface::msg::CarState msg_;
};

class Init_CarState_accel_y
{
public:
  explicit Init_CarState_accel_y(::internal_interface::msg::CarState & msg)
  : msg_(msg)
  {}
  Init_CarState_accel_z accel_y(::internal_interface::msg::CarState::_accel_y_type arg)
  {
    msg_.accel_y = std::move(arg);
    return Init_CarState_accel_z(msg_);
  }

private:
  ::internal_interface::msg::CarState msg_;
};

class Init_CarState_accel_x
{
public:
  explicit Init_CarState_accel_x(::internal_interface::msg::CarState & msg)
  : msg_(msg)
  {}
  Init_CarState_accel_y accel_x(::internal_interface::msg::CarState::_accel_x_type arg)
  {
    msg_.accel_x = std::move(arg);
    return Init_CarState_accel_y(msg_);
  }

private:
  ::internal_interface::msg::CarState msg_;
};

class Init_CarState_vel_z
{
public:
  explicit Init_CarState_vel_z(::internal_interface::msg::CarState & msg)
  : msg_(msg)
  {}
  Init_CarState_accel_x vel_z(::internal_interface::msg::CarState::_vel_z_type arg)
  {
    msg_.vel_z = std::move(arg);
    return Init_CarState_accel_x(msg_);
  }

private:
  ::internal_interface::msg::CarState msg_;
};

class Init_CarState_vel_y
{
public:
  explicit Init_CarState_vel_y(::internal_interface::msg::CarState & msg)
  : msg_(msg)
  {}
  Init_CarState_vel_z vel_y(::internal_interface::msg::CarState::_vel_y_type arg)
  {
    msg_.vel_y = std::move(arg);
    return Init_CarState_vel_z(msg_);
  }

private:
  ::internal_interface::msg::CarState msg_;
};

class Init_CarState_vel_x
{
public:
  explicit Init_CarState_vel_x(::internal_interface::msg::CarState & msg)
  : msg_(msg)
  {}
  Init_CarState_vel_y vel_x(::internal_interface::msg::CarState::_vel_x_type arg)
  {
    msg_.vel_x = std::move(arg);
    return Init_CarState_vel_y(msg_);
  }

private:
  ::internal_interface::msg::CarState msg_;
};

class Init_CarState_z
{
public:
  explicit Init_CarState_z(::internal_interface::msg::CarState & msg)
  : msg_(msg)
  {}
  Init_CarState_vel_x z(::internal_interface::msg::CarState::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_CarState_vel_x(msg_);
  }

private:
  ::internal_interface::msg::CarState msg_;
};

class Init_CarState_y
{
public:
  explicit Init_CarState_y(::internal_interface::msg::CarState & msg)
  : msg_(msg)
  {}
  Init_CarState_z y(::internal_interface::msg::CarState::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_CarState_z(msg_);
  }

private:
  ::internal_interface::msg::CarState msg_;
};

class Init_CarState_x
{
public:
  Init_CarState_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarState_y x(::internal_interface::msg::CarState::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CarState_y(msg_);
  }

private:
  ::internal_interface::msg::CarState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::CarState>()
{
  return internal_interface::msg::builder::Init_CarState_x();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__CAR_STATE__BUILDER_HPP_
