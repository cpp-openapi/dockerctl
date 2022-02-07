/*
 * NetworkingConfig.h
 *
 * NetworkingConfig represents the container&#39;s networking configuration for each of its interfaces. It is used for the networking configs specified in the &#x60;docker create&#x60; and &#x60;docker network connect&#x60; commands. 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "EndpointSettings.h"
#include <vector>

namespace openapi {


/*! \brief NetworkingConfig represents the container's networking configuration for each of its interfaces. It is used for the networking configs specified in the `docker create` and `docker network connect` commands. 
 *
 *  \ingroup Models
 *
 */
struct NetworkingConfig{
    // additional properties should be rendered as json. string for now.
    openapi::string_t endpoints_config;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}