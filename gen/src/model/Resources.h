/*
 * Resources.h
 *
 * A container&#39;s resources (cgroups config, ulimits, etc)
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "DeviceMapping.h"
#include "DeviceRequest.h"
#include "ResourcesBlkioWeightDevice.h"
#include "ResourcesUlimits.h"
#include "ThrottleDevice.h"
#include <vector>

namespace openapi {


/*! \brief A container's resources (cgroups config, ulimits, etc)
 *
 *  \ingroup Models
 *
 */
struct Resources{
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
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}