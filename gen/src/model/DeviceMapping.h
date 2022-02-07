/*
 * DeviceMapping.h
 *
 * A device mapping between the host and container
 */

#pragma once


#include <optional>
#include "common_json.h"

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