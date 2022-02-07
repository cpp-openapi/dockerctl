/*
 * VolumeConfig.h
 *
 * Volume configuration
 */

#pragma once


#include <optional>
#include "common_json.h"
#include <vector>

namespace openapi {


/*! \brief Volume configuration
 *
 *  \ingroup Models
 *
 */
struct VolumeConfig{
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> driver;
    // additional properties should be rendered as json. string for now.
    openapi::string_t driver_opts;
    // additional properties should be rendered as json. string for now.
    openapi::string_t labels;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}