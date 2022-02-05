/*
 * TaskSpecContainerSpecFile.h
 *
 * File represents a specific target that is backed by a file. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief File represents a specific target that is backed by a file. 
 *
 *  \ingroup Models
 *
 */
struct TaskSpecContainerSpecFile{
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> uid;
    std::optional<openapi::string_t> gid;
    std::optional<int> mode{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}