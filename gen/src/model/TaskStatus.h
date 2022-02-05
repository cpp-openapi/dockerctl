/*
 * TaskStatus.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "TaskState.h"
#include "TaskStatusContainerStatus.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct TaskStatus{
    std::optional<openapi::string_t> timestamp;
    std::optional<TaskState> state;
    std::optional<openapi::string_t> message;
    std::optional<openapi::string_t> err;
    std::optional<TaskStatusContainerStatus> container_status;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}