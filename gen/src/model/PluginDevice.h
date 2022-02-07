/*
 * PluginDevice.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct PluginDevice{
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> description;
    // array
    std::vector<openapi::string_t> settable;
    std::optional<openapi::string_t> path;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}