/*
 * ContainerConfig.cpp
 *
 * Configuration for a container that is portable between hosts
 */

#include "ContainerConfig.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ContainerConfig, Hostname, Domainname, User, AttachStdin, AttachStdout, AttachStderr, ExposedPorts, Tty, OpenStdin, StdinOnce, Env, Cmd, Healthcheck, ArgsEscaped, Image, Volumes, WorkingDir, Entrypoint, NetworkDisabled, MacAddress, OnBuild, Labels, StopSignal, StopTimeout, Shell)

void ContainerConfig::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->hostname)>(openapi::StringT(OPENAPI_LITERAL(Hostname)), this->hostname);
    j.AddMember<decltype(this->domainname)>(openapi::StringT(OPENAPI_LITERAL(Domainname)), this->domainname);
    j.AddMember<decltype(this->user)>(openapi::StringT(OPENAPI_LITERAL(User)), this->user);
    j.AddMember<decltype(this->attach_stdin)>(openapi::StringT(OPENAPI_LITERAL(AttachStdin)), this->attach_stdin);
    j.AddMember<decltype(this->attach_stdout)>(openapi::StringT(OPENAPI_LITERAL(AttachStdout)), this->attach_stdout);
    j.AddMember<decltype(this->attach_stderr)>(openapi::StringT(OPENAPI_LITERAL(AttachStderr)), this->attach_stderr);
    j.AddMember<decltype(this->exposed_ports)>(openapi::StringT(OPENAPI_LITERAL(ExposedPorts)), this->exposed_ports);
    j.AddMember<decltype(this->tty)>(openapi::StringT(OPENAPI_LITERAL(Tty)), this->tty);
    j.AddMember<decltype(this->open_stdin)>(openapi::StringT(OPENAPI_LITERAL(OpenStdin)), this->open_stdin);
    j.AddMember<decltype(this->stdin_once)>(openapi::StringT(OPENAPI_LITERAL(StdinOnce)), this->stdin_once);
    j.AddMember<decltype(this->env)>(openapi::StringT(OPENAPI_LITERAL(Env)), this->env);
    j.AddMember<decltype(this->cmd)>(openapi::StringT(OPENAPI_LITERAL(Cmd)), this->cmd);
    j.AddMember<decltype(this->healthcheck)>(openapi::StringT(OPENAPI_LITERAL(Healthcheck)), this->healthcheck);
    j.AddMember<decltype(this->args_escaped)>(openapi::StringT(OPENAPI_LITERAL(ArgsEscaped)), this->args_escaped);
    j.AddMember<decltype(this->image)>(openapi::StringT(OPENAPI_LITERAL(Image)), this->image);
    j.AddMember<decltype(this->volumes)>(openapi::StringT(OPENAPI_LITERAL(Volumes)), this->volumes);
    j.AddMember<decltype(this->working_dir)>(openapi::StringT(OPENAPI_LITERAL(WorkingDir)), this->working_dir);
    j.AddMember<decltype(this->entrypoint)>(openapi::StringT(OPENAPI_LITERAL(Entrypoint)), this->entrypoint);
    j.AddMember<decltype(this->network_disabled)>(openapi::StringT(OPENAPI_LITERAL(NetworkDisabled)), this->network_disabled);
    j.AddMember<decltype(this->mac_address)>(openapi::StringT(OPENAPI_LITERAL(MacAddress)), this->mac_address);
    j.AddMember<decltype(this->on_build)>(openapi::StringT(OPENAPI_LITERAL(OnBuild)), this->on_build);
    j.AddMember<decltype(this->labels)>(openapi::StringT(OPENAPI_LITERAL(Labels)), this->labels);
    j.AddMember<decltype(this->stop_signal)>(openapi::StringT(OPENAPI_LITERAL(StopSignal)), this->stop_signal);
    j.AddMember<decltype(this->stop_timeout)>(openapi::StringT(OPENAPI_LITERAL(StopTimeout)), this->stop_timeout);
    j.AddMember<decltype(this->shell)>(openapi::StringT(OPENAPI_LITERAL(Shell)), this->shell);
}

void ContainerConfig::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Hostname))))
    {
        using V = remove_optional<decltype(this->hostname)>::type;
        this->hostname = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Hostname)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Domainname))))
    {
        using V = remove_optional<decltype(this->domainname)>::type;
        this->domainname = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Domainname)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(User))))
    {
        using V = remove_optional<decltype(this->user)>::type;
        this->user = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(User)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(AttachStdin))))
    {
        using V = remove_optional<decltype(this->attach_stdin)>::type;
        this->attach_stdin = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(AttachStdin)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(AttachStdout))))
    {
        using V = remove_optional<decltype(this->attach_stdout)>::type;
        this->attach_stdout = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(AttachStdout)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(AttachStderr))))
    {
        using V = remove_optional<decltype(this->attach_stderr)>::type;
        this->attach_stderr = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(AttachStderr)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ExposedPorts))))
    {
        using V = remove_optional<decltype(this->exposed_ports)>::type;
        this->exposed_ports = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ExposedPorts)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Tty))))
    {
        using V = remove_optional<decltype(this->tty)>::type;
        this->tty = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Tty)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(OpenStdin))))
    {
        using V = remove_optional<decltype(this->open_stdin)>::type;
        this->open_stdin = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(OpenStdin)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(StdinOnce))))
    {
        using V = remove_optional<decltype(this->stdin_once)>::type;
        this->stdin_once = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(StdinOnce)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Env))))
    {
        using V = remove_optional<decltype(this->env)>::type;
        this->env = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Env)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Cmd))))
    {
        using V = remove_optional<decltype(this->cmd)>::type;
        this->cmd = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Cmd)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Healthcheck))))
    {
        using V = remove_optional<decltype(this->healthcheck)>::type;
        this->healthcheck = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Healthcheck)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ArgsEscaped))))
    {
        using V = remove_optional<decltype(this->args_escaped)>::type;
        this->args_escaped = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ArgsEscaped)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Image))))
    {
        using V = remove_optional<decltype(this->image)>::type;
        this->image = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Image)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Volumes))))
    {
        using V = remove_optional<decltype(this->volumes)>::type;
        this->volumes = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Volumes)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(WorkingDir))))
    {
        using V = remove_optional<decltype(this->working_dir)>::type;
        this->working_dir = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(WorkingDir)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Entrypoint))))
    {
        using V = remove_optional<decltype(this->entrypoint)>::type;
        this->entrypoint = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Entrypoint)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NetworkDisabled))))
    {
        using V = remove_optional<decltype(this->network_disabled)>::type;
        this->network_disabled = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NetworkDisabled)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MacAddress))))
    {
        using V = remove_optional<decltype(this->mac_address)>::type;
        this->mac_address = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MacAddress)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(OnBuild))))
    {
        using V = remove_optional<decltype(this->on_build)>::type;
        this->on_build = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(OnBuild)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Labels))))
    {
        using V = remove_optional<decltype(this->labels)>::type;
        this->labels = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Labels)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(StopSignal))))
    {
        using V = remove_optional<decltype(this->stop_signal)>::type;
        this->stop_signal = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(StopSignal)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(StopTimeout))))
    {
        using V = remove_optional<decltype(this->stop_timeout)>::type;
        this->stop_timeout = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(StopTimeout)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Shell))))
    {
        using V = remove_optional<decltype(this->shell)>::type;
        this->shell = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Shell)));
    }
}

