/*
 * SwarmSpecOrchestration.h
 *
 * Orchestration configuration.
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

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