/*
 * PeerNode.h
 *
 * Represents a peer-node in the swarm
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief Represents a peer-node in the swarm
 *
 *  \ingroup Models
 *
 */
struct PeerNode{
    std::optional<openapi::string_t> node_id;
    std::optional<openapi::string_t> addr;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}