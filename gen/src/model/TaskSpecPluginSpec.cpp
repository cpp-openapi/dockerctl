/*
 * TaskSpecPluginSpec.cpp
 *
 * Plugin spec for the service.  *(Experimental release only.)*  &lt;p&gt;&lt;br /&gt;&lt;/p&gt;  &gt; **Note**: ContainerSpec, NetworkAttachmentSpec, and PluginSpec are &gt; mutually exclusive. PluginSpec is only used when the Runtime field &gt; is set to &#x60;plugin&#x60;. NetworkAttachmentSpec is used when the Runtime &gt; field is set to &#x60;attachment&#x60;. 
 */

#include "TaskSpecPluginSpec.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(TaskSpecPluginSpec, Name, Remote, Disabled, PluginPrivilege)

void TaskSpecPluginSpec::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->remote)>(openapi::StringT(OPENAPI_LITERAL(Remote)), this->remote);
    j.AddMember<decltype(this->disabled)>(openapi::StringT(OPENAPI_LITERAL(Disabled)), this->disabled);
    j.AddMember<decltype(this->plugin_privilege)>(openapi::StringT(OPENAPI_LITERAL(PluginPrivilege)), this->plugin_privilege);
}

void TaskSpecPluginSpec::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Remote))))
    {
        using V = remove_optional<decltype(this->remote)>::type;
        this->remote = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Remote)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Disabled))))
    {
        using V = remove_optional<decltype(this->disabled)>::type;
        this->disabled = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Disabled)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PluginPrivilege))))
    {
        using V = remove_optional<decltype(this->plugin_privilege)>::type;
        this->plugin_privilege = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PluginPrivilege)));
    }
}

