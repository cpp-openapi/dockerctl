/*
 * NodeStatus.h
 *
 * NodeStatus represents the status of a node.  It provides the current status of the node, as seen by the manager. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "NodeState.h"

namespace openapi {


/*! \brief NodeStatus represents the status of a node.  It provides the current status of the node, as seen by the manager. 
 *
 *  \ingroup Models
 *
 */
struct NodeStatus{
    std::optional<NodeState> state;
    std::optional<openapi::string_t> message;
    std::optional<openapi::string_t> addr;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}