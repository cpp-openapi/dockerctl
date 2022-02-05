/*
 * TaskSpecNetworkAttachmentSpec.cpp
 *
 * Read-only spec type for non-swarm containers attached to swarm overlay networks.  &lt;p&gt;&lt;br /&gt;&lt;/p&gt;  &gt; **Note**: ContainerSpec, NetworkAttachmentSpec, and PluginSpec are &gt; mutually exclusive. PluginSpec is only used when the Runtime field &gt; is set to &#x60;plugin&#x60;. NetworkAttachmentSpec is used when the Runtime &gt; field is set to &#x60;attachment&#x60;. 
 */

#include "TaskSpecNetworkAttachmentSpec.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(TaskSpecNetworkAttachmentSpec, ContainerID)

void TaskSpecNetworkAttachmentSpec::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->container_id)>(openapi::StringT(OPENAPI_LITERAL(ContainerID)), this->container_id);
}

void TaskSpecNetworkAttachmentSpec::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ContainerID))))
    {
        using V = remove_optional<decltype(this->container_id)>::type;
        this->container_id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ContainerID)));
    }
}

