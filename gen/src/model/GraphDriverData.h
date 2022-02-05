/*
 * GraphDriverData.h
 *
 * Information about a container&#39;s graph driver.
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include <vector>

namespace openapi {


/*! \brief Information about a container's graph driver.
 *
 *  \ingroup Models
 *
 */
struct GraphDriverData{
    std::optional<openapi::string_t> name;
    // additional properties should be rendered as json. string for now.
    openapi::string_t data;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}