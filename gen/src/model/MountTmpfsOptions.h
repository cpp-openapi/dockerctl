/*
 * MountTmpfsOptions.h
 *
 * Optional configuration for the &#x60;tmpfs&#x60; type.
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief Optional configuration for the `tmpfs` type.
 *
 *  \ingroup Models
 *
 */
struct MountTmpfsOptions{
    std::optional<int> size_bytes{};
    std::optional<int> mode{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}