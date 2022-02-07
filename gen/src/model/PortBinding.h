/*
 * PortBinding.h
 *
 * PortBinding represents a binding between a host IP address and a host port. 
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief PortBinding represents a binding between a host IP address and a host port. 
 *
 *  \ingroup Models
 *
 */
struct PortBinding{
    std::optional<openapi::string_t> host_ip;
    std::optional<openapi::string_t> host_port;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}