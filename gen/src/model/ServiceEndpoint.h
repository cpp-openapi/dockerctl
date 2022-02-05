/*
 * ServiceEndpoint.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "EndpointPortConfig.h"
#include "EndpointSpec.h"
#include "ServiceEndpointVirtualIPs.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct ServiceEndpoint{
    std::optional<EndpointSpec> spec;
    // array
    std::vector<EndpointPortConfig> ports;
    // array
    std::vector<ServiceEndpointVirtualIPs> virtual_ips;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}