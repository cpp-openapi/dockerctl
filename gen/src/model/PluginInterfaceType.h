/*
 * PluginInterfaceType.h
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
struct PluginInterfaceType{
    std::optional<openapi::string_t> prefix;
    std::optional<openapi::string_t> capability;
    std::optional<openapi::string_t> version;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}