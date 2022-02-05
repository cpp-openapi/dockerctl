/*
 * UnlockKeyResponse.h
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
struct UnlockKeyResponse{
    std::optional<openapi::string_t> unlock_key;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}