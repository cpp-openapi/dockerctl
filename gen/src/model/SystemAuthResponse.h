/*
 * SystemAuthResponse.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

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