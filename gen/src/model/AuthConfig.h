/*
 * AuthConfig.h
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
struct AuthConfig{
    std::optional<openapi::string_t> username;
    std::optional<openapi::string_t> password;
    std::optional<openapi::string_t> email;
    std::optional<openapi::string_t> serveraddress;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}