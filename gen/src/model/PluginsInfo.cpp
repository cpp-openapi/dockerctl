/*
 * PluginsInfo.cpp
 *
 * Available plugins per type.  &lt;p&gt;&lt;br /&gt;&lt;/p&gt;  &gt; **Note**: Only unmanaged (V1) plugins are included in this list. &gt; V1 plugins are \&quot;lazily\&quot; loaded, and are not returned in this list &gt; if there is no resource using the plugin. 
 */

#include "PluginsInfo.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(PluginsInfo, Volume, Network, Authorization, Log)

void PluginsInfo::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->volume)>(openapi::StringT(OPENAPI_LITERAL(Volume)), this->volume);
    j.AddMember<decltype(this->network)>(openapi::StringT(OPENAPI_LITERAL(Network)), this->network);
    j.AddMember<decltype(this->authorization)>(openapi::StringT(OPENAPI_LITERAL(Authorization)), this->authorization);
    j.AddMember<decltype(this->log)>(openapi::StringT(OPENAPI_LITERAL(Log)), this->log);
}

void PluginsInfo::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Volume))))
    {
        using V = remove_optional<decltype(this->volume)>::type;
        this->volume = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Volume)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Network))))
    {
        using V = remove_optional<decltype(this->network)>::type;
        this->network = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Network)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Authorization))))
    {
        using V = remove_optional<decltype(this->authorization)>::type;
        this->authorization = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Authorization)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Log))))
    {
        using V = remove_optional<decltype(this->log)>::type;
        this->log = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Log)));
    }
}

