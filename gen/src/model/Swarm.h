/*
 * Swarm.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "ClusterInfo.h"
#include "JoinTokens.h"
#include "ObjectVersion.h"
#include "SwarmAllOf.h"
#include "SwarmSpec.h"
#include "TLSInfo.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct Swarm{
    std::optional<openapi::string_t> id;
    std::optional<ObjectVersion> version;
    std::optional<openapi::string_t> created_at;
    std::optional<openapi::string_t> updated_at;
    std::optional<SwarmSpec> spec;
    std::optional<TLSInfo> tls_info;
    std::optional<bool> root_rotation_in_progress{};
    std::optional<int> data_path_port{};
    // array
    std::vector<openapi::string_t> default_addr_pool;
    std::optional<int> subnet_size{};
    std::optional<JoinTokens> join_tokens;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}