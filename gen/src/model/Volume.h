/*
 * Volume.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "VolumeUsageData.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct Volume{
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> driver;
    std::optional<openapi::string_t> mountpoint;
    std::optional<openapi::string_t> created_at;
    // additional properties should be rendered as json. string for now.
    openapi::string_t status;
    // additional properties should be rendered as json. string for now.
    openapi::string_t labels;
    std::optional<openapi::string_t> scope;
    // additional properties should be rendered as json. string for now.
    openapi::string_t options;
    std::optional<VolumeUsageData> usage_data;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}