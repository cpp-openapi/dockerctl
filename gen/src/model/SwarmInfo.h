/*
 * SwarmInfo.h
 *
 * Represents generic information about swarm. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "ClusterInfo.h"
#include "LocalNodeState.h"
#include "PeerNode.h"
#include <vector>

namespace openapi {


/*! \brief Represents generic information about swarm. 
 *
 *  \ingroup Models
 *
 */
struct SwarmInfo{
    std::optional<openapi::string_t> node_id;
    std::optional<openapi::string_t> node_addr;
    std::optional<LocalNodeState> local_node_state;
    std::optional<bool> control_available{};
    std::optional<openapi::string_t> error;
    // array
    std::vector<PeerNode> remote_managers;
    std::optional<int> nodes{};
    std::optional<int> managers{};
    std::optional<ClusterInfo> cluster;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}