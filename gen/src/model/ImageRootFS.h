/*
 * ImageRootFS.h
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
struct ImageRootFS{
    std::optional<openapi::string_t> type;
    // array
    std::vector<openapi::string_t> layers;
    std::optional<openapi::string_t> base_layer;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}