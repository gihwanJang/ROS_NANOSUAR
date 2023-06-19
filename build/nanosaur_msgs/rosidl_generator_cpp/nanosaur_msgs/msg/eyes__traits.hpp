// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nanosaur_msgs:msg/Eyes.idl
// generated code does not contain a copyright notice

#ifndef NANOSAUR_MSGS__MSG__EYES__TRAITS_HPP_
#define NANOSAUR_MSGS__MSG__EYES__TRAITS_HPP_

#include "nanosaur_msgs/msg/eyes__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nanosaur_msgs::msg::Eyes>()
{
  return "nanosaur_msgs::msg::Eyes";
}

template<>
struct has_fixed_size<nanosaur_msgs::msg::Eyes>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<nanosaur_msgs::msg::Eyes>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<nanosaur_msgs::msg::Eyes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NANOSAUR_MSGS__MSG__EYES__TRAITS_HPP_
