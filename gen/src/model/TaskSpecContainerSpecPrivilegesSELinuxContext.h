/*
 * TaskSpecContainerSpecPrivilegesSELinuxContext.h
 *
 * SELinux labels of the container
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief SELinux labels of the container
 *
 *  \ingroup Models
 *
 */
struct TaskSpecContainerSpecPrivilegesSELinuxContext{
    std::optional<bool> disable{};
    std::optional<openapi::string_t> user;
    std::optional<openapi::string_t> role;
    std::optional<openapi::string_t> type;
    std::optional<openapi::string_t> level;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}