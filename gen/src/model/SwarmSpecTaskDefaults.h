/*
 * SwarmSpecTaskDefaults.h
 *
 * Defaults for creating tasks in this cluster.
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "SwarmSpecTaskDefaultsLogDriver.h"

namespace openapi {


/*! \brief Defaults for creating tasks in this cluster.
 *
 *  \ingroup Models
 *
 */
struct SwarmSpecTaskDefaults{
    std::optional<SwarmSpecTaskDefaultsLogDriver> log_driver;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}