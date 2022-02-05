/*
 * TaskSpec.cpp
 *
 * User modifiable task configuration.
 */

#include "TaskSpec.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(TaskSpec, PluginSpec, ContainerSpec, NetworkAttachmentSpec, Resources, RestartPolicy, Placement, ForceUpdate, Runtime, Networks, LogDriver)

void TaskSpec::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->plugin_spec)>(openapi::StringT(OPENAPI_LITERAL(PluginSpec)), this->plugin_spec);
    j.AddMember<decltype(this->container_spec)>(openapi::StringT(OPENAPI_LITERAL(ContainerSpec)), this->container_spec);
    j.AddMember<decltype(this->network_attachment_spec)>(openapi::StringT(OPENAPI_LITERAL(NetworkAttachmentSpec)), this->network_attachment_spec);
    j.AddMember<decltype(this->resources)>(openapi::StringT(OPENAPI_LITERAL(Resources)), this->resources);
    j.AddMember<decltype(this->restart_policy)>(openapi::StringT(OPENAPI_LITERAL(RestartPolicy)), this->restart_policy);
    j.AddMember<decltype(this->placement)>(openapi::StringT(OPENAPI_LITERAL(Placement)), this->placement);
    j.AddMember<decltype(this->force_update)>(openapi::StringT(OPENAPI_LITERAL(ForceUpdate)), this->force_update);
    j.AddMember<decltype(this->runtime)>(openapi::StringT(OPENAPI_LITERAL(Runtime)), this->runtime);
    j.AddMember<decltype(this->networks)>(openapi::StringT(OPENAPI_LITERAL(Networks)), this->networks);
    j.AddMember<decltype(this->log_driver)>(openapi::StringT(OPENAPI_LITERAL(LogDriver)), this->log_driver);
}

void TaskSpec::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PluginSpec))))
    {
        using V = remove_optional<decltype(this->plugin_spec)>::type;
        this->plugin_spec = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PluginSpec)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ContainerSpec))))
    {
        using V = remove_optional<decltype(this->container_spec)>::type;
        this->container_spec = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ContainerSpec)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NetworkAttachmentSpec))))
    {
        using V = remove_optional<decltype(this->network_attachment_spec)>::type;
        this->network_attachment_spec = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NetworkAttachmentSpec)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Resources))))
    {
        using V = remove_optional<decltype(this->resources)>::type;
        this->resources = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Resources)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(RestartPolicy))))
    {
        using V = remove_optional<decltype(this->restart_policy)>::type;
        this->restart_policy = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(RestartPolicy)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Placement))))
    {
        using V = remove_optional<decltype(this->placement)>::type;
        this->placement = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Placement)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ForceUpdate))))
    {
        using V = remove_optional<decltype(this->force_update)>::type;
        this->force_update = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ForceUpdate)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Runtime))))
    {
        using V = remove_optional<decltype(this->runtime)>::type;
        this->runtime = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Runtime)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Networks))))
    {
        using V = remove_optional<decltype(this->networks)>::type;
        this->networks = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Networks)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(LogDriver))))
    {
        using V = remove_optional<decltype(this->log_driver)>::type;
        this->log_driver = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(LogDriver)));
    }
}

