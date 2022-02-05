/*
 * DeviceMapping.h
 *
 * A device mapping between the host and container
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief A device mapping between the host and container
 *
 *  \ingroup Models
 *
 */
struct DeviceMapping{
    std::optional<openapi::string_t> path_on_host;
    std::optional<openapi::string_t> path_in_container;
    std::optional<openapi::string_t> cgroup_permissions;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}