/*
 * VolumePruneResponse.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct VolumePruneResponse{
    // array
    std::vector<openapi::string_t> volumes_deleted;
    std::optional<int> space_reclaimed{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}