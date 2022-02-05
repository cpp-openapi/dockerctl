/*
 * TaskStatusContainerStatus.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct TaskStatusContainerStatus{
    std::optional<openapi::string_t> container_id;
    std::optional<int> pid{};
    std::optional<int> exit_code{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}