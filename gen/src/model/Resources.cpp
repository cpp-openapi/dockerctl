/*
 * Resources.cpp
 *
 * A container&#39;s resources (cgroups config, ulimits, etc)
 */

#include "Resources.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(Resources, CpuShares, Memory, CgroupParent, BlkioWeight, BlkioWeightDevice, BlkioDeviceReadBps, BlkioDeviceWriteBps, BlkioDeviceReadIOps, BlkioDeviceWriteIOps, CpuPeriod, CpuQuota, CpuRealtimePeriod, CpuRealtimeRuntime, CpusetCpus, CpusetMems, Devices, DeviceCgroupRules, DeviceRequests, KernelMemory, KernelMemoryTCP, MemoryReservation, MemorySwap, MemorySwappiness, NanoCpus, OomKillDisable, Init, PidsLimit, Ulimits, CpuCount, CpuPercent, IOMaximumIOps, IOMaximumBandwidth)

void Resources::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->cpu_shares)>(openapi::StringT(OPENAPI_LITERAL(CpuShares)), this->cpu_shares);
    j.AddMember<decltype(this->memory)>(openapi::StringT(OPENAPI_LITERAL(Memory)), this->memory);
    j.AddMember<decltype(this->cgroup_parent)>(openapi::StringT(OPENAPI_LITERAL(CgroupParent)), this->cgroup_parent);
    j.AddMember<decltype(this->blkio_weight)>(openapi::StringT(OPENAPI_LITERAL(BlkioWeight)), this->blkio_weight);
    j.AddMember<decltype(this->blkio_weight_device)>(openapi::StringT(OPENAPI_LITERAL(BlkioWeightDevice)), this->blkio_weight_device);
    j.AddMember<decltype(this->blkio_device_read_bps)>(openapi::StringT(OPENAPI_LITERAL(BlkioDeviceReadBps)), this->blkio_device_read_bps);
    j.AddMember<decltype(this->blkio_device_write_bps)>(openapi::StringT(OPENAPI_LITERAL(BlkioDeviceWriteBps)), this->blkio_device_write_bps);
    j.AddMember<decltype(this->blkio_device_read_i_ops)>(openapi::StringT(OPENAPI_LITERAL(BlkioDeviceReadIOps)), this->blkio_device_read_i_ops);
    j.AddMember<decltype(this->blkio_device_write_i_ops)>(openapi::StringT(OPENAPI_LITERAL(BlkioDeviceWriteIOps)), this->blkio_device_write_i_ops);
    j.AddMember<decltype(this->cpu_period)>(openapi::StringT(OPENAPI_LITERAL(CpuPeriod)), this->cpu_period);
    j.AddMember<decltype(this->cpu_quota)>(openapi::StringT(OPENAPI_LITERAL(CpuQuota)), this->cpu_quota);
    j.AddMember<decltype(this->cpu_realtime_period)>(openapi::StringT(OPENAPI_LITERAL(CpuRealtimePeriod)), this->cpu_realtime_period);
    j.AddMember<decltype(this->cpu_realtime_runtime)>(openapi::StringT(OPENAPI_LITERAL(CpuRealtimeRuntime)), this->cpu_realtime_runtime);
    j.AddMember<decltype(this->cpuset_cpus)>(openapi::StringT(OPENAPI_LITERAL(CpusetCpus)), this->cpuset_cpus);
    j.AddMember<decltype(this->cpuset_mems)>(openapi::StringT(OPENAPI_LITERAL(CpusetMems)), this->cpuset_mems);
    j.AddMember<decltype(this->devices)>(openapi::StringT(OPENAPI_LITERAL(Devices)), this->devices);
    j.AddMember<decltype(this->device_cgroup_rules)>(openapi::StringT(OPENAPI_LITERAL(DeviceCgroupRules)), this->device_cgroup_rules);
    j.AddMember<decltype(this->device_requests)>(openapi::StringT(OPENAPI_LITERAL(DeviceRequests)), this->device_requests);
    j.AddMember<decltype(this->kernel_memory)>(openapi::StringT(OPENAPI_LITERAL(KernelMemory)), this->kernel_memory);
    j.AddMember<decltype(this->kernel_memory_tcp)>(openapi::StringT(OPENAPI_LITERAL(KernelMemoryTCP)), this->kernel_memory_tcp);
    j.AddMember<decltype(this->memory_reservation)>(openapi::StringT(OPENAPI_LITERAL(MemoryReservation)), this->memory_reservation);
    j.AddMember<decltype(this->memory_swap)>(openapi::StringT(OPENAPI_LITERAL(MemorySwap)), this->memory_swap);
    j.AddMember<decltype(this->memory_swappiness)>(openapi::StringT(OPENAPI_LITERAL(MemorySwappiness)), this->memory_swappiness);
    j.AddMember<decltype(this->nano_cpus)>(openapi::StringT(OPENAPI_LITERAL(NanoCpus)), this->nano_cpus);
    j.AddMember<decltype(this->oom_kill_disable)>(openapi::StringT(OPENAPI_LITERAL(OomKillDisable)), this->oom_kill_disable);
    j.AddMember<decltype(this->init)>(openapi::StringT(OPENAPI_LITERAL(Init)), this->init);
    j.AddMember<decltype(this->pids_limit)>(openapi::StringT(OPENAPI_LITERAL(PidsLimit)), this->pids_limit);
    j.AddMember<decltype(this->ulimits)>(openapi::StringT(OPENAPI_LITERAL(Ulimits)), this->ulimits);
    j.AddMember<decltype(this->cpu_count)>(openapi::StringT(OPENAPI_LITERAL(CpuCount)), this->cpu_count);
    j.AddMember<decltype(this->cpu_percent)>(openapi::StringT(OPENAPI_LITERAL(CpuPercent)), this->cpu_percent);
    j.AddMember<decltype(this->io_maximum_i_ops)>(openapi::StringT(OPENAPI_LITERAL(IOMaximumIOps)), this->io_maximum_i_ops);
    j.AddMember<decltype(this->io_maximum_bandwidth)>(openapi::StringT(OPENAPI_LITERAL(IOMaximumBandwidth)), this->io_maximum_bandwidth);
}

void Resources::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CpuShares))))
    {
        using V = remove_optional<decltype(this->cpu_shares)>::type;
        this->cpu_shares = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CpuShares)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Memory))))
    {
        using V = remove_optional<decltype(this->memory)>::type;
        this->memory = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Memory)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CgroupParent))))
    {
        using V = remove_optional<decltype(this->cgroup_parent)>::type;
        this->cgroup_parent = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CgroupParent)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(BlkioWeight))))
    {
        using V = remove_optional<decltype(this->blkio_weight)>::type;
        this->blkio_weight = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(BlkioWeight)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(BlkioWeightDevice))))
    {
        using V = remove_optional<decltype(this->blkio_weight_device)>::type;
        this->blkio_weight_device = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(BlkioWeightDevice)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(BlkioDeviceReadBps))))
    {
        using V = remove_optional<decltype(this->blkio_device_read_bps)>::type;
        this->blkio_device_read_bps = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(BlkioDeviceReadBps)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(BlkioDeviceWriteBps))))
    {
        using V = remove_optional<decltype(this->blkio_device_write_bps)>::type;
        this->blkio_device_write_bps = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(BlkioDeviceWriteBps)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(BlkioDeviceReadIOps))))
    {
        using V = remove_optional<decltype(this->blkio_device_read_i_ops)>::type;
        this->blkio_device_read_i_ops = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(BlkioDeviceReadIOps)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(BlkioDeviceWriteIOps))))
    {
        using V = remove_optional<decltype(this->blkio_device_write_i_ops)>::type;
        this->blkio_device_write_i_ops = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(BlkioDeviceWriteIOps)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CpuPeriod))))
    {
        using V = remove_optional<decltype(this->cpu_period)>::type;
        this->cpu_period = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CpuPeriod)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CpuQuota))))
    {
        using V = remove_optional<decltype(this->cpu_quota)>::type;
        this->cpu_quota = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CpuQuota)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CpuRealtimePeriod))))
    {
        using V = remove_optional<decltype(this->cpu_realtime_period)>::type;
        this->cpu_realtime_period = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CpuRealtimePeriod)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CpuRealtimeRuntime))))
    {
        using V = remove_optional<decltype(this->cpu_realtime_runtime)>::type;
        this->cpu_realtime_runtime = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CpuRealtimeRuntime)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CpusetCpus))))
    {
        using V = remove_optional<decltype(this->cpuset_cpus)>::type;
        this->cpuset_cpus = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CpusetCpus)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CpusetMems))))
    {
        using V = remove_optional<decltype(this->cpuset_mems)>::type;
        this->cpuset_mems = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CpusetMems)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Devices))))
    {
        using V = remove_optional<decltype(this->devices)>::type;
        this->devices = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Devices)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DeviceCgroupRules))))
    {
        using V = remove_optional<decltype(this->device_cgroup_rules)>::type;
        this->device_cgroup_rules = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DeviceCgroupRules)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DeviceRequests))))
    {
        using V = remove_optional<decltype(this->device_requests)>::type;
        this->device_requests = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DeviceRequests)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(KernelMemory))))
    {
        using V = remove_optional<decltype(this->kernel_memory)>::type;
        this->kernel_memory = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(KernelMemory)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(KernelMemoryTCP))))
    {
        using V = remove_optional<decltype(this->kernel_memory_tcp)>::type;
        this->kernel_memory_tcp = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(KernelMemoryTCP)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MemoryReservation))))
    {
        using V = remove_optional<decltype(this->memory_reservation)>::type;
        this->memory_reservation = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MemoryReservation)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MemorySwap))))
    {
        using V = remove_optional<decltype(this->memory_swap)>::type;
        this->memory_swap = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MemorySwap)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MemorySwappiness))))
    {
        using V = remove_optional<decltype(this->memory_swappiness)>::type;
        this->memory_swappiness = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MemorySwappiness)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NanoCpus))))
    {
        using V = remove_optional<decltype(this->nano_cpus)>::type;
        this->nano_cpus = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NanoCpus)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(OomKillDisable))))
    {
        using V = remove_optional<decltype(this->oom_kill_disable)>::type;
        this->oom_kill_disable = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(OomKillDisable)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Init))))
    {
        using V = remove_optional<decltype(this->init)>::type;
        this->init = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Init)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PidsLimit))))
    {
        using V = remove_optional<decltype(this->pids_limit)>::type;
        this->pids_limit = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PidsLimit)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Ulimits))))
    {
        using V = remove_optional<decltype(this->ulimits)>::type;
        this->ulimits = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Ulimits)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CpuCount))))
    {
        using V = remove_optional<decltype(this->cpu_count)>::type;
        this->cpu_count = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CpuCount)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CpuPercent))))
    {
        using V = remove_optional<decltype(this->cpu_percent)>::type;
        this->cpu_percent = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CpuPercent)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(IOMaximumIOps))))
    {
        using V = remove_optional<decltype(this->io_maximum_i_ops)>::type;
        this->io_maximum_i_ops = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(IOMaximumIOps)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(IOMaximumBandwidth))))
    {
        using V = remove_optional<decltype(this->io_maximum_bandwidth)>::type;
        this->io_maximum_bandwidth = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(IOMaximumBandwidth)));
    }
}

