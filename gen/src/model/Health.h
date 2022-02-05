/*
 * Health.h
 *
 * Health stores information about the container&#39;s healthcheck results. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "HealthcheckResult.h"
#include <vector>

namespace openapi {


/*! \brief Health stores information about the container's healthcheck results. 
 *
 *  \ingroup Models
 *
 */
struct Health{
    std::optional<openapi::string_t> status;
    std::optional<int> failing_streak{};
    // array
    std::vector<HealthcheckResult> log;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}