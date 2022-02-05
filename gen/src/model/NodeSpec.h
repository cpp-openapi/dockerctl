/*
 * NodeSpec.h
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
struct NodeSpec{
    std::optional<openapi::string_t> name;
    // additional properties should be rendered as json. string for now.
    openapi::string_t labels;
    std::optional<openapi::string_t> role;
    std::optional<openapi::string_t> availability;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}