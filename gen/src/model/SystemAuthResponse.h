/*
 * SystemAuthResponse.h
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
struct SystemAuthResponse{
    std::optional<openapi::string_t> status;
    std::optional<openapi::string_t> identity_token;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}