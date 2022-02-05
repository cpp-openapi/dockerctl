/*
 * MountPoint.h
 *
 * A mount point inside a container
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief A mount point inside a container
 *
 *  \ingroup Models
 *
 */
struct MountPoint{
    std::optional<openapi::string_t> type;
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> source;
    std::optional<openapi::string_t> destination;
    std::optional<openapi::string_t> driver;
    std::optional<openapi::string_t> mode;
    std::optional<bool> rw{};
    std::optional<openapi::string_t> propagation;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}