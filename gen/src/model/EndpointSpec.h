/*
 * EndpointSpec.h
 *
 * Properties that can be configured to access and load balance a service.
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "EndpointPortConfig.h"
#include <vector>

namespace openapi {


/*! \brief Properties that can be configured to access and load balance a service.
 *
 *  \ingroup Models
 *
 */
struct EndpointSpec{
    std::optional<openapi::string_t> mode;
    // array
    std::vector<EndpointPortConfig> ports;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}