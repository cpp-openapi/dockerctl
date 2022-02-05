/*
 * SystemInfo.cpp
 *
 * 
 */

#include "SystemInfo.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(SystemInfo, ID, Containers, ContainersRunning, ContainersPaused, ContainersStopped, Images, Driver, DriverStatus, DockerRootDir, Plugins, MemoryLimit, SwapLimit, KernelMemory, CpuCfsPeriod, CpuCfsQuota, CPUShares, CPUSet, PidsLimit, OomKillDisable, IPv4Forwarding, BridgeNfIptables, BridgeNfIp6tables, Debug, NFd, NGoroutines, SystemTime, LoggingDriver, CgroupDriver, CgroupVersion, NEventsListener, KernelVersion, OperatingSystem, OSVersion, OSType, Architecture, NCPU, MemTotal, IndexServerAddress, RegistryConfig, GenericResources, HttpProxy, HttpsProxy, NoProxy, Name, Labels, ExperimentalBuild, ServerVersion, ClusterStore, ClusterAdvertise, Runtimes, DefaultRuntime, Swarm, LiveRestoreEnabled, Isolation, InitBinary, ContainerdCommit, RuncCommit, InitCommit, SecurityOptions, ProductLicense, DefaultAddressPools, Warnings)

void SystemInfo::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(ID)), this->id);
    j.AddMember<decltype(this->containers)>(openapi::StringT(OPENAPI_LITERAL(Containers)), this->containers);
    j.AddMember<decltype(this->containers_running)>(openapi::StringT(OPENAPI_LITERAL(ContainersRunning)), this->containers_running);
    j.AddMember<decltype(this->containers_paused)>(openapi::StringT(OPENAPI_LITERAL(ContainersPaused)), this->containers_paused);
    j.AddMember<decltype(this->containers_stopped)>(openapi::StringT(OPENAPI_LITERAL(ContainersStopped)), this->containers_stopped);
    j.AddMember<decltype(this->images)>(openapi::StringT(OPENAPI_LITERAL(Images)), this->images);
    j.AddMember<decltype(this->driver)>(openapi::StringT(OPENAPI_LITERAL(Driver)), this->driver);
    j.AddMember<decltype(this->driver_status)>(openapi::StringT(OPENAPI_LITERAL(DriverStatus)), this->driver_status);
    j.AddMember<decltype(this->docker_root_dir)>(openapi::StringT(OPENAPI_LITERAL(DockerRootDir)), this->docker_root_dir);
    j.AddMember<decltype(this->plugins)>(openapi::StringT(OPENAPI_LITERAL(Plugins)), this->plugins);
    j.AddMember<decltype(this->memory_limit)>(openapi::StringT(OPENAPI_LITERAL(MemoryLimit)), this->memory_limit);
    j.AddMember<decltype(this->swap_limit)>(openapi::StringT(OPENAPI_LITERAL(SwapLimit)), this->swap_limit);
    j.AddMember<decltype(this->kernel_memory)>(openapi::StringT(OPENAPI_LITERAL(KernelMemory)), this->kernel_memory);
    j.AddMember<decltype(this->cpu_cfs_period)>(openapi::StringT(OPENAPI_LITERAL(CpuCfsPeriod)), this->cpu_cfs_period);
    j.AddMember<decltype(this->cpu_cfs_quota)>(openapi::StringT(OPENAPI_LITERAL(CpuCfsQuota)), this->cpu_cfs_quota);
    j.AddMember<decltype(this->cpu_shares)>(openapi::StringT(OPENAPI_LITERAL(CPUShares)), this->cpu_shares);
    j.AddMember<decltype(this->cpu_set)>(openapi::StringT(OPENAPI_LITERAL(CPUSet)), this->cpu_set);
    j.AddMember<decltype(this->pids_limit)>(openapi::StringT(OPENAPI_LITERAL(PidsLimit)), this->pids_limit);
    j.AddMember<decltype(this->oom_kill_disable)>(openapi::StringT(OPENAPI_LITERAL(OomKillDisable)), this->oom_kill_disable);
    j.AddMember<decltype(this->ipv4_forwarding)>(openapi::StringT(OPENAPI_LITERAL(IPv4Forwarding)), this->ipv4_forwarding);
    j.AddMember<decltype(this->bridge_nf_iptables)>(openapi::StringT(OPENAPI_LITERAL(BridgeNfIptables)), this->bridge_nf_iptables);
    j.AddMember<decltype(this->bridge_nf_ip6tables)>(openapi::StringT(OPENAPI_LITERAL(BridgeNfIp6tables)), this->bridge_nf_ip6tables);
    j.AddMember<decltype(this->debug)>(openapi::StringT(OPENAPI_LITERAL(Debug)), this->debug);
    j.AddMember<decltype(this->nfd)>(openapi::StringT(OPENAPI_LITERAL(NFd)), this->nfd);
    j.AddMember<decltype(this->n_goroutines)>(openapi::StringT(OPENAPI_LITERAL(NGoroutines)), this->n_goroutines);
    j.AddMember<decltype(this->system_time)>(openapi::StringT(OPENAPI_LITERAL(SystemTime)), this->system_time);
    j.AddMember<decltype(this->logging_driver)>(openapi::StringT(OPENAPI_LITERAL(LoggingDriver)), this->logging_driver);
    j.AddMember<decltype(this->cgroup_driver)>(openapi::StringT(OPENAPI_LITERAL(CgroupDriver)), this->cgroup_driver);
    j.AddMember<decltype(this->cgroup_version)>(openapi::StringT(OPENAPI_LITERAL(CgroupVersion)), this->cgroup_version);
    j.AddMember<decltype(this->n_events_listener)>(openapi::StringT(OPENAPI_LITERAL(NEventsListener)), this->n_events_listener);
    j.AddMember<decltype(this->kernel_version)>(openapi::StringT(OPENAPI_LITERAL(KernelVersion)), this->kernel_version);
    j.AddMember<decltype(this->operating_system)>(openapi::StringT(OPENAPI_LITERAL(OperatingSystem)), this->operating_system);
    j.AddMember<decltype(this->os_version)>(openapi::StringT(OPENAPI_LITERAL(OSVersion)), this->os_version);
    j.AddMember<decltype(this->os_type)>(openapi::StringT(OPENAPI_LITERAL(OSType)), this->os_type);
    j.AddMember<decltype(this->architecture)>(openapi::StringT(OPENAPI_LITERAL(Architecture)), this->architecture);
    j.AddMember<decltype(this->ncpu)>(openapi::StringT(OPENAPI_LITERAL(NCPU)), this->ncpu);
    j.AddMember<decltype(this->mem_total)>(openapi::StringT(OPENAPI_LITERAL(MemTotal)), this->mem_total);
    j.AddMember<decltype(this->index_server_address)>(openapi::StringT(OPENAPI_LITERAL(IndexServerAddress)), this->index_server_address);
    j.AddMember<decltype(this->registry_config)>(openapi::StringT(OPENAPI_LITERAL(RegistryConfig)), this->registry_config);
    j.AddMember<decltype(this->generic_resources)>(openapi::StringT(OPENAPI_LITERAL(GenericResources)), this->generic_resources);
    j.AddMember<decltype(this->http_proxy)>(openapi::StringT(OPENAPI_LITERAL(HttpProxy)), this->http_proxy);
    j.AddMember<decltype(this->https_proxy)>(openapi::StringT(OPENAPI_LITERAL(HttpsProxy)), this->https_proxy);
    j.AddMember<decltype(this->no_proxy)>(openapi::StringT(OPENAPI_LITERAL(NoProxy)), this->no_proxy);
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->labels)>(openapi::StringT(OPENAPI_LITERAL(Labels)), this->labels);
    j.AddMember<decltype(this->experimental_build)>(openapi::StringT(OPENAPI_LITERAL(ExperimentalBuild)), this->experimental_build);
    j.AddMember<decltype(this->server_version)>(openapi::StringT(OPENAPI_LITERAL(ServerVersion)), this->server_version);
    j.AddMember<decltype(this->cluster_store)>(openapi::StringT(OPENAPI_LITERAL(ClusterStore)), this->cluster_store);
    j.AddMember<decltype(this->cluster_advertise)>(openapi::StringT(OPENAPI_LITERAL(ClusterAdvertise)), this->cluster_advertise);
    j.AddMember<decltype(this->runtimes)>(openapi::StringT(OPENAPI_LITERAL(Runtimes)), this->runtimes);
    j.AddMember<decltype(this->default_runtime)>(openapi::StringT(OPENAPI_LITERAL(DefaultRuntime)), this->default_runtime);
    j.AddMember<decltype(this->swarm)>(openapi::StringT(OPENAPI_LITERAL(Swarm)), this->swarm);
    j.AddMember<decltype(this->live_restore_enabled)>(openapi::StringT(OPENAPI_LITERAL(LiveRestoreEnabled)), this->live_restore_enabled);
    j.AddMember<decltype(this->isolation)>(openapi::StringT(OPENAPI_LITERAL(Isolation)), this->isolation);
    j.AddMember<decltype(this->init_binary)>(openapi::StringT(OPENAPI_LITERAL(InitBinary)), this->init_binary);
    j.AddMember<decltype(this->containerd_commit)>(openapi::StringT(OPENAPI_LITERAL(ContainerdCommit)), this->containerd_commit);
    j.AddMember<decltype(this->runc_commit)>(openapi::StringT(OPENAPI_LITERAL(RuncCommit)), this->runc_commit);
    j.AddMember<decltype(this->init_commit)>(openapi::StringT(OPENAPI_LITERAL(InitCommit)), this->init_commit);
    j.AddMember<decltype(this->security_options)>(openapi::StringT(OPENAPI_LITERAL(SecurityOptions)), this->security_options);
    j.AddMember<decltype(this->product_license)>(openapi::StringT(OPENAPI_LITERAL(ProductLicense)), this->product_license);
    j.AddMember<decltype(this->default_address_pools)>(openapi::StringT(OPENAPI_LITERAL(DefaultAddressPools)), this->default_address_pools);
    j.AddMember<decltype(this->warnings)>(openapi::StringT(OPENAPI_LITERAL(Warnings)), this->warnings);
}

void SystemInfo::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ID))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Containers))))
    {
        using V = remove_optional<decltype(this->containers)>::type;
        this->containers = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Containers)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ContainersRunning))))
    {
        using V = remove_optional<decltype(this->containers_running)>::type;
        this->containers_running = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ContainersRunning)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ContainersPaused))))
    {
        using V = remove_optional<decltype(this->containers_paused)>::type;
        this->containers_paused = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ContainersPaused)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ContainersStopped))))
    {
        using V = remove_optional<decltype(this->containers_stopped)>::type;
        this->containers_stopped = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ContainersStopped)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Images))))
    {
        using V = remove_optional<decltype(this->images)>::type;
        this->images = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Images)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Driver))))
    {
        using V = remove_optional<decltype(this->driver)>::type;
        this->driver = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Driver)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DriverStatus))))
    {
        using V = remove_optional<decltype(this->driver_status)>::type;
        this->driver_status = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DriverStatus)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DockerRootDir))))
    {
        using V = remove_optional<decltype(this->docker_root_dir)>::type;
        this->docker_root_dir = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DockerRootDir)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Plugins))))
    {
        using V = remove_optional<decltype(this->plugins)>::type;
        this->plugins = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Plugins)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MemoryLimit))))
    {
        using V = remove_optional<decltype(this->memory_limit)>::type;
        this->memory_limit = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MemoryLimit)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SwapLimit))))
    {
        using V = remove_optional<decltype(this->swap_limit)>::type;
        this->swap_limit = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SwapLimit)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(KernelMemory))))
    {
        using V = remove_optional<decltype(this->kernel_memory)>::type;
        this->kernel_memory = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(KernelMemory)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CpuCfsPeriod))))
    {
        using V = remove_optional<decltype(this->cpu_cfs_period)>::type;
        this->cpu_cfs_period = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CpuCfsPeriod)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CpuCfsQuota))))
    {
        using V = remove_optional<decltype(this->cpu_cfs_quota)>::type;
        this->cpu_cfs_quota = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CpuCfsQuota)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CPUShares))))
    {
        using V = remove_optional<decltype(this->cpu_shares)>::type;
        this->cpu_shares = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CPUShares)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CPUSet))))
    {
        using V = remove_optional<decltype(this->cpu_set)>::type;
        this->cpu_set = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CPUSet)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PidsLimit))))
    {
        using V = remove_optional<decltype(this->pids_limit)>::type;
        this->pids_limit = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PidsLimit)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(OomKillDisable))))
    {
        using V = remove_optional<decltype(this->oom_kill_disable)>::type;
        this->oom_kill_disable = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(OomKillDisable)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(IPv4Forwarding))))
    {
        using V = remove_optional<decltype(this->ipv4_forwarding)>::type;
        this->ipv4_forwarding = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(IPv4Forwarding)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(BridgeNfIptables))))
    {
        using V = remove_optional<decltype(this->bridge_nf_iptables)>::type;
        this->bridge_nf_iptables = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(BridgeNfIptables)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(BridgeNfIp6tables))))
    {
        using V = remove_optional<decltype(this->bridge_nf_ip6tables)>::type;
        this->bridge_nf_ip6tables = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(BridgeNfIp6tables)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Debug))))
    {
        using V = remove_optional<decltype(this->debug)>::type;
        this->debug = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Debug)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NFd))))
    {
        using V = remove_optional<decltype(this->nfd)>::type;
        this->nfd = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NFd)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NGoroutines))))
    {
        using V = remove_optional<decltype(this->n_goroutines)>::type;
        this->n_goroutines = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NGoroutines)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SystemTime))))
    {
        using V = remove_optional<decltype(this->system_time)>::type;
        this->system_time = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SystemTime)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(LoggingDriver))))
    {
        using V = remove_optional<decltype(this->logging_driver)>::type;
        this->logging_driver = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(LoggingDriver)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CgroupDriver))))
    {
        using V = remove_optional<decltype(this->cgroup_driver)>::type;
        this->cgroup_driver = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CgroupDriver)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CgroupVersion))))
    {
        using V = remove_optional<decltype(this->cgroup_version)>::type;
        this->cgroup_version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CgroupVersion)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NEventsListener))))
    {
        using V = remove_optional<decltype(this->n_events_listener)>::type;
        this->n_events_listener = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NEventsListener)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(KernelVersion))))
    {
        using V = remove_optional<decltype(this->kernel_version)>::type;
        this->kernel_version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(KernelVersion)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(OperatingSystem))))
    {
        using V = remove_optional<decltype(this->operating_system)>::type;
        this->operating_system = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(OperatingSystem)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(OSVersion))))
    {
        using V = remove_optional<decltype(this->os_version)>::type;
        this->os_version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(OSVersion)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(OSType))))
    {
        using V = remove_optional<decltype(this->os_type)>::type;
        this->os_type = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(OSType)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Architecture))))
    {
        using V = remove_optional<decltype(this->architecture)>::type;
        this->architecture = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Architecture)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NCPU))))
    {
        using V = remove_optional<decltype(this->ncpu)>::type;
        this->ncpu = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NCPU)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MemTotal))))
    {
        using V = remove_optional<decltype(this->mem_total)>::type;
        this->mem_total = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MemTotal)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(IndexServerAddress))))
    {
        using V = remove_optional<decltype(this->index_server_address)>::type;
        this->index_server_address = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(IndexServerAddress)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(RegistryConfig))))
    {
        using V = remove_optional<decltype(this->registry_config)>::type;
        this->registry_config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(RegistryConfig)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(GenericResources))))
    {
        using V = remove_optional<decltype(this->generic_resources)>::type;
        this->generic_resources = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(GenericResources)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(HttpProxy))))
    {
        using V = remove_optional<decltype(this->http_proxy)>::type;
        this->http_proxy = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(HttpProxy)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(HttpsProxy))))
    {
        using V = remove_optional<decltype(this->https_proxy)>::type;
        this->https_proxy = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(HttpsProxy)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NoProxy))))
    {
        using V = remove_optional<decltype(this->no_proxy)>::type;
        this->no_proxy = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NoProxy)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Labels))))
    {
        using V = remove_optional<decltype(this->labels)>::type;
        this->labels = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Labels)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ExperimentalBuild))))
    {
        using V = remove_optional<decltype(this->experimental_build)>::type;
        this->experimental_build = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ExperimentalBuild)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ServerVersion))))
    {
        using V = remove_optional<decltype(this->server_version)>::type;
        this->server_version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ServerVersion)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ClusterStore))))
    {
        using V = remove_optional<decltype(this->cluster_store)>::type;
        this->cluster_store = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ClusterStore)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ClusterAdvertise))))
    {
        using V = remove_optional<decltype(this->cluster_advertise)>::type;
        this->cluster_advertise = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ClusterAdvertise)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Runtimes))))
    {
        using V = remove_optional<decltype(this->runtimes)>::type;
        this->runtimes = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Runtimes)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DefaultRuntime))))
    {
        using V = remove_optional<decltype(this->default_runtime)>::type;
        this->default_runtime = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DefaultRuntime)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Swarm))))
    {
        using V = remove_optional<decltype(this->swarm)>::type;
        this->swarm = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Swarm)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(LiveRestoreEnabled))))
    {
        using V = remove_optional<decltype(this->live_restore_enabled)>::type;
        this->live_restore_enabled = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(LiveRestoreEnabled)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Isolation))))
    {
        using V = remove_optional<decltype(this->isolation)>::type;
        this->isolation = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Isolation)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(InitBinary))))
    {
        using V = remove_optional<decltype(this->init_binary)>::type;
        this->init_binary = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(InitBinary)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ContainerdCommit))))
    {
        using V = remove_optional<decltype(this->containerd_commit)>::type;
        this->containerd_commit = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ContainerdCommit)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(RuncCommit))))
    {
        using V = remove_optional<decltype(this->runc_commit)>::type;
        this->runc_commit = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(RuncCommit)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(InitCommit))))
    {
        using V = remove_optional<decltype(this->init_commit)>::type;
        this->init_commit = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(InitCommit)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SecurityOptions))))
    {
        using V = remove_optional<decltype(this->security_options)>::type;
        this->security_options = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SecurityOptions)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ProductLicense))))
    {
        using V = remove_optional<decltype(this->product_license)>::type;
        this->product_license = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ProductLicense)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DefaultAddressPools))))
    {
        using V = remove_optional<decltype(this->default_address_pools)>::type;
        this->default_address_pools = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DefaultAddressPools)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Warnings))))
    {
        using V = remove_optional<decltype(this->warnings)>::type;
        this->warnings = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Warnings)));
    }
}

