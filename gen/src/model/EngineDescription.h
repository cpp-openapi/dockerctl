/*
 * EngineDescription.h
 *
 * EngineDescription provides information about an engine.
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "EngineDescriptionPlugins.h"
#include <vector>

namespace openapi {


/*! \brief EngineDescription provides information about an engine.
 *
 *  \ingroup Models
 *
 */
struct EngineDescription{
    std::optional<openapi::string_t> engine_version;
    // additional properties should be rendered as json. string for now.
    openapi::string_t labels;
    // array
    std::vector<EngineDescriptionPlugins> plugins;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}