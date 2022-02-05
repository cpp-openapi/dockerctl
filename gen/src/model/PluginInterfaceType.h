/*
 * PluginInterfaceType.h
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
struct PluginInterfaceType{
    std::optional<openapi::string_t> prefix;
    std::optional<openapi::string_t> capability;
    std::optional<openapi::string_t> version;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}