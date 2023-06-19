// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jetson_stats_msgs:srv/NVPModel.idl
// generated code does not contain a copyright notice

#ifndef JETSON_STATS_MSGS__SRV__NVP_MODEL__STRUCT_H_
#define JETSON_STATS_MSGS__SRV__NVP_MODEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/NVPModel in the package jetson_stats_msgs.
typedef struct jetson_stats_msgs__srv__NVPModel_Request
{
  int64_t nvpmodel;
} jetson_stats_msgs__srv__NVPModel_Request;

// Struct for a sequence of jetson_stats_msgs__srv__NVPModel_Request.
typedef struct jetson_stats_msgs__srv__NVPModel_Request__Sequence
{
  jetson_stats_msgs__srv__NVPModel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jetson_stats_msgs__srv__NVPModel_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'power_mode'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/NVPModel in the package jetson_stats_msgs.
typedef struct jetson_stats_msgs__srv__NVPModel_Response
{
  rosidl_generator_c__String power_mode;
} jetson_stats_msgs__srv__NVPModel_Response;

// Struct for a sequence of jetson_stats_msgs__srv__NVPModel_Response.
typedef struct jetson_stats_msgs__srv__NVPModel_Response__Sequence
{
  jetson_stats_msgs__srv__NVPModel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jetson_stats_msgs__srv__NVPModel_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JETSON_STATS_MSGS__SRV__NVP_MODEL__STRUCT_H_
