/*
 * TaskSpecRestartPolicy.h
 *
 * Specification for the restart policy which applies to containers created as part of this service. 
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief Specification for the restart policy which applies to containers created as part of this service. 
 *
 *  \ingroup Models
 *
 */
struct TaskSpecRestartPolicy{
    std::optional<openapi::string_t> condition;
    std::optional<int> delay{};
    std::optional<int> max_attempts{};
    std::optional<int> window{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}