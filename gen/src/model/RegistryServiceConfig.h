/*
 * RegistryServiceConfig.h
 *
 * RegistryServiceConfig stores daemon registry services configuration. 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "IndexInfo.h"
#include <vector>

namespace openapi {


/*! \brief RegistryServiceConfig stores daemon registry services configuration. 
 *
 *  \ingroup Models
 *
 */
struct RegistryServiceConfig{
    // array
    std::vector<openapi::string_t> allow_nondistributable_artifacts_cidrs;
    // array
    std::vector<openapi::string_t> allow_nondistributable_artifacts_hostnames;
    // array
    std::vector<openapi::string_t> insecure_registry_cidrs;
    // additional properties should be rendered as json. string for now.
    openapi::string_t index_configs;
    // array
    std::vector<openapi::string_t> mirrors;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}