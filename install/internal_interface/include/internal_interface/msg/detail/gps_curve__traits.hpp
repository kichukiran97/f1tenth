// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from internal_interface:msg/GpsCurve.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__GPS_CURVE__TRAITS_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__GPS_CURVE__TRAITS_HPP_

#include "internal_interface/msg/detail/gps_curve__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'car'
// Member 'target'
#include "internal_interface/msg/detail/gps_node__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<internal_interface::msg::GpsCurve>()
{
  return "internal_interface::msg::GpsCurve";
}

template<>
inline const char * name<internal_interface::msg::GpsCurve>()
{
  return "internal_interface/msg/GpsCurve";
}

template<>
struct has_fixed_size<internal_interface::msg::GpsCurve>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<internal_interface::msg::GpsCurve>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<internal_interface::msg::GpsCurve>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__GPS_CURVE__TRAITS_HPP_
