/*
 * ClusterInfo.h
 *
 * ClusterInfo represents information about the swarm as is returned by the \&quot;/info\&quot; endpoint. Join-tokens are not included. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "ObjectVersion.h"
#include "SwarmSpec.h"
#include "TLSInfo.h"
#include <vector>

namespace openapi {


/*! \brief ClusterInfo represents information about the swarm as is returned by the \"/info\" endpoint. Join-tokens are not included. 
 *
 *  \ingroup Models
 *
 */
struct ClusterInfo{
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
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}