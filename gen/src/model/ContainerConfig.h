/*
 * ContainerConfig.h
 *
 * Configuration for a container that is portable between hosts
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "HealthConfig.h"
#include <vector>

namespace openapi {


/*! \brief Configuration for a container that is portable between hosts
 *
 *  \ingroup Models
 *
 */
struct ContainerConfig{
    std::optional<openapi::string_t> hostname;
    std::optional<openapi::string_t> domainname;
    std::optional<openapi::string_t> user;
    std::optional<bool> attach_stdin{};
    std::optional<bool> attach_stdout{};
    std::optional<bool> attach_stderr{};
    // additional properties should be rendered as json. string for now.
    openapi::string_t exposed_ports;
    std::optional<bool> tty{};
    std::optional<bool> open_stdin{};
    std::optional<bool> stdin_once{};
    // array
    std::vector<openapi::string_t> env;
    // array
    std::vector<openapi::string_t> cmd;
    std::optional<HealthConfig> healthcheck;
    std::optional<bool> args_escaped{};
    std::optional<openapi::string_t> image;
    // additional properties should be rendered as json. string for now.
    openapi::string_t volumes;
    std::optional<openapi::string_t> working_dir;
    // array
    std::vector<openapi::string_t> entrypoint;
    std::optional<bool> network_disabled{};
    std::optional<openapi::string_t> mac_address;
    // array
    std::vector<openapi::string_t> on_build;
    // additional properties should be rendered as json. string for now.
    openapi::string_t labels;
    std::optional<openapi::string_t> stop_signal;
    std::optional<int> stop_timeout{};
    // array
    std::vector<openapi::string_t> shell;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}