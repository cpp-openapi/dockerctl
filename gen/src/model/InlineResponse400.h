/*
 * InlineResponse400.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "ErrorResponse.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct InlineResponse400{
    std::optional<ErrorResponse> error_response;
    std::optional<openapi::string_t> message;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}