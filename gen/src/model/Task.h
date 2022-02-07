/*
 * Task.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "ObjectVersion.h"
#include "TaskSpec.h"
#include "TaskState.h"
#include "TaskStatus.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct Task{
    std::optional<openapi::string_t> id;
    std::optional<ObjectVersion> version;
    std::optional<openapi::string_t> created_at;
    std::optional<openapi::string_t> updated_at;
    std::optional<openapi::string_t> name;
    // additional properties should be rendered as json. string for now.
    openapi::string_t labels;
    std::optional<TaskSpec> spec;
    std::optional<openapi::string_t> service_id;
    std::optional<int> slot{};
    std::optional<openapi::string_t> node_id;
    // array
    std::vector<openapi::string_t> assigned_generic_resources;
    std::optional<TaskStatus> status;
    std::optional<TaskState> desired_state;
    std::optional<ObjectVersion> job_iteration;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}