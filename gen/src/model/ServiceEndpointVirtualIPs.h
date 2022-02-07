/*
 * ServiceEndpointVirtualIPs.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct ServiceEndpointVirtualIPs{
    std::optional<openapi::string_t> network_id;
    std::optional<openapi::string_t> addr;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}