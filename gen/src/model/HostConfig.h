/*
 * HostConfig.h
 *
 * Container configuration that depends on the host we are running on
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "DeviceMapping.h"
#include "DeviceRequest.h"
#include "HostConfigAllOf.h"
#include "HostConfigAllOfLogConfig.h"
#include "Mount.h"
#include "PortBinding.h"
#include "Resources.h"
#include "ResourcesBlkioWeightDevice.h"
#include "ResourcesUlimits.h"
#include "RestartPolicy.h"
#include "ThrottleDevice.h"
#include <vector>

namespace openapi {


/*! \brief Container configuration that depends on the host we are running on
 *
 *  \ingroup Models
 *
 */
struct HostConfig{
    std::optional<int> cpu_shares{};
    std::optional<int> memory{};
    std::optional<openapi::string_t> cgroup_parent;
    std::optional<int> blkio_weight{};
    // array
    std::vector<ResourcesBlkioWeightDevice> blkio_weight_device;
    // array
    std::vector<ThrottleDevice> blkio_device_read_bps;
    // array
    std::vector<ThrottleDevice> blkio_device_write_bps;
    // array
    std::vector<ThrottleDevice> blkio_device_read_i_ops;
    // array
    std::vector<ThrottleDevice> blkio_device_write_i_ops;
    std::optional<int> cpu_period{};
    std::optional<int> cpu_quota{};
    std::optional<int> cpu_realtime_period{};
    std::optional<int> cpu_realtime_runtime{};
    std::optional<openapi::string_t> cpuset_cpus;
    std::optional<openapi::string_t> cpuset_mems;
    // array
    std::vector<DeviceMapping> devices;
    // array
    std::vector<openapi::string_t> device_cgroup_rules;
    // array
    std::vector<DeviceRequest> device_requests;
    std::optional<int> kernel_memory{};
    std::optional<int> kernel_memory_tcp{};
    std::optional<int> memory_reservation{};
    std::optional<int> memory_swap{};
    std::optional<int> memory_swappiness{};
    std::optional<int> nano_cpus{};
    std::optional<bool> oom_kill_disable{};
    std::optional<bool> init{};
    std::optional<int> pids_limit{};
    // array
    std::vector<ResourcesUlimits> ulimits;
    std::optional<int> cpu_count{};
    std::optional<int> cpu_percent{};
    std::optional<int> io_maximum_i_ops{};
    std::optional<int> io_maximum_bandwidth{};
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