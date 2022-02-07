/*
 * SystemInfo.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "Commit.h"
#include "PluginsInfo.h"
#include "RegistryServiceConfig.h"
#include "Runtime.h"
#include "SwarmInfo.h"
#include "SystemInfoDefaultAddressPools.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct SystemInfo{
    std::optional<openapi::string_t> id;
    std::optional<int> containers{};
    std::optional<int> containers_running{};
    std::optional<int> containers_paused{};
    std::optional<int> containers_stopped{};
    std::optional<int> images{};
    std::optional<openapi::string_t> driver;
    // array
    std::vector<openapi::string_t> driver_status;
    std::optional<openapi::string_t> docker_root_dir;
    std::optional<PluginsInfo> plugins;
    std::optional<bool> memory_limit{};
    std::optional<bool> swap_limit{};
    std::optional<bool> kernel_memory{};
    std::optional<bool> cpu_cfs_period{};
    std::optional<bool> cpu_cfs_quota{};
    std::optional<bool> cpu_shares{};
    std::optional<bool> cpu_set{};
    std::optional<bool> pids_limit{};
    std::optional<bool> oom_kill_disable{};
    std::optional<bool> ipv4_forwarding{};
    std::optional<bool> bridge_nf_iptables{};
    std::optional<bool> bridge_nf_ip6tables{};
    std::optional<bool> debug{};
    std::optional<int> nfd{};
    std::optional<int> n_goroutines{};
    std::optional<openapi::string_t> system_time;
    std::optional<openapi::string_t> logging_driver;
    std::optional<openapi::string_t> cgroup_driver;
    std::optional<openapi::string_t> cgroup_version;
    std::optional<int> n_events_listener{};
    std::optional<openapi::string_t> kernel_version;
    std::optional<openapi::string_t> operating_system;
    std::optional<openapi::string_t> os_version;
    std::optional<openapi::string_t> os_type;
    std::optional<openapi::string_t> architecture;
    std::optional<int> ncpu{};
    std::optional<int> mem_total{};
    std::optional<openapi::string_t> index_server_address;
    std::optional<RegistryServiceConfig> registry_config;
    // array
    std::vector<openapi::string_t> generic_resources;
    std::optional<openapi::string_t> http_proxy;
    std::optional<openapi::string_t> https_proxy;
    std::optional<openapi::string_t> no_proxy;
    std::optional<openapi::string_t> name;
    // array
    std::vector<openapi::string_t> labels;
    std::optional<bool> experimental_build{};
    std::optional<openapi::string_t> server_version;
    std::optional<openapi::string_t> cluster_store;
    std::optional<openapi::string_t> cluster_advertise;
    // additional properties should be rendered as json. string for now.
    openapi::string_t runtimes;
    std::optional<openapi::string_t> default_runtime;
    std::optional<SwarmInfo> swarm;
    std::optional<bool> live_restore_enabled{};
    std::optional<openapi::string_t> isolation;
    std::optional<openapi::string_t> init_binary;
    std::optional<Commit> containerd_commit;
    std::optional<Commit> runc_commit;
    std::optional<Commit> init_commit;
    // array
    std::vector<openapi::string_t> security_options;
    std::optional<openapi::string_t> product_license;
    // array
    std::vector<SystemInfoDefaultAddressPools> default_address_pools;
    // array
    std::vector<openapi::string_t> warnings;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}