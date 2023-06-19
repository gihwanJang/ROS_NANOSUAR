// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from jetson_stats_msgs:srv/Fan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "jetson_stats_msgs/srv/fan__rosidl_typesupport_introspection_c.h"
#include "jetson_stats_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "jetson_stats_msgs/srv/fan__functions.h"
#include "jetson_stats_msgs/srv/fan__struct.h"


// Include directives for member types
// Member `mode`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Fan_Request__rosidl_typesupport_introspection_c__Fan_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jetson_stats_msgs__srv__Fan_Request__init(message_memory);
}

void Fan_Request__rosidl_typesupport_introspection_c__Fan_Request_fini_function(void * message_memory)
{
  jetson_stats_msgs__srv__Fan_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Fan_Request__rosidl_typesupport_introspection_c__Fan_Request_message_member_array[2] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetson_stats_msgs__srv__Fan_Request, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetson_stats_msgs__srv__Fan_Request, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Fan_Request__rosidl_typesupport_introspection_c__Fan_Request_message_members = {
  "jetson_stats_msgs__srv",  // message namespace
  "Fan_Request",  // message name
  2,  // number of fields
  sizeof(jetson_stats_msgs__srv__Fan_Request),
  Fan_Request__rosidl_typesupport_introspection_c__Fan_Request_message_member_array,  // message members
  Fan_Request__rosidl_typesupport_introspection_c__Fan_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Fan_Request__rosidl_typesupport_introspection_c__Fan_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Fan_Request__rosidl_typesupport_introspection_c__Fan_Request_message_type_support_handle = {
  0,
  &Fan_Request__rosidl_typesupport_introspection_c__Fan_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetson_stats_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetson_stats_msgs, srv, Fan_Request)() {
  if (!Fan_Request__rosidl_typesupport_introspection_c__Fan_Request_message_type_support_handle.typesupport_identifier) {
    Fan_Request__rosidl_typesupport_introspection_c__Fan_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Fan_Request__rosidl_typesupport_introspection_c__Fan_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "jetson_stats_msgs/srv/fan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "jetson_stats_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "jetson_stats_msgs/srv/fan__functions.h"
// already included above
// #include "jetson_stats_msgs/srv/fan__struct.h"


// Include directives for member types
// Member `set_fan_mode`
// already included above
// #include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Fan_Response__rosidl_typesupport_introspection_c__Fan_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jetson_stats_msgs__srv__Fan_Response__init(message_memory);
}

void Fan_Response__rosidl_typesupport_introspection_c__Fan_Response_fini_function(void * message_memory)
{
  jetson_stats_msgs__srv__Fan_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Fan_Response__rosidl_typesupport_introspection_c__Fan_Response_message_member_array[2] = {
  {
    "set_fan_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetson_stats_msgs__srv__Fan_Response, set_fan_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "set_fan_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetson_stats_msgs__srv__Fan_Response, set_fan_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Fan_Response__rosidl_typesupport_introspection_c__Fan_Response_message_members = {
  "jetson_stats_msgs__srv",  // message namespace
  "Fan_Response",  // message name
  2,  // number of fields
  sizeof(jetson_stats_msgs__srv__Fan_Response),
  Fan_Response__rosidl_typesupport_introspection_c__Fan_Response_message_member_array,  // message members
  Fan_Response__rosidl_typesupport_introspection_c__Fan_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Fan_Response__rosidl_typesupport_introspection_c__Fan_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Fan_Response__rosidl_typesupport_introspection_c__Fan_Response_message_type_support_handle = {
  0,
  &Fan_Response__rosidl_typesupport_introspection_c__Fan_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetson_stats_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetson_stats_msgs, srv, Fan_Response)() {
  if (!Fan_Response__rosidl_typesupport_introspection_c__Fan_Response_message_type_support_handle.typesupport_identifier) {
    Fan_Response__rosidl_typesupport_introspection_c__Fan_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Fan_Response__rosidl_typesupport_introspection_c__Fan_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "jetson_stats_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "jetson_stats_msgs/srv/fan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers jetson_stats_msgs__srv__fan__rosidl_typesupport_introspection_c__Fan_service_members = {
  "jetson_stats_msgs__srv",  // service namespace
  "Fan",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // jetson_stats_msgs__srv__fan__rosidl_typesupport_introspection_c__Fan_Request_message_type_support_handle,
  NULL  // response message
  // jetson_stats_msgs__srv__fan__rosidl_typesupport_introspection_c__Fan_Response_message_type_support_handle
};

static rosidl_service_type_support_t jetson_stats_msgs__srv__fan__rosidl_typesupport_introspection_c__Fan_service_type_support_handle = {
  0,
  &jetson_stats_msgs__srv__fan__rosidl_typesupport_introspection_c__Fan_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetson_stats_msgs, srv, Fan_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetson_stats_msgs, srv, Fan_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetson_stats_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetson_stats_msgs, srv, Fan)() {
  if (!jetson_stats_msgs__srv__fan__rosidl_typesupport_introspection_c__Fan_service_type_support_handle.typesupport_identifier) {
    jetson_stats_msgs__srv__fan__rosidl_typesupport_introspection_c__Fan_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)jetson_stats_msgs__srv__fan__rosidl_typesupport_introspection_c__Fan_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetson_stats_msgs, srv, Fan_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetson_stats_msgs, srv, Fan_Response)()->data;
  }

  return &jetson_stats_msgs__srv__fan__rosidl_typesupport_introspection_c__Fan_service_type_support_handle;
}