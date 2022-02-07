/*
 * TaskSpecPlacementPreferences.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "TaskSpecPlacementSpread.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct TaskSpecPlacementPreferences{
    std::optional<TaskSpecPlacementSpread> spread;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}