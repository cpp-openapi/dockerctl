/*
 * ImagePruneResponse.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
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