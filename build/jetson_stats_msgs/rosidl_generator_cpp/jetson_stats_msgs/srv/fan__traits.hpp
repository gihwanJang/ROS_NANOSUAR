// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jetson_stats_msgs:srv/Fan.idl
// generated code does not contain a copyright notice

#ifndef JETSON_STATS_MSGS__SRV__FAN__TRAITS_HPP_
#define JETSON_STATS_MSGS__SRV__FAN__TRAITS_HPP_

#include "jetson_stats_msgs/srv/fan__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetson_stats_msgs::srv::Fan_Request>()
{
  return "jetson_stats_msgs::srv::Fan_Request";
}

template<>
struct has_fixed_size<jetson_stats_msgs::srv::Fan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<jetson_stats_msgs::srv::Fan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<jetson_stats_msgs::srv::Fan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetson_stats_msgs::srv::Fan_Response>()
{
  return "jetson_stats_msgs::srv::Fan_Response";
}

template<>
struct has_fixed_size<jetson_stats_msgs::srv::Fan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<jetson_stats_msgs::srv::Fan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<jetson_stats_msgs::srv::Fan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetson_stats_msgs::srv::Fan>()
{
  return "jetson_stats_msgs::srv::Fan";
}

template<>
struct has_fixed_size<jetson_stats_msgs::srv::Fan>
  : std::integral_constant<
    bool,
    has_fixed_size<jetson_stats_msgs::srv::Fan_Request>::value &&
    has_fixed_size<jetson_stats_msgs::srv::Fan_Response>::value
  >
{
};

template<>
struct has_bounded_size<jetson_stats_msgs::srv::Fan>
  : std::integral_constant<
    bool,
    has_bounded_size<jetson_stats_msgs::srv::Fan_Request>::value &&
    has_bounded_size<jetson_stats_msgs::srv::Fan_Response>::value
  >
{
};

template<>
struct is_service<jetson_stats_msgs::srv::Fan>
  : std::true_type
{
};

template<>
struct is_service_request<jetson_stats_msgs::srv::Fan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<jetson_stats_msgs::srv::Fan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // JETSON_STATS_MSGS__SRV__FAN__TRAITS_HPP_
