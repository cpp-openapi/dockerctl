/*
 * ServiceSpecModeReplicatedJob.h
 *
 * The mode used for services with a finite number of tasks that run to a completed state. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief The mode used for services with a finite number of tasks that run to a completed state. 
 *
 *  \ingroup Models
 *
 */
struct ServiceSpecModeReplicatedJob{
    std::optional<int> max_concurrent{};
    std::optional<int> total_completions{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}