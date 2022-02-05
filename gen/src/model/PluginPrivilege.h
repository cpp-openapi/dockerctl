/*
 * PluginPrivilege.h
 *
 * Describes a permission the user has to accept upon installing the plugin. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include <vector>

namespace openapi {


/*! \brief Describes a permission the user has to accept upon installing the plugin. 
 *
 *  \ingroup Models
 *
 */
struct PluginPrivilege{
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> description;
    // array
    std::vector<openapi::string_t> value;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}