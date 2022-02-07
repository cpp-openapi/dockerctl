/*
 * ImagePruneResponse.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "ImageDeleteResponseItem.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct ImagePruneResponse{
    // array
    std::vector<ImageDeleteResponseItem> images_deleted;
    std::optional<int> space_reclaimed{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}