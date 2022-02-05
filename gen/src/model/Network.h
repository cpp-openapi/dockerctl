/*
 * Network.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "IPAM.h"
#include "NetworkContainer.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct Network{
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> created;
    std::optional<openapi::string_t> scope;
    std::optional<openapi::string_t> driver;
    std::optional<bool> enable_ipv6{};
    std::optional<IPAM> ipam;
    std::optional<bool> internal{};
    std::optional<bool> attachable{};
    std::optional<bool> ingress{};
    // additional properties should be rendered as json. string for now.
    openapi::string_t containers;
    // additional properties should be rendered as json. string for now.
    openapi::string_t options;
    // additional properties should be rendered as json. string for now.
    openapi::string_t labels;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}