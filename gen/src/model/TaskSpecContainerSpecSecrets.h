/*
 * TaskSpecContainerSpecSecrets.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
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