/*
 * HealthConfig.h
 *
 * A test to perform to check that the container is healthy.
 */

#pragma once


#include <optional>
#include "common_json.h"
#include <vector>

namespace openapi {


/*! \brief A test to perform to check that the container is healthy.
 *
 *  \ingroup Models
 *
 */
struct HealthConfig{
    // array
    std::vector<openapi::string_t> test;
    std::optional<int> interval{};
    std::optional<int> timeout{};
    std::optional<int> retries{};
    std::optional<int> start_period{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}