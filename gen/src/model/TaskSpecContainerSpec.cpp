/*
 * TaskSpecContainerSpec.cpp
 *
 * Container spec for the service.  &lt;p&gt;&lt;br /&gt;&lt;/p&gt;  &gt; **Note**: ContainerSpec, NetworkAttachmentSpec, and PluginSpec are &gt; mutually exclusive. PluginSpec is only used when the Runtime field &gt; is set to &#x60;plugin&#x60;. NetworkAttachmentSpec is used when the Runtime &gt; field is set to &#x60;attachment&#x60;. 
 */

#include "TaskSpecContainerSpec.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(TaskSpecContainerSpec, Image, Labels, Command, Args, Hostname, Env, Dir, User, Groups, Privileges, TTY, OpenStdin, ReadOnly, Mounts, StopSignal, StopGracePeriod, HealthCheck, Hosts, DNSConfig, Secrets, Configs, Isolation, Init, Sysctls, CapabilityAdd, CapabilityDrop, Ulimits)

void TaskSpecContainerSpec::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->image)>(openapi::StringT(OPENAPI_LITERAL(Image)), this->image);
    j.AddMember<decltype(this->labels)>(openapi::StringT(OPENAPI_LITERAL(Labels)), this->labels);
    j.AddMember<decltype(this->command)>(openapi::StringT(OPENAPI_LITERAL(Command)), this->command);
    j.AddMember<decltype(this->args)>(openapi::StringT(OPENAPI_LITERAL(Args)), this->args);
    j.AddMember<decltype(this->hostname)>(openapi::StringT(OPENAPI_LITERAL(Hostname)), this->hostname);
    j.AddMember<decltype(this->env)>(openapi::StringT(OPENAPI_LITERAL(Env)), this->env);
    j.AddMember<decltype(this->dir)>(openapi::StringT(OPENAPI_LITERAL(Dir)), this->dir);
    j.AddMember<decltype(this->user)>(openapi::StringT(OPENAPI_LITERAL(User)), this->user);
    j.AddMember<decltype(this->groups)>(openapi::StringT(OPENAPI_LITERAL(Groups)), this->groups);
    j.AddMember<decltype(this->privileges)>(openapi::StringT(OPENAPI_LITERAL(Privileges)), this->privileges);
    j.AddMember<decltype(this->tty)>(openapi::StringT(OPENAPI_LITERAL(TTY)), this->tty);
    j.AddMember<decltype(this->open_stdin)>(openapi::StringT(OPENAPI_LITERAL(OpenStdin)), this->open_stdin);
    j.AddMember<decltype(this->read_only)>(openapi::StringT(OPENAPI_LITERAL(ReadOnly)), this->read_only);
    j.AddMember<decltype(this->mounts)>(openapi::StringT(OPENAPI_LITERAL(Mounts)), this->mounts);
    j.AddMember<decltype(this->stop_signal)>(openapi::StringT(OPENAPI_LITERAL(StopSignal)), this->stop_signal);
    j.AddMember<decltype(this->stop_grace_period)>(openapi::StringT(OPENAPI_LITERAL(StopGracePeriod)), this->stop_grace_period);
    j.AddMember<decltype(this->health_check)>(openapi::StringT(OPENAPI_LITERAL(HealthCheck)), this->health_check);
    j.AddMember<decltype(this->hosts)>(openapi::StringT(OPENAPI_LITERAL(Hosts)), this->hosts);
    j.AddMember<decltype(this->dns_config)>(openapi::StringT(OPENAPI_LITERAL(DNSConfig)), this->dns_config);
    j.AddMember<decltype(this->secrets)>(openapi::StringT(OPENAPI_LITERAL(Secrets)), this->secrets);
    j.AddMember<decltype(this->configs)>(openapi::StringT(OPENAPI_LITERAL(Configs)), this->configs);
    j.AddMember<decltype(this->isolation)>(openapi::StringT(OPENAPI_LITERAL(Isolation)), this->isolation);
    j.AddMember<decltype(this->init)>(openapi::StringT(OPENAPI_LITERAL(Init)), this->init);
    j.AddMember<decltype(this->sysctls)>(openapi::StringT(OPENAPI_LITERAL(Sysctls)), this->sysctls);
    j.AddMember<decltype(this->capability_add)>(openapi::StringT(OPENAPI_LITERAL(CapabilityAdd)), this->capability_add);
    j.AddMember<decltype(this->capability_drop)>(openapi::StringT(OPENAPI_LITERAL(CapabilityDrop)), this->capability_drop);
    j.AddMember<decltype(this->ulimits)>(openapi::StringT(OPENAPI_LITERAL(Ulimits)), this->ulimits);
}

void TaskSpecContainerSpec::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Image))))
    {
        using V = remove_optional<decltype(this->image)>::type;
        this->image = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Image)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Labels))))
    {
        using V = remove_optional<decltype(this->labels)>::type;
        this->labels = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Labels)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Command))))
    {
        using V = remove_optional<decltype(this->command)>::type;
        this->command = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Command)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Args))))
    {
        using V = remove_optional<decltype(this->args)>::type;
        this->args = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Args)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Hostname))))
    {
        using V = remove_optional<decltype(this->hostname)>::type;
        this->hostname = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Hostname)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Env))))
    {
        using V = remove_optional<decltype(this->env)>::type;
        this->env = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Env)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Dir))))
    {
        using V = remove_optional<decltype(this->dir)>::type;
        this->dir = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Dir)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(User))))
    {
        using V = remove_optional<decltype(this->user)>::type;
        this->user = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(User)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Groups))))
    {
        using V = remove_optional<decltype(this->groups)>::type;
        this->groups = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Groups)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Privileges))))
    {
        using V = remove_optional<decltype(this->privileges)>::type;
        this->privileges = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Privileges)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(TTY))))
    {
        using V = remove_optional<decltype(this->tty)>::type;
        this->tty = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(TTY)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(OpenStdin))))
    {
        using V = remove_optional<decltype(this->open_stdin)>::type;
        this->open_stdin = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(OpenStdin)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ReadOnly))))
    {
        using V = remove_optional<decltype(this->read_only)>::type;
        this->read_only = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ReadOnly)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Mounts))))
    {
        using V = remove_optional<decltype(this->mounts)>::type;
        this->mounts = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Mounts)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(StopSignal))))
    {
        using V = remove_optional<decltype(this->stop_signal)>::type;
        this->stop_signal = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(StopSignal)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(StopGracePeriod))))
    {
        using V = remove_optional<decltype(this->stop_grace_period)>::type;
        this->stop_grace_period = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(StopGracePeriod)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(HealthCheck))))
    {
        using V = remove_optional<decltype(this->health_check)>::type;
        this->health_check = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(HealthCheck)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Hosts))))
    {
        using V = remove_optional<decltype(this->hosts)>::type;
        this->hosts = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Hosts)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DNSConfig))))
    {
        using V = remove_optional<decltype(this->dns_config)>::type;
        this->dns_config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DNSConfig)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Secrets))))
    {
        using V = remove_optional<decltype(this->secrets)>::type;
        this->secrets = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Secrets)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Configs))))
    {
        using V = remove_optional<decltype(this->configs)>::type;
        this->configs = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Configs)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Isolation))))
    {
        using V = remove_optional<decltype(this->isolation)>::type;
        this->isolation = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Isolation)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Init))))
    {
        using V = remove_optional<decltype(this->init)>::type;
        this->init = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Init)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Sysctls))))
    {
        using V = remove_optional<decltype(this->sysctls)>::type;
        this->sysctls = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Sysctls)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CapabilityAdd))))
    {
        using V = remove_optional<decltype(this->capability_add)>::type;
        this->capability_add = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CapabilityAdd)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CapabilityDrop))))
    {
        using V = remove_optional<decltype(this->capability_drop)>::type;
        this->capability_drop = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CapabilityDrop)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Ulimits))))
    {
        using V = remove_optional<decltype(this->ulimits)>::type;
        this->ulimits = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Ulimits)));
    }
}

