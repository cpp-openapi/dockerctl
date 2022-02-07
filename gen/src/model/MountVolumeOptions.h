/*
 * MountVolumeOptions.h
 *
 * Optional configuration for the &#x60;volume&#x60; type.
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "MountVolumeOptionsDriverConfig.h"
#include <vector>

namespace openapi {


/*! \brief Optional configuration for the `volume` type.
 *
 *  \ingroup Models
 *
 */
struct MountVolumeOptions{
    std::optional<bool> no_copy{};
    // additional properties should be rendered as json. string for now.
    openapi::string_t labels;
    std::optional<MountVolumeOptionsDriverConfig> driver_config;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}