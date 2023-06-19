// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nanosaur_msgs:srv/EyeMessage.idl
// generated code does not contain a copyright notice

#ifndef NANOSAUR_MSGS__SRV__EYE_MESSAGE__TRAITS_HPP_
#define NANOSAUR_MSGS__SRV__EYE_MESSAGE__TRAITS_HPP_

#include "nanosaur_msgs/srv/eye_message__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nanosaur_msgs::srv::EyeMessage_Request>()
{
  return "nanosaur_msgs::srv::EyeMessage_Request";
}

template<>
struct has_fixed_size<nanosaur_msgs::srv::EyeMessage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nanosaur_msgs::srv::EyeMessage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nanosaur_msgs::srv::EyeMessage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nanosaur_msgs::srv::EyeMessage_Response>()
{
  return "nanosaur_msgs::srv::EyeMessage_Response";
}

template<>
struct has_fixed_size<nanosaur_msgs::srv::EyeMessage_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nanosaur_msgs::srv::EyeMessage_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nanosaur_msgs::srv::EyeMessage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nanosaur_msgs::srv::EyeMessage>()
{
  return "nanosaur_msgs::srv::EyeMessage";
}

template<>
struct has_fixed_size<nanosaur_msgs::srv::EyeMessage>
  : std::integral_constant<
    bool,
    has_fixed_size<nanosaur_msgs::srv::EyeMessage_Request>::value &&
    has_fixed_size<nanosaur_msgs::srv::EyeMessage_Response>::value
  >
{
};

template<>
struct has_bounded_size<nanosaur_msgs::srv::EyeMessage>
  : std::integral_constant<
    bool,
    has_bounded_size<nanosaur_msgs::srv::EyeMessage_Request>::value &&
    has_bounded_size<nanosaur_msgs::srv::EyeMessage_Response>::value
  >
{
};

template<>
struct is_service<nanosaur_msgs::srv::EyeMessage>
  : std::true_type
{
};

template<>
struct is_service_request<nanosaur_msgs::srv::EyeMessage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nanosaur_msgs::srv::EyeMessage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NANOSAUR_MSGS__SRV__EYE_MESSAGE__TRAITS_HPP_
