/*
 * Address.h
 *
 * Address represents an IPv4 or IPv6 IP address.
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief Address represents an IPv4 or IPv6 IP address.
 *
 *  \ingroup Models
 *
 */
struct Address{
    std::optional<openapi::string_t> addr;
    std::optional<int> prefix_len{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}