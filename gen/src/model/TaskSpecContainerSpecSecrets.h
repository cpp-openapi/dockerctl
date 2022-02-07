/*
 * TaskSpecContainerSpecSecrets.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "TaskSpecContainerSpecFile.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct TaskSpecContainerSpecSecrets{
    std::optional<TaskSpecContainerSpecFile> file;
    std::optional<openapi::string_t> secret_id;
    std::optional<openapi::string_t> secret_name;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}