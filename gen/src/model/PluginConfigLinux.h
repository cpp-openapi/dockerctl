/*
 * PluginConfigLinux.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "PluginDevice.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct PluginConfigLinux{
    // array
    std::vector<openapi::string_t> capabilities;
    std::optional<bool> allow_all_devices{};
    // array
    std::vector<PluginDevice> devices;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}