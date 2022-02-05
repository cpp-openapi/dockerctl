/*
 * Plugin.h
 *
 * A plugin for the Engine API
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "PluginConfig.h"
#include "PluginSettings.h"

namespace openapi {


/*! \brief A plugin for the Engine API
 *
 *  \ingroup Models
 *
 */
struct Plugin{
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> name;
    std::optional<bool> enabled{};
    std::optional<PluginSettings> settings;
    std::optional<openapi::string_t> plugin_reference;
    std::optional<PluginConfig> config;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}