/*
 * SwarmSpecOrchestration.h
 *
 * Orchestration configuration.
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief Orchestration configuration.
 *
 *  \ingroup Models
 *
 */
struct SwarmSpecOrchestration{
    std::optional<int> task_history_retention_limit{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}