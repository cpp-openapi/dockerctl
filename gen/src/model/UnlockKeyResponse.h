/*
 * UnlockKeyResponse.h
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
struct UnlockKeyResponse{
    std::optional<openapi::string_t> unlock_key;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}