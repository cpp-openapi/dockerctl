/*
 * BuildPruneResponse.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct BuildPruneResponse{
    // array
    std::vector<openapi::string_t> caches_deleted;
    std::optional<int> space_reclaimed{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}