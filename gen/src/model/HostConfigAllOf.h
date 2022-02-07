/*
 * HostConfigAllOf.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "HostConfigAllOfLogConfig.h"
#include "Mount.h"
#include "PortBinding.h"
#include "RestartPolicy.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct HostConfigAllOf{
    // array
    std::vector<openapi::string_t> binds;
    std::optional<openapi::string_t> container_id_file;
    std::optional<HostConfigAllOfLogConfig> log_config;
    std::optional<openapi::string_t> network_mode;
    // additional properties should be rendered as json. string for now.
    openapi::string_t port_bindings;
    std::optional<RestartPolicy> restart_policy;
    std::optional<bool> auto_remove{};
    std::optional<openapi::string_t> volume_driver;
    // array
    std::vector<openapi::string_t> volumes_from;
    // array
    std::vector<Mount> mounts;
    // array
    std::vector<openapi::string_t> cap_add;
    // array
    std::vector<openapi::string_t> cap_drop;
    std::optional<openapi::string_t> cgroupns_mode;
    // array
    std::vector<openapi::string_t> dns;
    // array
    std::vector<openapi::string_t> dns_options;
    // array
    std::vector<openapi::string_t> dns_search;
    // array
    std::vector<openapi::string_t> extra_hosts;
    // array
    std::vector<openapi::string_t> group_add;
    std::optional<openapi::string_t> ipc_mode;
    std::optional<openapi::string_t> cgroup;
    // array
    std::vector<openapi::string_t> links;
    std::optional<int> oom_score_adj{};
    std::optional<openapi::string_t> pid_mode;
    std::optional<bool> privileged{};
    std::optional<bool> publish_all_ports{};
    std::optional<bool> readonly_rootfs{};
    // array
    std::vector<openapi::string_t> security_opt;
    // additional properties should be rendered as json. string for now.
    openapi::string_t storage_opt;
    // additional properties should be rendered as json. string for now.
    openapi::string_t tmpfs;
    std::optional<openapi::string_t> uts_mode;
    std::optional<openapi::string_t> userns_mode;
    std::optional<int> shm_size{};
    // additional properties should be rendered as json. string for now.
    openapi::string_t sysctls;
    std::optional<openapi::string_t> runtime;
    // array
    std::vector<int> console_size;
    std::optional<openapi::string_t> isolation;
    // array
    std::vector<openapi::string_t> masked_paths;
    // array
    std::vector<openapi::string_t> readonly_paths;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}