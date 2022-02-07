/*
 * SwarmSpecDispatcher.h
 *
 * Dispatcher configuration.
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief Dispatcher configuration.
 *
 *  \ingroup Models
 *
 */
struct SwarmSpecDispatcher{
    std::optional<int> heartbeat_period{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}