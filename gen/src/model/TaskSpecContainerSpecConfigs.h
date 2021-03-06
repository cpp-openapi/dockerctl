/*
 * TaskSpecContainerSpecConfigs.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "TaskSpecContainerSpecFile1.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct TaskSpecContainerSpecConfigs{
    std::optional<TaskSpecContainerSpecFile1> file;
    std::optional<openapi::string_t> runtime;
    std::optional<openapi::string_t> config_id;
    std::optional<openapi::string_t> config_name;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}