/*
 * ExecInspectResponse.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "ProcessConfig.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct ExecInspectResponse{
    std::optional<bool> can_remove{};
    std::optional<openapi::string_t> detach_keys;
    std::optional<openapi::string_t> id;
    std::optional<bool> running{};
    std::optional<int> exit_code{};
    std::optional<ProcessConfig> process_config;
    std::optional<bool> open_stdin{};
    std::optional<bool> open_stderr{};
    std::optional<bool> open_stdout{};
    std::optional<openapi::string_t> container_id;
    std::optional<int> pid{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}