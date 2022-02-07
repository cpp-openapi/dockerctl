/*
 * ThrottleDevice.h
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
struct ThrottleDevice{
    std::optional<openapi::string_t> path;
    std::optional<int> rate{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}