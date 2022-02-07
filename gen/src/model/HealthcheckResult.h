/*
 * HealthcheckResult.h
 *
 * HealthcheckResult stores information about a single run of a healthcheck probe 
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief HealthcheckResult stores information about a single run of a healthcheck probe 
 *
 *  \ingroup Models
 *
 */
struct HealthcheckResult{
    std::optional<openapi::string_t> start;
    std::optional<openapi::string_t> end;
    std::optional<int> exit_code{};
    std::optional<openapi::string_t> output;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}