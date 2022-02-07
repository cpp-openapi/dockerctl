/*
 * NetworkConnectRequest.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "EndpointSettings.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct NetworkConnectRequest{
    std::optional<openapi::string_t> container;
    std::optional<EndpointSettings> endpoint_config;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}