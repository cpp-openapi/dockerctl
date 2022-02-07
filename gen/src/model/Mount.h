/*
 * Mount.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "MountBindOptions.h"
#include "MountTmpfsOptions.h"
#include "MountVolumeOptions.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct Mount{
    std::optional<openapi::string_t> target;
    std::optional<openapi::string_t> source;
    std::optional<openapi::string_t> type;
    std::optional<bool> read_only{};
    std::optional<openapi::string_t> consistency;
    std::optional<MountBindOptions> bind_options;
    std::optional<MountVolumeOptions> volume_options;
    std::optional<MountTmpfsOptions> tmpfs_options;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}