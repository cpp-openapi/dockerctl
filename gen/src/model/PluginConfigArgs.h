/*
 * PluginConfigArgs.h
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
struct PluginConfigArgs{
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> description;
    // array
    std::vector<openapi::string_t> settable;
    // array
    std::vector<openapi::string_t> value;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}