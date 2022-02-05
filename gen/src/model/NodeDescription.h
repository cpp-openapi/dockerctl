/*
 * NodeDescription.h
 *
 * NodeDescription encapsulates the properties of the Node as reported by the agent. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "EngineDescription.h"
#include "Platform.h"
#include "ResourceObject.h"
#include "TLSInfo.h"

namespace openapi {


/*! \brief NodeDescription encapsulates the properties of the Node as reported by the agent. 
 *
 *  \ingroup Models
 *
 */
struct NodeDescription{
    std::optional<openapi::string_t> hostname;
    std::optional<Platform> platform;
    std::optional<ResourceObject> resources;
    std::optional<EngineDescription> engine;
    std::optional<TLSInfo> tls_info;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}