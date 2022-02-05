/*
 * ContainerUpdateResponse.h
 *
 * OK response to ContainerUpdate operation
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include <vector>

namespace openapi {


/*! \brief OK response to ContainerUpdate operation
 *
 *  \ingroup Models
 *
 */
struct ContainerUpdateResponse{
    // array
    std::vector<openapi::string_t> warnings;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}