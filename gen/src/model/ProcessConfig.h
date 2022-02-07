/*
 * ProcessConfig.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct ProcessConfig{
    std::optional<bool> privileged{};
    std::optional<openapi::string_t> user;
    std::optional<bool> tty{};
    std::optional<openapi::string_t> entrypoint;
    // array
    std::vector<openapi::string_t> arguments;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}