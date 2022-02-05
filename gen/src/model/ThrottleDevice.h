/*
 * ThrottleDevice.h
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
struct ThrottleDevice{
    std::optional<openapi::string_t> path;
    std::optional<int> rate{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}