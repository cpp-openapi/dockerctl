/*
 * IdResponse.h
 *
 * Response to an API call that returns just an Id
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief Response to an API call that returns just an Id
 *
 *  \ingroup Models
 *
 */
struct IdResponse{
    std::optional<openapi::string_t> id;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}