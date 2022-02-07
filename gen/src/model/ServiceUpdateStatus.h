/*
 * ServiceUpdateStatus.h
 *
 * The status of a service update.
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief The status of a service update.
 *
 *  \ingroup Models
 *
 */
struct ServiceUpdateStatus{
    std::optional<openapi::string_t> state;
    std::optional<openapi::string_t> started_at;
    std::optional<openapi::string_t> completed_at;
    std::optional<openapi::string_t> message;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}