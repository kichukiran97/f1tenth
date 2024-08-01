// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from internal_interface:msg/ManueverPart.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_PART__TRAITS_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_PART__TRAITS_HPP_

#include "internal_interface/msg/detail/manuever_part__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'control'
#include "internal_interface/msg/detail/control_input__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<internal_interface::msg::ManueverPart>()
{
  return "internal_interface::msg::ManueverPart";
}

template<>
inline const char * name<internal_interface::msg::ManueverPart>()
{
  return "internal_interface/msg/ManueverPart";
}

template<>
struct has_fixed_size<internal_interface::msg::ManueverPart>
  : std::integral_constant<bool, has_fixed_size<internal_interface::msg::ControlInput>::value> {};

template<>
struct has_bounded_size<internal_interface::msg::ManueverPart>
  : std::integral_constant<bool, has_bounded_size<internal_interface::msg::ControlInput>::value> {};

template<>
struct is_message<internal_interface::msg::ManueverPart>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_PART__TRAITS_HPP_
