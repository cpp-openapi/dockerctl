/*
 * OCIDescriptor.h
 *
 * A descriptor struct containing digest, media type, and size, as defined in the [OCI Content Descriptors Specification](https://github.com/opencontainers/image-spec/blob/v1.0.1/descriptor.md). 
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief A descriptor struct containing digest, media type, and size, as defined in the [OCI Content Descriptors Specification](https://github.com/opencontainers/image-spec/blob/v1.0.1/descriptor.md). 
 *
 *  \ingroup Models
 *
 */
struct OCIDescriptor{
    std::optional<openapi::string_t> media_type;
    std::optional<openapi::string_t> digest;
    std::optional<int> size{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}