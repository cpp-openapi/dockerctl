/*
 * NetworkCreateRequest.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "IPAM.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct NetworkCreateRequest{
    std::optional<openapi::string_t> name;
    std::optional<bool> check_duplicate{};
    std::optional<openapi::string_t> driver;
    std::optional<bool> internal{};
    std::optional<bool> attachable{};
    std::optional<bool> ingress{};
    std::optional<IPAM> ipam;
    std::optional<bool> enable_ipv6{};
    // additional properties should be rendered as json. string for now.
    openapi::string_t options;
    // additional properties should be rendered as json. string for now.
    openapi::string_t labels;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}