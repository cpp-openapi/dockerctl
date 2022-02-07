/*
 * HostConfig.cpp
 *
 * Container configuration that depends on the host we are running on
 */

#include "HostConfig.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(HostConfig, CpuShares, Memory, CgroupParent, BlkioWeight, BlkioWeightDevice, BlkioDeviceReadBps, BlkioDeviceWriteBps, BlkioDeviceReadIOps, BlkioDeviceWriteIOps, CpuPeriod, CpuQuota, CpuRealtimePeriod, CpuRealtimeRuntime, CpusetCpus, CpusetMems, Devices, DeviceCgroupRules, DeviceRequests, KernelMemory, KernelMemoryTCP, MemoryReservation, MemorySwap, MemorySwappiness, NanoCpus, OomKillDisable, Init, PidsLimit, Ulimits, CpuCount, CpuPercent, IOMaximumIOps, IOMaximumBandwidth, Binds, ContainerIDFile, LogConfig, NetworkMode, PortBindings, RestartPolicy, AutoRemove, VolumeDriver, VolumesFrom, Mounts, CapAdd, CapDrop, CgroupnsMode, Dns, DnsOptions, DnsSearch, ExtraHosts, GroupAdd, IpcMode, Cgroup, Links, OomScoreAdj, PidMode, Privileged, PublishAllPorts, ReadonlyRootfs, SecurityOpt, StorageOpt, Tmpfs, UTSMode, UsernsMode, ShmSize, Sysctls, Runtime, ConsoleSize, Isolation, MaskedPaths, ReadonlyPaths)

void HostConfig::ToJSON(Json & j) const
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
    j.AddMember<decltype(this->binds)>(openapi::StringT(OPENAPI_LITERAL(Binds)), this->binds);
    j.AddMember<decltype(this->container_id_file)>(openapi::StringT(OPENAPI_LITERAL(ContainerIDFile)), this->container_id_file);
    j.AddMember<decltype(this->log_config)>(openapi::StringT(OPENAPI_LITERAL(LogConfig)), this->log_config);
    j.AddMember<decltype(this->network_mode)>(openapi::StringT(OPENAPI_LITERAL(NetworkMode)), this->network_mode);
    j.AddMember<decltype(this->port_bindings)>(openapi::StringT(OPENAPI_LITERAL(PortBindings)), this->port_bindings);
    j.AddMember<decltype(this->restart_policy)>(openapi::StringT(OPENAPI_LITERAL(RestartPolicy)), this->restart_policy);
    j.AddMember<decltype(this->auto_remove)>(openapi::StringT(OPENAPI_LITERAL(AutoRemove)), this->auto_remove);
    j.AddMember<decltype(this->volume_driver)>(openapi::StringT(OPENAPI_LITERAL(VolumeDriver)), this->volume_driver);
    j.AddMember<decltype(this->volumes_from)>(openapi::StringT(OPENAPI_LITERAL(VolumesFrom)), this->volumes_from);
    j.AddMember<decltype(this->mounts)>(openapi::StringT(OPENAPI_LITERAL(Mounts)), this->mounts);
    j.AddMember<decltype(this->cap_add)>(openapi::StringT(OPENAPI_LITERAL(CapAdd)), this->cap_add);
    j.AddMember<decltype(this->cap_drop)>(openapi::StringT(OPENAPI_LITERAL(CapDrop)), this->cap_drop);
    j.AddMember<decltype(this->cgroupns_mode)>(openapi::StringT(OPENAPI_LITERAL(CgroupnsMode)), this->cgroupns_mode);
    j.AddMember<decltype(this->dns)>(openapi::StringT(OPENAPI_LITERAL(Dns)), this->dns);
    j.AddMember<decltype(this->dns_options)>(openapi::StringT(OPENAPI_LITERAL(DnsOptions)), this->dns_options);
    j.AddMember<decltype(this->dns_search)>(openapi::StringT(OPENAPI_LITERAL(DnsSearch)), this->dns_search);
    j.AddMember<decltype(this->extra_hosts)>(openapi::StringT(OPENAPI_LITERAL(ExtraHosts)), this->extra_hosts);
    j.AddMember<decltype(this->group_add)>(openapi::StringT(OPENAPI_LITERAL(GroupAdd)), this->group_add);
    j.AddMember<decltype(this->ipc_mode)>(openapi::StringT(OPENAPI_LITERAL(IpcMode)), this->ipc_mode);
    j.AddMember<decltype(this->cgroup)>(openapi::StringT(OPENAPI_LITERAL(Cgroup)), this->cgroup);
    j.AddMember<decltype(this->links)>(openapi::StringT(OPENAPI_LITERAL(Links)), this->links);
    j.AddMember<decltype(this->oom_score_adj)>(openapi::StringT(OPENAPI_LITERAL(OomScoreAdj)), this->oom_score_adj);
    j.AddMember<decltype(this->pid_mode)>(openapi::StringT(OPENAPI_LITERAL(PidMode)), this->pid_mode);
    j.AddMember<decltype(this->privileged)>(openapi::StringT(OPENAPI_LITERAL(Privileged)), this->privileged);
    j.AddMember<decltype(this->publish_all_ports)>(openapi::StringT(OPENAPI_LITERAL(PublishAllPorts)), this->publish_all_ports);
    j.AddMember<decltype(this->readonly_rootfs)>(openapi::StringT(OPENAPI_LITERAL(ReadonlyRootfs)), this->readonly_rootfs);
    j.AddMember<decltype(this->security_opt)>(openapi::StringT(OPENAPI_LITERAL(SecurityOpt)), this->security_opt);
    j.AddMember<decltype(this->storage_opt)>(openapi::StringT(OPENAPI_LITERAL(StorageOpt)), this->storage_opt);
    j.AddMember<decltype(this->tmpfs)>(openapi::StringT(OPENAPI_LITERAL(Tmpfs)), this->tmpfs);
    j.AddMember<decltype(this->uts_mode)>(openapi::StringT(OPENAPI_LITERAL(UTSMode)), this->uts_mode);
    j.AddMember<decltype(this->userns_mode)>(openapi::StringT(OPENAPI_LITERAL(UsernsMode)), this->userns_mode);
    j.AddMember<decltype(this->shm_size)>(openapi::StringT(OPENAPI_LITERAL(ShmSize)), this->shm_size);
    j.AddMember<decltype(this->sysctls)>(openapi::StringT(OPENAPI_LITERAL(Sysctls)), this->sysctls);
    j.AddMember<decltype(this->runtime)>(openapi::StringT(OPENAPI_LITERAL(Runtime)), this->runtime);
    j.AddMember<decltype(this->console_size)>(openapi::StringT(OPENAPI_LITERAL(ConsoleSize)), this->console_size);
    j.AddMember<decltype(this->isolation)>(openapi::StringT(OPENAPI_LITERAL(Isolation)), this->isolation);
    j.AddMember<decltype(this->masked_paths)>(openapi::StringT(OPENAPI_LITERAL(MaskedPaths)), this->masked_paths);
    j.AddMember<decltype(this->readonly_paths)>(openapi::StringT(OPENAPI_LITERAL(ReadonlyPaths)), this->readonly_paths);
}

void HostConfig::FromJSON(const Json & j)
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
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Binds))))
    {
        using V = remove_optional<decltype(this->binds)>::type;
        this->binds = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Binds)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ContainerIDFile))))
    {
        using V = remove_optional<decltype(this->container_id_file)>::type;
        this->container_id_file = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ContainerIDFile)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(LogConfig))))
    {
        using V = remove_optional<decltype(this->log_config)>::type;
        this->log_config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(LogConfig)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NetworkMode))))
    {
        using V = remove_optional<decltype(this->network_mode)>::type;
        this->network_mode = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NetworkMode)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PortBindings))))
    {
        using V = remove_optional<decltype(this->port_bindings)>::type;
        this->port_bindings = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PortBindings)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(RestartPolicy))))
    {
        using V = remove_optional<decltype(this->restart_policy)>::type;
        this->restart_policy = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(RestartPolicy)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(AutoRemove))))
    {
        using V = remove_optional<decltype(this->auto_remove)>::type;
        this->auto_remove = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(AutoRemove)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(VolumeDriver))))
    {
        using V = remove_optional<decltype(this->volume_driver)>::type;
        this->volume_driver = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(VolumeDriver)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(VolumesFrom))))
    {
        using V = remove_optional<decltype(this->volumes_from)>::type;
        this->volumes_from = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(VolumesFrom)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Mounts))))
    {
        using V = remove_optional<decltype(this->mounts)>::type;
        this->mounts = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Mounts)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CapAdd))))
    {
        using V = remove_optional<decltype(this->cap_add)>::type;
        this->cap_add = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CapAdd)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CapDrop))))
    {
        using V = remove_optional<decltype(this->cap_drop)>::type;
        this->cap_drop = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CapDrop)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CgroupnsMode))))
    {
        using V = remove_optional<decltype(this->cgroupns_mode)>::type;
        this->cgroupns_mode = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CgroupnsMode)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Dns))))
    {
        using V = remove_optional<decltype(this->dns)>::type;
        this->dns = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Dns)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DnsOptions))))
    {
        using V = remove_optional<decltype(this->dns_options)>::type;
        this->dns_options = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DnsOptions)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DnsSearch))))
    {
        using V = remove_optional<decltype(this->dns_search)>::type;
        this->dns_search = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DnsSearch)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ExtraHosts))))
    {
        using V = remove_optional<decltype(this->extra_hosts)>::type;
        this->extra_hosts = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ExtraHosts)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(GroupAdd))))
    {
        using V = remove_optional<decltype(this->group_add)>::type;
        this->group_add = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(GroupAdd)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(IpcMode))))
    {
        using V = remove_optional<decltype(this->ipc_mode)>::type;
        this->ipc_mode = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(IpcMode)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Cgroup))))
    {
        using V = remove_optional<decltype(this->cgroup)>::type;
        this->cgroup = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Cgroup)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Links))))
    {
        using V = remove_optional<decltype(this->links)>::type;
        this->links = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Links)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(OomScoreAdj))))
    {
        using V = remove_optional<decltype(this->oom_score_adj)>::type;
        this->oom_score_adj = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(OomScoreAdj)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PidMode))))
    {
        using V = remove_optional<decltype(this->pid_mode)>::type;
        this->pid_mode = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PidMode)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Privileged))))
    {
        using V = remove_optional<decltype(this->privileged)>::type;
        this->privileged = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Privileged)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PublishAllPorts))))
    {
        using V = remove_optional<decltype(this->publish_all_ports)>::type;
        this->publish_all_ports = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PublishAllPorts)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ReadonlyRootfs))))
    {
        using V = remove_optional<decltype(this->readonly_rootfs)>::type;
        this->readonly_rootfs = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ReadonlyRootfs)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SecurityOpt))))
    {
        using V = remove_optional<decltype(this->security_opt)>::type;
        this->security_opt = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SecurityOpt)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(StorageOpt))))
    {
        using V = remove_optional<decltype(this->storage_opt)>::type;
        this->storage_opt = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(StorageOpt)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Tmpfs))))
    {
        using V = remove_optional<decltype(this->tmpfs)>::type;
        this->tmpfs = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Tmpfs)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(UTSMode))))
    {
        using V = remove_optional<decltype(this->uts_mode)>::type;
        this->uts_mode = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(UTSMode)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(UsernsMode))))
    {
        using V = remove_optional<decltype(this->userns_mode)>::type;
        this->userns_mode = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(UsernsMode)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ShmSize))))
    {
        using V = remove_optional<decltype(this->shm_size)>::type;
        this->shm_size = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ShmSize)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Sysctls))))
    {
        using V = remove_optional<decltype(this->sysctls)>::type;
        this->sysctls = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Sysctls)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Runtime))))
    {
        using V = remove_optional<decltype(this->runtime)>::type;
        this->runtime = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Runtime)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ConsoleSize))))
    {
        using V = remove_optional<decltype(this->console_size)>::type;
        this->console_size = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ConsoleSize)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Isolation))))
    {
        using V = remove_optional<decltype(this->isolation)>::type;
        this->isolation = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Isolation)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MaskedPaths))))
    {
        using V = remove_optional<decltype(this->masked_paths)>::type;
        this->masked_paths = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MaskedPaths)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ReadonlyPaths))))
    {
        using V = remove_optional<decltype(this->readonly_paths)>::type;
        this->readonly_paths = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ReadonlyPaths)));
    }
}

