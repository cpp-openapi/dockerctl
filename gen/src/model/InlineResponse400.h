/*
 * InlineResponse400.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
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