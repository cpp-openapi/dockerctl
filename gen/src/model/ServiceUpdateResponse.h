/*
 * ServiceUpdateResponse.h
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
struct ServiceUpdateResponse{
    // array
    std::vector<openapi::string_t> warnings;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}