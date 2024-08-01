// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from calibration:action/TakeImage.idl
// generated code does not contain a copyright notice

#ifndef CALIBRATION__ACTION__DETAIL__TAKE_IMAGE__STRUCT_H_
#define CALIBRATION__ACTION__DETAIL__TAKE_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/TakeImage in the package calibration.
typedef struct calibration__action__TakeImage_Goal
{
  uint8_t structure_needs_at_least_one_member;
} calibration__action__TakeImage_Goal;

// Struct for a sequence of calibration__action__TakeImage_Goal.
typedef struct calibration__action__TakeImage_Goal__Sequence
{
  calibration__action__TakeImage_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration__action__TakeImage_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/TakeImage in the package calibration.
typedef struct calibration__action__TakeImage_Result
{
  bool success;
} calibration__action__TakeImage_Result;

// Struct for a sequence of calibration__action__TakeImage_Result.
typedef struct calibration__action__TakeImage_Result__Sequence
{
  calibration__action__TakeImage_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration__action__TakeImage_Result__Sequence;


// Constants defined in the message

// Struct defined in action/TakeImage in the package calibration.
typedef struct calibration__action__TakeImage_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} calibration__action__TakeImage_Feedback;

// Struct for a sequence of calibration__action__TakeImage_Feedback.
typedef struct calibration__action__TakeImage_Feedback__Sequence
{
  calibration__action__TakeImage_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration__action__TakeImage_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "calibration/action/detail/take_image__struct.h"

// Struct defined in action/TakeImage in the package calibration.
typedef struct calibration__action__TakeImage_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  calibration__action__TakeImage_Goal goal;
} calibration__action__TakeImage_SendGoal_Request;

// Struct for a sequence of calibration__action__TakeImage_SendGoal_Request.
typedef struct calibration__action__TakeImage_SendGoal_Request__Sequence
{
  calibration__action__TakeImage_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration__action__TakeImage_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/TakeImage in the package calibration.
typedef struct calibration__action__TakeImage_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} calibration__action__TakeImage_SendGoal_Response;

// Struct for a sequence of calibration__action__TakeImage_SendGoal_Response.
typedef struct calibration__action__TakeImage_SendGoal_Response__Sequence
{
  calibration__action__TakeImage_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration__action__TakeImage_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/TakeImage in the package calibration.
typedef struct calibration__action__TakeImage_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} calibration__action__TakeImage_GetResult_Request;

// Struct for a sequence of calibration__action__TakeImage_GetResult_Request.
typedef struct calibration__action__TakeImage_GetResult_Request__Sequence
{
  calibration__action__TakeImage_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration__action__TakeImage_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "calibration/action/detail/take_image__struct.h"

// Struct defined in action/TakeImage in the package calibration.
typedef struct calibration__action__TakeImage_GetResult_Response
{
  int8_t status;
  calibration__action__TakeImage_Result result;
} calibration__action__TakeImage_GetResult_Response;

// Struct for a sequence of calibration__action__TakeImage_GetResult_Response.
typedef struct calibration__action__TakeImage_GetResult_Response__Sequence
{
  calibration__action__TakeImage_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration__action__TakeImage_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "calibration/action/detail/take_image__struct.h"

// Struct defined in action/TakeImage in the package calibration.
typedef struct calibration__action__TakeImage_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  calibration__action__TakeImage_Feedback feedback;
} calibration__action__TakeImage_FeedbackMessage;

// Struct for a sequence of calibration__action__TakeImage_FeedbackMessage.
typedef struct calibration__action__TakeImage_FeedbackMessage__Sequence
{
  calibration__action__TakeImage_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration__action__TakeImage_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CALIBRATION__ACTION__DETAIL__TAKE_IMAGE__STRUCT_H_
