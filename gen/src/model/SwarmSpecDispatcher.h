/*
 * SwarmSpecDispatcher.h
 *
 * Dispatcher configuration.
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

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