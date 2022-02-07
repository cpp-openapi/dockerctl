/*
 * PluginConfig.h
 *
 * The config of a plugin.
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "PluginConfigArgs.h"
#include "PluginConfigInterface.h"
#include "PluginConfigLinux.h"
#include "PluginConfigNetwork.h"
#include "PluginConfigRootfs.h"
#include "PluginConfigUser.h"
#include "PluginEnv.h"
#include "PluginMount.h"
#include <vector>

namespace openapi {


/*! \brief The config of a plugin.
 *
 *  \ingroup Models
 *
 */
struct PluginConfig{
    std::optional<openapi::string_t> docker_version;
    std::optional<openapi::string_t> description;
    std::optional<openapi::string_t> documentation;
    std::optional<PluginConfigInterface> interface;
    // array
    std::vector<openapi::string_t> entrypoint;
    std::optional<openapi::string_t> work_dir;
    std::optional<PluginConfigUser> user;
    std::optional<PluginConfigNetwork> network;
    std::optional<PluginConfigLinux> linux;
    std::optional<openapi::string_t> propagated_mount;
    std::optional<bool> ipc_host{};
    std::optional<bool> pid_host{};
    // array
    std::vector<PluginMount> mounts;
    // array
    std::vector<PluginEnv> env;
    std::optional<PluginConfigArgs> args;
    std::optional<PluginConfigRootfs> rootfs;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}