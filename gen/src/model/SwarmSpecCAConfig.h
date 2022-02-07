/*
 * SwarmSpecCAConfig.h
 *
 * CA configuration.
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "SwarmSpecCAConfigExternalCAs.h"
#include <vector>

namespace openapi {


/*! \brief CA configuration.
 *
 *  \ingroup Models
 *
 */
struct SwarmSpecCAConfig{
    std::optional<int> node_cert_expiry{};
    // array
    std::vector<SwarmSpecCAConfigExternalCAs> external_cas;
    std::optional<openapi::string_t> signing_ca_cert;
    std::optional<openapi::string_t> signing_ca_key;
    std::optional<int> force_rotate{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}