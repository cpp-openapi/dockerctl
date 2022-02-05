/*
 * NetworkSettings.h
 *
 * NetworkSettings exposes the network settings in the API
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "Address.h"
#include "EndpointSettings.h"
#include "PortBinding.h"
#include <vector>

namespace openapi {


/*! \brief NetworkSettings exposes the network settings in the API
 *
 *  \ingroup Models
 *
 */
struct NetworkSettings{
    std::optional<openapi::string_t> bridge;
    std::optional<openapi::string_t> sandbox_id;
    std::optional<bool> hairpin_mode{};
    std::optional<openapi::string_t> link_local_ipv6_address;
    std::optional<int> link_local_ipv6_prefix_len{};
    // additional properties should be rendered as json. string for now.
    openapi::string_t ports;
    std::optional<openapi::string_t> sandbox_key;
    // array
    std::vector<Address> secondary_ip_addresses;
    // array
    std::vector<Address> secondary_ipv6_addresses;
    std::optional<openapi::string_t> endpoint_id;
    std::optional<openapi::string_t> gateway;
    std::optional<openapi::string_t> global_ipv6_address;
    std::optional<int> global_ipv6_prefix_len{};
    std::optional<openapi::string_t> ip_address;
    std::optional<int> ip_prefix_len{};
    std::optional<openapi::string_t> ipv6_gateway;
    std::optional<openapi::string_t> mac_address;
    // additional properties should be rendered as json. string for now.
    openapi::string_t networks;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}