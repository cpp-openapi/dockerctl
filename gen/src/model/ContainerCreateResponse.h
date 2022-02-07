/*
 * ContainerCreateResponse.h
 *
 * OK response to ContainerCreate operation
 */

#pragma once


#include <optional>
#include "common_json.h"
#include <vector>

namespace openapi {


/*! \brief OK response to ContainerCreate operation
 *
 *  \ingroup Models
 *
 */
struct ContainerCreateResponse{
    std::optional<openapi::string_t> id;
    // array
    std::vector<openapi::string_t> warnings;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}