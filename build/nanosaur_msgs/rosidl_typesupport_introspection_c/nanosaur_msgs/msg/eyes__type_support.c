// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nanosaur_msgs:msg/Eyes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nanosaur_msgs/msg/eyes__rosidl_typesupport_introspection_c.h"
#include "nanosaur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nanosaur_msgs/msg/eyes__functions.h"
#include "nanosaur_msgs/msg/eyes__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Eyes__rosidl_typesupport_introspection_c__Eyes_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nanosaur_msgs__msg__Eyes__init(message_memory);
}

void Eyes__rosidl_typesupport_introspection_c__Eyes_fini_function(void * message_memory)
{
  nanosaur_msgs__msg__Eyes__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Eyes__rosidl_typesupport_introspection_c__Eyes_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nanosaur_msgs__msg__Eyes, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nanosaur_msgs__msg__Eyes, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nanosaur_msgs__msg__Eyes, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Eyes__rosidl_typesupport_introspection_c__Eyes_message_members = {
  "nanosaur_msgs__msg",  // message namespace
  "Eyes",  // message name
  3,  // number of fields
  sizeof(nanosaur_msgs__msg__Eyes),
  Eyes__rosidl_typesupport_introspection_c__Eyes_message_member_array,  // message members
  Eyes__rosidl_typesupport_introspection_c__Eyes_init_function,  // function to initialize message memory (memory has to be allocated)
  Eyes__rosidl_typesupport_introspection_c__Eyes_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Eyes__rosidl_typesupport_introspection_c__Eyes_message_type_support_handle = {
  0,
  &Eyes__rosidl_typesupport_introspection_c__Eyes_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nanosaur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nanosaur_msgs, msg, Eyes)() {
  Eyes__rosidl_typesupport_introspection_c__Eyes_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  Eyes__rosidl_typesupport_introspection_c__Eyes_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!Eyes__rosidl_typesupport_introspection_c__Eyes_message_type_support_handle.typesupport_identifier) {
    Eyes__rosidl_typesupport_introspection_c__Eyes_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Eyes__rosidl_typesupport_introspection_c__Eyes_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
