/*
 * PluginConfigInterface.h
 *
 * The interface between Docker and the plugin
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "PluginInterfaceType.h"
#include <vector>

namespace openapi {


/*! \brief The interface between Docker and the plugin
 *
 *  \ingroup Models
 *
 */
struct PluginConfigInterface{
    // array
    std::vector<PluginInterfaceType> types;
    std::optional<openapi::string_t> socket;
    std::optional<openapi::string_t> protocol_scheme;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}