/*
 * ErrorResponse.h
 *
 * Represents an error.
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief Represents an error.
 *
 *  \ingroup Models
 *
 */
struct ErrorResponse{
    std::optional<openapi::string_t> message;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}