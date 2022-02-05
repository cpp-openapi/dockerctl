/*
 * SystemVersion.h
 *
 * Response of Engine API: GET \&quot;/version\&quot; 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "SystemVersionComponents.h"
#include "SystemVersionPlatform.h"
#include <vector>

namespace openapi {


/*! \brief Response of Engine API: GET \"/version\" 
 *
 *  \ingroup Models
 *
 */
struct SystemVersion{
    std::optional<SystemVersionPlatform> platform;
    // array
    std::vector<SystemVersionComponents> components;
    std::optional<openapi::string_t> version;
    std::optional<openapi::string_t> api_version;
    std::optional<openapi::string_t> min_api_version;
    std::optional<openapi::string_t> git_commit;
    std::optional<openapi::string_t> go_version;
    std::optional<openapi::string_t> os;
    std::optional<openapi::string_t> arch;
    std::optional<openapi::string_t> kernel_version;
    std::optional<bool> experimental{};
    std::optional<openapi::string_t> build_time;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}