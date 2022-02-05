/*
 * NetworkConnectRequest.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
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