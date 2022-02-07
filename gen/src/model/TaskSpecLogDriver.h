/*
 * TaskSpecLogDriver.h
 *
 * Specifies the log driver to use for tasks created from this spec. If not present, the default one for the swarm will be used, finally falling back to the engine default if not specified. 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include <vector>

namespace openapi {


/*! \brief Specifies the log driver to use for tasks created from this spec. If not present, the default one for the swarm will be used, finally falling back to the engine default if not specified. 
 *
 *  \ingroup Models
 *
 */
struct TaskSpecLogDriver{
    std::optional<openapi::string_t> name;
    // additional properties should be rendered as json. string for now.
    openapi::string_t options;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}