// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jetson_stats_msgs:srv/Fan.idl
// generated code does not contain a copyright notice

#ifndef JETSON_STATS_MSGS__SRV__FAN__STRUCT_H_
#define JETSON_STATS_MSGS__SRV__FAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mode'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/Fan in the package jetson_stats_msgs.
typedef struct jetson_stats_msgs__srv__Fan_Request
{
  rosidl_generator_c__String mode;
  int64_t speed;
} jetson_stats_msgs__srv__Fan_Request;

// Struct for a sequence of jetson_stats_msgs__srv__Fan_Request.
typedef struct jetson_stats_msgs__srv__Fan_Request__Sequence
{
  jetson_stats_msgs__srv__Fan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jetson_stats_msgs__srv__Fan_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'set_fan_mode'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/Fan in the package jetson_stats_msgs.
typedef struct jetson_stats_msgs__srv__Fan_Response
{
  rosidl_generator_c__String set_fan_mode;
  int64_t set_fan_speed;
} jetson_stats_msgs__srv__Fan_Response;

// Struct for a sequence of jetson_stats_msgs__srv__Fan_Response.
typedef struct jetson_stats_msgs__srv__Fan_Response__Sequence
{
  jetson_stats_msgs__srv__Fan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jetson_stats_msgs__srv__Fan_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JETSON_STATS_MSGS__SRV__FAN__STRUCT_H_
