// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jetson_stats_msgs:srv/JetsonClocks.idl
// generated code does not contain a copyright notice

#ifndef JETSON_STATS_MSGS__SRV__JETSON_CLOCKS__TRAITS_HPP_
#define JETSON_STATS_MSGS__SRV__JETSON_CLOCKS__TRAITS_HPP_

#include "jetson_stats_msgs/srv/jetson_clocks__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetson_stats_msgs::srv::JetsonClocks_Request>()
{
  return "jetson_stats_msgs::srv::JetsonClocks_Request";
}

template<>
struct has_fixed_size<jetson_stats_msgs::srv::JetsonClocks_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<jetson_stats_msgs::srv::JetsonClocks_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<jetson_stats_msgs::srv::JetsonClocks_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetson_stats_msgs::srv::JetsonClocks_Response>()
{
  return "jetson_stats_msgs::srv::JetsonClocks_Response";
}

template<>
struct has_fixed_size<jetson_stats_msgs::srv::JetsonClocks_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<jetson_stats_msgs::srv::JetsonClocks_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<jetson_stats_msgs::srv::JetsonClocks_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetson_stats_msgs::srv::JetsonClocks>()
{
  return "jetson_stats_msgs::srv::JetsonClocks";
}

template<>
struct has_fixed_size<jetson_stats_msgs::srv::JetsonClocks>
  : std::integral_constant<
    bool,
    has_fixed_size<jetson_stats_msgs::srv::JetsonClocks_Request>::value &&
    has_fixed_size<jetson_stats_msgs::srv::JetsonClocks_Response>::value
  >
{
};

template<>
struct has_bounded_size<jetson_stats_msgs::srv::JetsonClocks>
  : std::integral_constant<
    bool,
    has_bounded_size<jetson_stats_msgs::srv::JetsonClocks_Request>::value &&
    has_bounded_size<jetson_stats_msgs::srv::JetsonClocks_Response>::value
  >
{
};

template<>
struct is_service<jetson_stats_msgs::srv::JetsonClocks>
  : std::true_type
{
};

template<>
struct is_service_request<jetson_stats_msgs::srv::JetsonClocks_Request>
  : std::true_type
{
};

template<>
struct is_service_response<jetson_stats_msgs::srv::JetsonClocks_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // JETSON_STATS_MSGS__SRV__JETSON_CLOCKS__TRAITS_HPP_
