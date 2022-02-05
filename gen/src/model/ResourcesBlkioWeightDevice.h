/*
 * ResourcesBlkioWeightDevice.h
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
struct ResourcesBlkioWeightDevice{
    std::optional<openapi::string_t> path;
    std::optional<int> weight{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}