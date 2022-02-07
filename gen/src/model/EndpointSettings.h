/*
 * EndpointSettings.h
 *
 * Configuration for a network endpoint.
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "EndpointIPAMConfig.h"
#include <vector>

namespace openapi {


/*! \brief Configuration for a network endpoint.
 *
 *  \ingroup Models
 *
 */
struct EndpointSettings{
    std::optional<EndpointIPAMConfig> ipam_config;
    // array
    std::vector<openapi::string_t> links;
    // array
    std::vector<openapi::string_t> aliases;
    std::optional<openapi::string_t> network_id;
    std::optional<openapi::string_t> endpoint_id;
    std::optional<openapi::string_t> gateway;
    std::optional<openapi::string_t> ip_address;
    std::optional<int> ip_prefix_len{};
    std::optional<openapi::string_t> ipv6_gateway;
    std::optional<openapi::string_t> global_ipv6_address;
    std::optional<int> global_ipv6_prefix_len{};
    std::optional<openapi::string_t> mac_address;
    // additional properties should be rendered as json. string for now.
    openapi::string_t driver_opts;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}