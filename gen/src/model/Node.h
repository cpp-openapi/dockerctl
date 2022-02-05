/*
 * Node.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "ManagerStatus.h"
#include "NodeDescription.h"
#include "NodeSpec.h"
#include "NodeStatus.h"
#include "ObjectVersion.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct Node{
    std::optional<openapi::string_t> id;
    std::optional<ObjectVersion> version;
    std::optional<openapi::string_t> created_at;
    std::optional<openapi::string_t> updated_at;
    std::optional<NodeSpec> spec;
    std::optional<NodeDescription> description;
    std::optional<NodeStatus> status;
    std::optional<ManagerStatus> manager_status;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}