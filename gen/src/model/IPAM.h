/*
 * IPAM.h
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
struct IPAM{
    std::optional<openapi::string_t> driver;
    // array
    std::vector<openapi::string_t> config;
    // additional properties should be rendered as json. string for now.
    openapi::string_t options;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}