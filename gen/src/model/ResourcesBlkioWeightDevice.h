/*
 * ResourcesBlkioWeightDevice.h
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
struct ResourcesBlkioWeightDevice{
    std::optional<openapi::string_t> path;
    std::optional<int> weight{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}