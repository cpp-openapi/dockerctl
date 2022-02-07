/*
 * ContainerTopResponse.h
 *
 * OK response to ContainerTop operation
 */

#pragma once


#include <optional>
#include "common_json.h"
#include <vector>

namespace openapi {


/*! \brief OK response to ContainerTop operation
 *
 *  \ingroup Models
 *
 */
struct ContainerTopResponse{
    // array
    std::vector<openapi::string_t> titles;
    // array
    std::vector<openapi::string_t> processes;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}