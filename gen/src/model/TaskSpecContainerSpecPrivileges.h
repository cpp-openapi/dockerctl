/*
 * TaskSpecContainerSpecPrivileges.h
 *
 * Security options for the container
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "TaskSpecContainerSpecPrivilegesCredentialSpec.h"
#include "TaskSpecContainerSpecPrivilegesSELinuxContext.h"

namespace openapi {


/*! \brief Security options for the container
 *
 *  \ingroup Models
 *
 */
struct TaskSpecContainerSpecPrivileges{
    std::optional<TaskSpecContainerSpecPrivilegesCredentialSpec> credential_spec;
    std::optional<TaskSpecContainerSpecPrivilegesSELinuxContext> se_linux_context;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}