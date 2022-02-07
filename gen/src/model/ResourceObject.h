/*
 * ResourceObject.h
 *
 * An object describing the resources which can be advertised by a node and requested by a task. 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include <vector>

namespace openapi {


/*! \brief An object describing the resources which can be advertised by a node and requested by a task. 
 *
 *  \ingroup Models
 *
 */
struct ResourceObject{
    std::optional<int> nano_cpus{};
    std::optional<int> memory_bytes{};
    // array
    std::vector<openapi::string_t> generic_resources;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}