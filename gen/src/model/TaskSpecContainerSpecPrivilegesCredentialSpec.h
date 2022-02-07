/*
 * TaskSpecContainerSpecPrivilegesCredentialSpec.h
 *
 * CredentialSpec for managed service account (Windows only)
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief CredentialSpec for managed service account (Windows only)
 *
 *  \ingroup Models
 *
 */
struct TaskSpecContainerSpecPrivilegesCredentialSpec{
    std::optional<openapi::string_t> config;
    std::optional<openapi::string_t> file;
    std::optional<openapi::string_t> registry;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}