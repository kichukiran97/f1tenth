// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from calibration:action/DoCameraCalibration.idl
// generated code does not contain a copyright notice

#ifndef CALIBRATION__ACTION__DETAIL__DO_CAMERA_CALIBRATION__STRUCT_H_
#define CALIBRATION__ACTION__DETAIL__DO_CAMERA_CALIBRATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/DoCameraCalibration in the package calibration.
typedef struct calibration__action__DoCameraCalibration_Goal
{
  uint8_t structure_needs_at_least_one_member;
} calibration__action__DoCameraCalibration_Goal;

// Struct for a sequence of calibration__action__DoCameraCalibration_Goal.
typedef struct calibration__action__DoCameraCalibration_Goal__Sequence
{
  calibration__action__DoCameraCalibration_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration__action__DoCameraCalibration_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/DoCameraCalibration in the package calibration.
typedef struct calibration__action__DoCameraCalibration_Result
{
  bool success;
} calibration__action__DoCameraCalibration_Result;

// Struct for a sequence of calibration__action__DoCameraCalibration_Result.
typedef struct calibration__action__DoCameraCalibration_Result__Sequence
{
  calibration__action__DoCameraCalibration_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration__action__DoCameraCalibration_Result__Sequence;


// Constants defined in the message

// Struct defined in action/DoCameraCalibration in the package calibration.
typedef struct calibration__action__DoCameraCalibration_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} calibration__action__DoCameraCalibration_Feedback;

// Struct for a sequence of calibration__action__DoCameraCalibration_Feedback.
typedef struct calibration__action__DoCameraCalibration_Feedback__Sequence
{
  calibration__action__DoCameraCalibration_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration__action__DoCameraCalibration_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "calibration/action/detail/do_camera_calibration__struct.h"

// Struct defined in action/DoCameraCalibration in the package calibration.
typedef struct calibration__action__DoCameraCalibration_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  calibration__action__DoCameraCalibration_Goal goal;
} calibration__action__DoCameraCalibration_SendGoal_Request;

// Struct for a sequence of calibration__action__DoCameraCalibration_SendGoal_Request.
typedef struct calibration__action__DoCameraCalibration_SendGoal_Request__Sequence
{
  calibration__action__DoCameraCalibration_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration__action__DoCameraCalibration_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/DoCameraCalibration in the package calibration.
typedef struct calibration__action__DoCameraCalibration_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} calibration__action__DoCameraCalibration_SendGoal_Response;

// Struct for a sequence of calibration__action__DoCameraCalibration_SendGoal_Response.
typedef struct calibration__action__DoCameraCalibration_SendGoal_Response__Sequence
{
  calibration__action__DoCameraCalibration_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration__action__DoCameraCalibration_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/DoCameraCalibration in the package calibration.
typedef struct calibration__action__DoCameraCalibration_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} calibration__action__DoCameraCalibration_GetResult_Request;

// Struct for a sequence of calibration__action__DoCameraCalibration_GetResult_Request.
typedef struct calibration__action__DoCameraCalibration_GetResult_Request__Sequence
{
  calibration__action__DoCameraCalibration_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration__action__DoCameraCalibration_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.h"

// Struct defined in action/DoCameraCalibration in the package calibration.
typedef struct calibration__action__DoCameraCalibration_GetResult_Response
{
  int8_t status;
  calibration__action__DoCameraCalibration_Result result;
} calibration__action__DoCameraCalibration_GetResult_Response;

// Struct for a sequence of calibration__action__DoCameraCalibration_GetResult_Response.
typedef struct calibration__action__DoCameraCalibration_GetResult_Response__Sequence
{
  calibration__action__DoCameraCalibration_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration__action__DoCameraCalibration_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.h"

// Struct defined in action/DoCameraCalibration in the package calibration.
typedef struct calibration__action__DoCameraCalibration_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  calibration__action__DoCameraCalibration_Feedback feedback;
} calibration__action__DoCameraCalibration_FeedbackMessage;

// Struct for a sequence of calibration__action__DoCameraCalibration_FeedbackMessage.
typedef struct calibration__action__DoCameraCalibration_FeedbackMessage__Sequence
{
  calibration__action__DoCameraCalibration_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration__action__DoCameraCalibration_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CALIBRATION__ACTION__DETAIL__DO_CAMERA_CALIBRATION__STRUCT_H_
