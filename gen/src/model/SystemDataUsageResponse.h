/*
 * SystemDataUsageResponse.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "BuildCache.h"
#include "ContainerSummary.h"
#include "ImageSummary.h"
#include "Volume.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct SystemDataUsageResponse{
    std::optional<int> layers_size{};
    // array
    std::vector<ImageSummary> images;
    // array
    std::vector<ContainerSummary> containers;
    // array
    std::vector<Volume> volumes;
    // array
    std::vector<BuildCache> build_cache;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}