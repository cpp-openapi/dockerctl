/*
 * AuthConfig.h
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
struct AuthConfig{
    std::optional<openapi::string_t> username;
    std::optional<openapi::string_t> password;
    std::optional<openapi::string_t> email;
    std::optional<openapi::string_t> serveraddress;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}