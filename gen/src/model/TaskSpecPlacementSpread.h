/*
 * TaskSpecPlacementSpread.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct TaskSpecPlacementSpread{
    std::optional<openapi::string_t> spread_descriptor;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}