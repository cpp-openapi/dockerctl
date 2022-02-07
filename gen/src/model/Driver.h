/*
 * Driver.h
 *
 * Driver represents a driver (network, logging, secrets).
 */

#pragma once


#include <optional>
#include "common_json.h"
#include <vector>

namespace openapi {


/*! \brief Driver represents a driver (network, logging, secrets).
 *
 *  \ingroup Models
 *
 */
struct Driver{
    std::optional<openapi::string_t> name;
    // additional properties should be rendered as json. string for now.
    openapi::string_t options;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}