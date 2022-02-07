/*
 * PluginSettings.h
 *
 * Settings that can be modified by users.
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "PluginDevice.h"
#include "PluginMount.h"
#include <vector>

namespace openapi {


/*! \brief Settings that can be modified by users.
 *
 *  \ingroup Models
 *
 */
struct PluginSettings{
    // array
    std::vector<PluginMount> mounts;
    // array
    std::vector<openapi::string_t> env;
    // array
    std::vector<openapi::string_t> args;
    // array
    std::vector<PluginDevice> devices;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}