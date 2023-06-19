// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jetson_stats_msgs:srv/JetsonClocks.idl
// generated code does not contain a copyright notice

#ifndef JETSON_STATS_MSGS__SRV__JETSON_CLOCKS__STRUCT_H_
#define JETSON_STATS_MSGS__SRV__JETSON_CLOCKS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/JetsonClocks in the package jetson_stats_msgs.
typedef struct jetson_stats_msgs__srv__JetsonClocks_Request
{
  bool status;
} jetson_stats_msgs__srv__JetsonClocks_Request;

// Struct for a sequence of jetson_stats_msgs__srv__JetsonClocks_Request.
typedef struct jetson_stats_msgs__srv__JetsonClocks_Request__Sequence
{
  jetson_stats_msgs__srv__JetsonClocks_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jetson_stats_msgs__srv__JetsonClocks_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/JetsonClocks in the package jetson_stats_msgs.
typedef struct jetson_stats_msgs__srv__JetsonClocks_Response
{
  bool done;
} jetson_stats_msgs__srv__JetsonClocks_Response;

// Struct for a sequence of jetson_stats_msgs__srv__JetsonClocks_Response.
typedef struct jetson_stats_msgs__srv__JetsonClocks_Response__Sequence
{
  jetson_stats_msgs__srv__JetsonClocks_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jetson_stats_msgs__srv__JetsonClocks_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JETSON_STATS_MSGS__SRV__JETSON_CLOCKS__STRUCT_H_
