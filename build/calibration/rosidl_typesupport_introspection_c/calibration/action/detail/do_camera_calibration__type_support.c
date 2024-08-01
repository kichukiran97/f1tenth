// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from calibration:action/DoCameraCalibration.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "calibration/action/detail/do_camera_calibration__rosidl_typesupport_introspection_c.h"
#include "calibration/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "calibration/action/detail/do_camera_calibration__functions.h"
#include "calibration/action/detail/do_camera_calibration__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DoCameraCalibration_Goal__rosidl_typesupport_introspection_c__DoCameraCalibration_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  calibration__action__DoCameraCalibration_Goal__init(message_memory);
}

void DoCameraCalibration_Goal__rosidl_typesupport_introspection_c__DoCameraCalibration_Goal_fini_function(void * message_memory)
{
  calibration__action__DoCameraCalibration_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DoCameraCalibration_Goal__rosidl_typesupport_introspection_c__DoCameraCalibration_Goal_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calibration__action__DoCameraCalibration_Goal, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DoCameraCalibration_Goal__rosidl_typesupport_introspection_c__DoCameraCalibration_Goal_message_members = {
  "calibration__action",  // message namespace
  "DoCameraCalibration_Goal",  // message name
  1,  // number of fields
  sizeof(calibration__action__DoCameraCalibration_Goal),
  DoCameraCalibration_Goal__rosidl_typesupport_introspection_c__DoCameraCalibration_Goal_message_member_array,  // message members
  DoCameraCalibration_Goal__rosidl_typesupport_introspection_c__DoCameraCalibration_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  DoCameraCalibration_Goal__rosidl_typesupport_introspection_c__DoCameraCalibration_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DoCameraCalibration_Goal__rosidl_typesupport_introspection_c__DoCameraCalibration_Goal_message_type_support_handle = {
  0,
  &DoCameraCalibration_Goal__rosidl_typesupport_introspection_c__DoCameraCalibration_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_Goal)() {
  if (!DoCameraCalibration_Goal__rosidl_typesupport_introspection_c__DoCameraCalibration_Goal_message_type_support_handle.typesupport_identifier) {
    DoCameraCalibration_Goal__rosidl_typesupport_introspection_c__DoCameraCalibration_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DoCameraCalibration_Goal__rosidl_typesupport_introspection_c__DoCameraCalibration_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "calibration/action/detail/do_camera_calibration__rosidl_typesupport_introspection_c.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__functions.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DoCameraCalibration_Result__rosidl_typesupport_introspection_c__DoCameraCalibration_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  calibration__action__DoCameraCalibration_Result__init(message_memory);
}

void DoCameraCalibration_Result__rosidl_typesupport_introspection_c__DoCameraCalibration_Result_fini_function(void * message_memory)
{
  calibration__action__DoCameraCalibration_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DoCameraCalibration_Result__rosidl_typesupport_introspection_c__DoCameraCalibration_Result_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calibration__action__DoCameraCalibration_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DoCameraCalibration_Result__rosidl_typesupport_introspection_c__DoCameraCalibration_Result_message_members = {
  "calibration__action",  // message namespace
  "DoCameraCalibration_Result",  // message name
  1,  // number of fields
  sizeof(calibration__action__DoCameraCalibration_Result),
  DoCameraCalibration_Result__rosidl_typesupport_introspection_c__DoCameraCalibration_Result_message_member_array,  // message members
  DoCameraCalibration_Result__rosidl_typesupport_introspection_c__DoCameraCalibration_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  DoCameraCalibration_Result__rosidl_typesupport_introspection_c__DoCameraCalibration_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DoCameraCalibration_Result__rosidl_typesupport_introspection_c__DoCameraCalibration_Result_message_type_support_handle = {
  0,
  &DoCameraCalibration_Result__rosidl_typesupport_introspection_c__DoCameraCalibration_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_Result)() {
  if (!DoCameraCalibration_Result__rosidl_typesupport_introspection_c__DoCameraCalibration_Result_message_type_support_handle.typesupport_identifier) {
    DoCameraCalibration_Result__rosidl_typesupport_introspection_c__DoCameraCalibration_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DoCameraCalibration_Result__rosidl_typesupport_introspection_c__DoCameraCalibration_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "calibration/action/detail/do_camera_calibration__rosidl_typesupport_introspection_c.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__functions.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DoCameraCalibration_Feedback__rosidl_typesupport_introspection_c__DoCameraCalibration_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  calibration__action__DoCameraCalibration_Feedback__init(message_memory);
}

void DoCameraCalibration_Feedback__rosidl_typesupport_introspection_c__DoCameraCalibration_Feedback_fini_function(void * message_memory)
{
  calibration__action__DoCameraCalibration_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DoCameraCalibration_Feedback__rosidl_typesupport_introspection_c__DoCameraCalibration_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calibration__action__DoCameraCalibration_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DoCameraCalibration_Feedback__rosidl_typesupport_introspection_c__DoCameraCalibration_Feedback_message_members = {
  "calibration__action",  // message namespace
  "DoCameraCalibration_Feedback",  // message name
  1,  // number of fields
  sizeof(calibration__action__DoCameraCalibration_Feedback),
  DoCameraCalibration_Feedback__rosidl_typesupport_introspection_c__DoCameraCalibration_Feedback_message_member_array,  // message members
  DoCameraCalibration_Feedback__rosidl_typesupport_introspection_c__DoCameraCalibration_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  DoCameraCalibration_Feedback__rosidl_typesupport_introspection_c__DoCameraCalibration_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DoCameraCalibration_Feedback__rosidl_typesupport_introspection_c__DoCameraCalibration_Feedback_message_type_support_handle = {
  0,
  &DoCameraCalibration_Feedback__rosidl_typesupport_introspection_c__DoCameraCalibration_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_Feedback)() {
  if (!DoCameraCalibration_Feedback__rosidl_typesupport_introspection_c__DoCameraCalibration_Feedback_message_type_support_handle.typesupport_identifier) {
    DoCameraCalibration_Feedback__rosidl_typesupport_introspection_c__DoCameraCalibration_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DoCameraCalibration_Feedback__rosidl_typesupport_introspection_c__DoCameraCalibration_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "calibration/action/detail/do_camera_calibration__rosidl_typesupport_introspection_c.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__functions.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "calibration/action/do_camera_calibration.h"
// Member `goal`
// already included above
// #include "calibration/action/detail/do_camera_calibration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DoCameraCalibration_SendGoal_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  calibration__action__DoCameraCalibration_SendGoal_Request__init(message_memory);
}

void DoCameraCalibration_SendGoal_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Request_fini_function(void * message_memory)
{
  calibration__action__DoCameraCalibration_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DoCameraCalibration_SendGoal_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calibration__action__DoCameraCalibration_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calibration__action__DoCameraCalibration_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DoCameraCalibration_SendGoal_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Request_message_members = {
  "calibration__action",  // message namespace
  "DoCameraCalibration_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(calibration__action__DoCameraCalibration_SendGoal_Request),
  DoCameraCalibration_SendGoal_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Request_message_member_array,  // message members
  DoCameraCalibration_SendGoal_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DoCameraCalibration_SendGoal_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DoCameraCalibration_SendGoal_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Request_message_type_support_handle = {
  0,
  &DoCameraCalibration_SendGoal_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_SendGoal_Request)() {
  DoCameraCalibration_SendGoal_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  DoCameraCalibration_SendGoal_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_Goal)();
  if (!DoCameraCalibration_SendGoal_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    DoCameraCalibration_SendGoal_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DoCameraCalibration_SendGoal_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "calibration/action/detail/do_camera_calibration__rosidl_typesupport_introspection_c.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__functions.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DoCameraCalibration_SendGoal_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  calibration__action__DoCameraCalibration_SendGoal_Response__init(message_memory);
}

void DoCameraCalibration_SendGoal_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Response_fini_function(void * message_memory)
{
  calibration__action__DoCameraCalibration_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DoCameraCalibration_SendGoal_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calibration__action__DoCameraCalibration_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calibration__action__DoCameraCalibration_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DoCameraCalibration_SendGoal_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Response_message_members = {
  "calibration__action",  // message namespace
  "DoCameraCalibration_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(calibration__action__DoCameraCalibration_SendGoal_Response),
  DoCameraCalibration_SendGoal_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Response_message_member_array,  // message members
  DoCameraCalibration_SendGoal_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DoCameraCalibration_SendGoal_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DoCameraCalibration_SendGoal_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Response_message_type_support_handle = {
  0,
  &DoCameraCalibration_SendGoal_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_SendGoal_Response)() {
  DoCameraCalibration_SendGoal_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!DoCameraCalibration_SendGoal_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    DoCameraCalibration_SendGoal_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DoCameraCalibration_SendGoal_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_service_members = {
  "calibration__action",  // service namespace
  "DoCameraCalibration_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_service_type_support_handle = {
  0,
  &calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calibration
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_SendGoal)() {
  if (!calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_service_type_support_handle.typesupport_identifier) {
    calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_SendGoal_Response)()->data;
  }

  return &calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "calibration/action/detail/do_camera_calibration__rosidl_typesupport_introspection_c.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__functions.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DoCameraCalibration_GetResult_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  calibration__action__DoCameraCalibration_GetResult_Request__init(message_memory);
}

void DoCameraCalibration_GetResult_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Request_fini_function(void * message_memory)
{
  calibration__action__DoCameraCalibration_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DoCameraCalibration_GetResult_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calibration__action__DoCameraCalibration_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DoCameraCalibration_GetResult_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Request_message_members = {
  "calibration__action",  // message namespace
  "DoCameraCalibration_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(calibration__action__DoCameraCalibration_GetResult_Request),
  DoCameraCalibration_GetResult_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Request_message_member_array,  // message members
  DoCameraCalibration_GetResult_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DoCameraCalibration_GetResult_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DoCameraCalibration_GetResult_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Request_message_type_support_handle = {
  0,
  &DoCameraCalibration_GetResult_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_GetResult_Request)() {
  DoCameraCalibration_GetResult_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!DoCameraCalibration_GetResult_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    DoCameraCalibration_GetResult_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DoCameraCalibration_GetResult_Request__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "calibration/action/detail/do_camera_calibration__rosidl_typesupport_introspection_c.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__functions.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "calibration/action/do_camera_calibration.h"
// Member `result`
// already included above
// #include "calibration/action/detail/do_camera_calibration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DoCameraCalibration_GetResult_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  calibration__action__DoCameraCalibration_GetResult_Response__init(message_memory);
}

void DoCameraCalibration_GetResult_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Response_fini_function(void * message_memory)
{
  calibration__action__DoCameraCalibration_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DoCameraCalibration_GetResult_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calibration__action__DoCameraCalibration_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calibration__action__DoCameraCalibration_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DoCameraCalibration_GetResult_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Response_message_members = {
  "calibration__action",  // message namespace
  "DoCameraCalibration_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(calibration__action__DoCameraCalibration_GetResult_Response),
  DoCameraCalibration_GetResult_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Response_message_member_array,  // message members
  DoCameraCalibration_GetResult_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DoCameraCalibration_GetResult_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DoCameraCalibration_GetResult_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Response_message_type_support_handle = {
  0,
  &DoCameraCalibration_GetResult_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_GetResult_Response)() {
  DoCameraCalibration_GetResult_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_Result)();
  if (!DoCameraCalibration_GetResult_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    DoCameraCalibration_GetResult_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DoCameraCalibration_GetResult_Response__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_service_members = {
  "calibration__action",  // service namespace
  "DoCameraCalibration_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_service_type_support_handle = {
  0,
  &calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calibration
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_GetResult)() {
  if (!calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_service_type_support_handle.typesupport_identifier) {
    calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_GetResult_Response)()->data;
  }

  return &calibration__action__detail__do_camera_calibration__rosidl_typesupport_introspection_c__DoCameraCalibration_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "calibration/action/detail/do_camera_calibration__rosidl_typesupport_introspection_c.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__functions.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "calibration/action/do_camera_calibration.h"
// Member `feedback`
// already included above
// #include "calibration/action/detail/do_camera_calibration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DoCameraCalibration_FeedbackMessage__rosidl_typesupport_introspection_c__DoCameraCalibration_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  calibration__action__DoCameraCalibration_FeedbackMessage__init(message_memory);
}

void DoCameraCalibration_FeedbackMessage__rosidl_typesupport_introspection_c__DoCameraCalibration_FeedbackMessage_fini_function(void * message_memory)
{
  calibration__action__DoCameraCalibration_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DoCameraCalibration_FeedbackMessage__rosidl_typesupport_introspection_c__DoCameraCalibration_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calibration__action__DoCameraCalibration_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calibration__action__DoCameraCalibration_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DoCameraCalibration_FeedbackMessage__rosidl_typesupport_introspection_c__DoCameraCalibration_FeedbackMessage_message_members = {
  "calibration__action",  // message namespace
  "DoCameraCalibration_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(calibration__action__DoCameraCalibration_FeedbackMessage),
  DoCameraCalibration_FeedbackMessage__rosidl_typesupport_introspection_c__DoCameraCalibration_FeedbackMessage_message_member_array,  // message members
  DoCameraCalibration_FeedbackMessage__rosidl_typesupport_introspection_c__DoCameraCalibration_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  DoCameraCalibration_FeedbackMessage__rosidl_typesupport_introspection_c__DoCameraCalibration_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DoCameraCalibration_FeedbackMessage__rosidl_typesupport_introspection_c__DoCameraCalibration_FeedbackMessage_message_type_support_handle = {
  0,
  &DoCameraCalibration_FeedbackMessage__rosidl_typesupport_introspection_c__DoCameraCalibration_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_FeedbackMessage)() {
  DoCameraCalibration_FeedbackMessage__rosidl_typesupport_introspection_c__DoCameraCalibration_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  DoCameraCalibration_FeedbackMessage__rosidl_typesupport_introspection_c__DoCameraCalibration_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, DoCameraCalibration_Feedback)();
  if (!DoCameraCalibration_FeedbackMessage__rosidl_typesupport_introspection_c__DoCameraCalibration_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    DoCameraCalibration_FeedbackMessage__rosidl_typesupport_introspection_c__DoCameraCalibration_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DoCameraCalibration_FeedbackMessage__rosidl_typesupport_introspection_c__DoCameraCalibration_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
