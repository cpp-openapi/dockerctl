/*
 * TaskSpecPlacementSpread.h
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
struct TaskSpecPlacementSpread{
    std::optional<openapi::string_t> spread_descriptor;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}