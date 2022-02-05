/*
 * VolumeListResponse.h
 *
 * Volume list response
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "Volume.h"
#include <vector>

namespace openapi {


/*! \brief Volume list response
 *
 *  \ingroup Models
 *
 */
struct VolumeListResponse{
    // array
    std::vector<Volume> volumes;
    // array
    std::vector<openapi::string_t> warnings;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}