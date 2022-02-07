/*
 * ManagerStatus.h
 *
 * ManagerStatus represents the status of a manager.  It provides the current status of a node&#39;s manager component, if the node is a manager. 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "Reachability.h"

namespace openapi {


/*! \brief ManagerStatus represents the status of a manager.  It provides the current status of a node's manager component, if the node is a manager. 
 *
 *  \ingroup Models
 *
 */
struct ManagerStatus{
    std::optional<bool> leader{};
    std::optional<Reachability> reachability;
    std::optional<openapi::string_t> addr;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}