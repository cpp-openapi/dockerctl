/*
 * ContainerSummaryNetworkSettings.h
 *
 * A summary of the container&#39;s network settings
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "EndpointSettings.h"
#include <vector>

namespace openapi {


/*! \brief A summary of the container's network settings
 *
 *  \ingroup Models
 *
 */
struct ContainerSummaryNetworkSettings{
    // additional properties should be rendered as json. string for now.
    openapi::string_t networks;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}