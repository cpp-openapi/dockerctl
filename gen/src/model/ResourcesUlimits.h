/*
 * ResourcesUlimits.h
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
struct ResourcesUlimits{
    std::optional<openapi::string_t> name;
    std::optional<int> soft{};
    std::optional<int> hard{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}