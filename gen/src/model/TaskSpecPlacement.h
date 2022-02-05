/*
 * TaskSpecPlacement.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "Platform.h"
#include "TaskSpecPlacementPreferences.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct TaskSpecPlacement{
    // array
    std::vector<openapi::string_t> constraints;
    // array
    std::vector<TaskSpecPlacementPreferences> preferences;
    std::optional<int> max_replicas{};
    // array
    std::vector<Platform> platforms;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}