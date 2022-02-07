/*
 * NetworkCreateResponse.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct NetworkCreateResponse{
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> warning;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}