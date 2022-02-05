/*
 * ContainerInspectResponse.cpp
 *
 * 
 */

#include "ContainerInspectResponse.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ContainerInspectResponse, Id, Created, Path, Args, State, Image, ResolvConfPath, HostnamePath, HostsPath, LogPath, Name, RestartCount, Driver, Platform, MountLabel, ProcessLabel, AppArmorProfile, ExecIDs, HostConfig, GraphDriver, SizeRw, SizeRootFs, Mounts, Config, NetworkSettings)

void ContainerInspectResponse::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(Id)), this->id);
    j.AddMember<decltype(this->created)>(openapi::StringT(OPENAPI_LITERAL(Created)), this->created);
    j.AddMember<decltype(this->path)>(openapi::StringT(OPENAPI_LITERAL(Path)), this->path);
    j.AddMember<decltype(this->args)>(openapi::StringT(OPENAPI_LITERAL(Args)), this->args);
    j.AddMember<decltype(this->state)>(openapi::StringT(OPENAPI_LITERAL(State)), this->state);
    j.AddMember<decltype(this->image)>(openapi::StringT(OPENAPI_LITERAL(Image)), this->image);
    j.AddMember<decltype(this->resolv_conf_path)>(openapi::StringT(OPENAPI_LITERAL(ResolvConfPath)), this->resolv_conf_path);
    j.AddMember<decltype(this->hostname_path)>(openapi::StringT(OPENAPI_LITERAL(HostnamePath)), this->hostname_path);
    j.AddMember<decltype(this->hosts_path)>(openapi::StringT(OPENAPI_LITERAL(HostsPath)), this->hosts_path);
    j.AddMember<decltype(this->log_path)>(openapi::StringT(OPENAPI_LITERAL(LogPath)), this->log_path);
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->restart_count)>(openapi::StringT(OPENAPI_LITERAL(RestartCount)), this->restart_count);
    j.AddMember<decltype(this->driver)>(openapi::StringT(OPENAPI_LITERAL(Driver)), this->driver);
    j.AddMember<decltype(this->platform)>(openapi::StringT(OPENAPI_LITERAL(Platform)), this->platform);
    j.AddMember<decltype(this->mount_label)>(openapi::StringT(OPENAPI_LITERAL(MountLabel)), this->mount_label);
    j.AddMember<decltype(this->process_label)>(openapi::StringT(OPENAPI_LITERAL(ProcessLabel)), this->process_label);
    j.AddMember<decltype(this->app_armor_profile)>(openapi::StringT(OPENAPI_LITERAL(AppArmorProfile)), this->app_armor_profile);
    j.AddMember<decltype(this->exec_ids)>(openapi::StringT(OPENAPI_LITERAL(ExecIDs)), this->exec_ids);
    j.AddMember<decltype(this->host_config)>(openapi::StringT(OPENAPI_LITERAL(HostConfig)), this->host_config);
    j.AddMember<decltype(this->graph_driver)>(openapi::StringT(OPENAPI_LITERAL(GraphDriver)), this->graph_driver);
    j.AddMember<decltype(this->size_rw)>(openapi::StringT(OPENAPI_LITERAL(SizeRw)), this->size_rw);
    j.AddMember<decltype(this->size_root_fs)>(openapi::StringT(OPENAPI_LITERAL(SizeRootFs)), this->size_root_fs);
    j.AddMember<decltype(this->mounts)>(openapi::StringT(OPENAPI_LITERAL(Mounts)), this->mounts);
    j.AddMember<decltype(this->config)>(openapi::StringT(OPENAPI_LITERAL(Config)), this->config);
    j.AddMember<decltype(this->network_settings)>(openapi::StringT(OPENAPI_LITERAL(NetworkSettings)), this->network_settings);
}

void ContainerInspectResponse::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Id))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Id)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Created))))
    {
        using V = remove_optional<decltype(this->created)>::type;
        this->created = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Created)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Path))))
    {
        using V = remove_optional<decltype(this->path)>::type;
        this->path = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Path)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Args))))
    {
        using V = remove_optional<decltype(this->args)>::type;
        this->args = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Args)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(State))))
    {
        using V = remove_optional<decltype(this->state)>::type;
        this->state = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(State)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Image))))
    {
        using V = remove_optional<decltype(this->image)>::type;
        this->image = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Image)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ResolvConfPath))))
    {
        using V = remove_optional<decltype(this->resolv_conf_path)>::type;
        this->resolv_conf_path = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ResolvConfPath)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(HostnamePath))))
    {
        using V = remove_optional<decltype(this->hostname_path)>::type;
        this->hostname_path = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(HostnamePath)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(HostsPath))))
    {
        using V = remove_optional<decltype(this->hosts_path)>::type;
        this->hosts_path = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(HostsPath)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(LogPath))))
    {
        using V = remove_optional<decltype(this->log_path)>::type;
        this->log_path = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(LogPath)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(RestartCount))))
    {
        using V = remove_optional<decltype(this->restart_count)>::type;
        this->restart_count = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(RestartCount)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Driver))))
    {
        using V = remove_optional<decltype(this->driver)>::type;
        this->driver = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Driver)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Platform))))
    {
        using V = remove_optional<decltype(this->platform)>::type;
        this->platform = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Platform)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MountLabel))))
    {
        using V = remove_optional<decltype(this->mount_label)>::type;
        this->mount_label = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MountLabel)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ProcessLabel))))
    {
        using V = remove_optional<decltype(this->process_label)>::type;
        this->process_label = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ProcessLabel)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(AppArmorProfile))))
    {
        using V = remove_optional<decltype(this->app_armor_profile)>::type;
        this->app_armor_profile = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(AppArmorProfile)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ExecIDs))))
    {
        using V = remove_optional<decltype(this->exec_ids)>::type;
        this->exec_ids = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ExecIDs)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(HostConfig))))
    {
        using V = remove_optional<decltype(this->host_config)>::type;
        this->host_config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(HostConfig)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(GraphDriver))))
    {
        using V = remove_optional<decltype(this->graph_driver)>::type;
        this->graph_driver = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(GraphDriver)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SizeRw))))
    {
        using V = remove_optional<decltype(this->size_rw)>::type;
        this->size_rw = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SizeRw)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SizeRootFs))))
    {
        using V = remove_optional<decltype(this->size_root_fs)>::type;
        this->size_root_fs = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SizeRootFs)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Mounts))))
    {
        using V = remove_optional<decltype(this->mounts)>::type;
        this->mounts = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Mounts)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Config))))
    {
        using V = remove_optional<decltype(this->config)>::type;
        this->config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Config)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NetworkSettings))))
    {
        using V = remove_optional<decltype(this->network_settings)>::type;
        this->network_settings = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NetworkSettings)));
    }
}

