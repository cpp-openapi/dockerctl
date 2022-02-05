/*
 * ServiceCreateResponse.h
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
struct ServiceCreateResponse{
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> warning;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}