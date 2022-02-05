/*
 * ExecConfig.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct ExecConfig{
    std::optional<bool> attach_stdin{};
    std::optional<bool> attach_stdout{};
    std::optional<bool> attach_stderr{};
    std::optional<openapi::string_t> detach_keys;
    std::optional<bool> tty{};
    // array
    std::vector<openapi::string_t> env;
    // array
    std::vector<openapi::string_t> cmd;
    std::optional<bool> privileged{};
    std::optional<openapi::string_t> user;
    std::optional<openapi::string_t> working_dir;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}