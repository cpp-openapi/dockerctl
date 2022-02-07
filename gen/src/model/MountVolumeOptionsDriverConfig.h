/*
 * MountVolumeOptionsDriverConfig.h
 *
 * Map of driver specific options
 */

#pragma once


#include <optional>
#include "common_json.h"
#include <vector>

namespace openapi {


/*! \brief Map of driver specific options
 *
 *  \ingroup Models
 *
 */
struct MountVolumeOptionsDriverConfig{
    std::optional<openapi::string_t> name;
    // additional properties should be rendered as json. string for now.
    openapi::string_t options;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}