/*
 * TaskSpecContainerSpecDNSConfig.h
 *
 * Specification for DNS related configurations in resolver configuration file (&#x60;resolv.conf&#x60;). 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include <vector>

namespace openapi {


/*! \brief Specification for DNS related configurations in resolver configuration file (`resolv.conf`). 
 *
 *  \ingroup Models
 *
 */
struct TaskSpecContainerSpecDNSConfig{
    // array
    std::vector<openapi::string_t> nameservers;
    // array
    std::vector<openapi::string_t> search;
    // array
    std::vector<openapi::string_t> options;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}