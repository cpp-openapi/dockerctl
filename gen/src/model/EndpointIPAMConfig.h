/*
 * EndpointIPAMConfig.h
 *
 * EndpointIPAMConfig represents an endpoint&#39;s IPAM configuration. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include <vector>

namespace openapi {


/*! \brief EndpointIPAMConfig represents an endpoint's IPAM configuration. 
 *
 *  \ingroup Models
 *
 */
struct EndpointIPAMConfig{
    std::optional<openapi::string_t> ipv4_address;
    std::optional<openapi::string_t> ipv6_address;
    // array
    std::vector<openapi::string_t> link_local_ips;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}