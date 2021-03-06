/*
 * OCIPlatform.h
 *
 * Describes the platform which the image in the manifest runs on, as defined in the [OCI Image Index Specification](https://github.com/opencontainers/image-spec/blob/v1.0.1/image-index.md). 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include <vector>

namespace openapi {


/*! \brief Describes the platform which the image in the manifest runs on, as defined in the [OCI Image Index Specification](https://github.com/opencontainers/image-spec/blob/v1.0.1/image-index.md). 
 *
 *  \ingroup Models
 *
 */
struct OCIPlatform{
    std::optional<openapi::string_t> architecture;
    std::optional<openapi::string_t> os;
    std::optional<openapi::string_t> os_version;
    // array
    std::vector<openapi::string_t> os_features;
    std::optional<openapi::string_t> variant;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}