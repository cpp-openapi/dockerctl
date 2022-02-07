/*
 * IndexInfo.h
 *
 * IndexInfo contains information about a registry.
 */

#pragma once


#include <optional>
#include "common_json.h"
#include <vector>

namespace openapi {


/*! \brief IndexInfo contains information about a registry.
 *
 *  \ingroup Models
 *
 */
struct IndexInfo{
    std::optional<openapi::string_t> name;
    // array
    std::vector<openapi::string_t> mirrors;
    std::optional<bool> secure{};
    std::optional<bool> official{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}