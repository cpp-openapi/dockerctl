/*
 * PluginConfig.cpp
 *
 * The config of a plugin.
 */

#include "PluginConfig.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(PluginConfig, DockerVersion, Description, Documentation, Interface, Entrypoint, WorkDir, User, Network, Linux, PropagatedMount, IpcHost, PidHost, Mounts, Env, Args, rootfs)

void PluginConfig::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->docker_version)>(openapi::StringT(OPENAPI_LITERAL(DockerVersion)), this->docker_version);
    j.AddMember<decltype(this->description)>(openapi::StringT(OPENAPI_LITERAL(Description)), this->description);
    j.AddMember<decltype(this->documentation)>(openapi::StringT(OPENAPI_LITERAL(Documentation)), this->documentation);
    j.AddMember<decltype(this->interface)>(openapi::StringT(OPENAPI_LITERAL(Interface)), this->interface);
    j.AddMember<decltype(this->entrypoint)>(openapi::StringT(OPENAPI_LITERAL(Entrypoint)), this->entrypoint);
    j.AddMember<decltype(this->work_dir)>(openapi::StringT(OPENAPI_LITERAL(WorkDir)), this->work_dir);
    j.AddMember<decltype(this->user)>(openapi::StringT(OPENAPI_LITERAL(User)), this->user);
    j.AddMember<decltype(this->network)>(openapi::StringT(OPENAPI_LITERAL(Network)), this->network);
    j.AddMember<decltype(this->linux)>(openapi::StringT(OPENAPI_LITERAL(Linux)), this->linux);
    j.AddMember<decltype(this->propagated_mount)>(openapi::StringT(OPENAPI_LITERAL(PropagatedMount)), this->propagated_mount);
    j.AddMember<decltype(this->ipc_host)>(openapi::StringT(OPENAPI_LITERAL(IpcHost)), this->ipc_host);
    j.AddMember<decltype(this->pid_host)>(openapi::StringT(OPENAPI_LITERAL(PidHost)), this->pid_host);
    j.AddMember<decltype(this->mounts)>(openapi::StringT(OPENAPI_LITERAL(Mounts)), this->mounts);
    j.AddMember<decltype(this->env)>(openapi::StringT(OPENAPI_LITERAL(Env)), this->env);
    j.AddMember<decltype(this->args)>(openapi::StringT(OPENAPI_LITERAL(Args)), this->args);
    j.AddMember<decltype(this->rootfs)>(openapi::StringT(OPENAPI_LITERAL(rootfs)), this->rootfs);
}

void PluginConfig::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DockerVersion))))
    {
        using V = remove_optional<decltype(this->docker_version)>::type;
        this->docker_version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DockerVersion)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Description))))
    {
        using V = remove_optional<decltype(this->description)>::type;
        this->description = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Description)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Documentation))))
    {
        using V = remove_optional<decltype(this->documentation)>::type;
        this->documentation = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Documentation)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Interface))))
    {
        using V = remove_optional<decltype(this->interface)>::type;
        this->interface = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Interface)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Entrypoint))))
    {
        using V = remove_optional<decltype(this->entrypoint)>::type;
        this->entrypoint = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Entrypoint)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(WorkDir))))
    {
        using V = remove_optional<decltype(this->work_dir)>::type;
        this->work_dir = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(WorkDir)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(User))))
    {
        using V = remove_optional<decltype(this->user)>::type;
        this->user = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(User)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Network))))
    {
        using V = remove_optional<decltype(this->network)>::type;
        this->network = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Network)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Linux))))
    {
        using V = remove_optional<decltype(this->linux)>::type;
        this->linux = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Linux)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PropagatedMount))))
    {
        using V = remove_optional<decltype(this->propagated_mount)>::type;
        this->propagated_mount = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PropagatedMount)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(IpcHost))))
    {
        using V = remove_optional<decltype(this->ipc_host)>::type;
        this->ipc_host = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(IpcHost)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PidHost))))
    {
        using V = remove_optional<decltype(this->pid_host)>::type;
        this->pid_host = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PidHost)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Mounts))))
    {
        using V = remove_optional<decltype(this->mounts)>::type;
        this->mounts = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Mounts)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Env))))
    {
        using V = remove_optional<decltype(this->env)>::type;
        this->env = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Env)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Args))))
    {
        using V = remove_optional<decltype(this->args)>::type;
        this->args = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Args)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(rootfs))))
    {
        using V = remove_optional<decltype(this->rootfs)>::type;
        this->rootfs = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(rootfs)));
    }
}

