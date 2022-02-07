/*
 * ContainerInspectResponse.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "ContainerConfig.h"
#include "ContainerState.h"
#include "GraphDriverData.h"
#include "HostConfig.h"
#include "MountPoint.h"
#include "NetworkSettings.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct ContainerInspectResponse{
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> created;
    std::optional<openapi::string_t> path;
    // array
    std::vector<openapi::string_t> args;
    std::optional<ContainerState> state;
    std::optional<openapi::string_t> image;
    std::optional<openapi::string_t> resolv_conf_path;
    std::optional<openapi::string_t> hostname_path;
    std::optional<openapi::string_t> hosts_path;
    std::optional<openapi::string_t> log_path;
    std::optional<openapi::string_t> name;
    std::optional<int> restart_count{};
    std::optional<openapi::string_t> driver;
    std::optional<openapi::string_t> platform;
    std::optional<openapi::string_t> mount_label;
    std::optional<openapi::string_t> process_label;
    std::optional<openapi::string_t> app_armor_profile;
    // array
    std::vector<openapi::string_t> exec_ids;
    std::optional<HostConfig> host_config;
    std::optional<GraphDriverData> graph_driver;
    std::optional<int> size_rw{};
    std::optional<int> size_root_fs{};
    // array
    std::vector<MountPoint> mounts;
    std::optional<ContainerConfig> config;
    std::optional<NetworkSettings> network_settings;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}