/*
 * ServiceSpecUpdateConfig.h
 *
 * Specification for the update strategy of the service.
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief Specification for the update strategy of the service.
 *
 *  \ingroup Models
 *
 */
struct ServiceSpecUpdateConfig{
    std::optional<int> parallelism{};
    std::optional<int> delay{};
    std::optional<openapi::string_t> failure_action;
    std::optional<int> monitor{};
    std::optional<int> max_failure_ratio{};
    std::optional<openapi::string_t> order;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}