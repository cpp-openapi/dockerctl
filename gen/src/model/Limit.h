/*
 * Limit.h
 *
 * An object describing a limit on resources which can be requested by a task. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief An object describing a limit on resources which can be requested by a task. 
 *
 *  \ingroup Models
 *
 */
struct Limit{
    std::optional<int> nano_cpus{};
    std::optional<int> memory_bytes{};
    std::optional<int> pids{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}