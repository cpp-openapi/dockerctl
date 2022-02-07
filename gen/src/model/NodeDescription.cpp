/*
 * NodeDescription.cpp
 *
 * NodeDescription encapsulates the properties of the Node as reported by the agent. 
 */

#include "NodeDescription.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(NodeDescription, Hostname, Platform, Resources, Engine, TLSInfo)

void NodeDescription::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->hostname)>(openapi::StringT(OPENAPI_LITERAL(Hostname)), this->hostname);
    j.AddMember<decltype(this->platform)>(openapi::StringT(OPENAPI_LITERAL(Platform)), this->platform);
    j.AddMember<decltype(this->resources)>(openapi::StringT(OPENAPI_LITERAL(Resources)), this->resources);
    j.AddMember<decltype(this->engine)>(openapi::StringT(OPENAPI_LITERAL(Engine)), this->engine);
    j.AddMember<decltype(this->tls_info)>(openapi::StringT(OPENAPI_LITERAL(TLSInfo)), this->tls_info);
}

void NodeDescription::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Hostname))))
    {
        using V = remove_optional<decltype(this->hostname)>::type;
        this->hostname = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Hostname)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Platform))))
    {
        using V = remove_optional<decltype(this->platform)>::type;
        this->platform = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Platform)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Resources))))
    {
        using V = remove_optional<decltype(this->resources)>::type;
        this->resources = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Resources)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Engine))))
    {
        using V = remove_optional<decltype(this->engine)>::type;
        this->engine = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Engine)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(TLSInfo))))
    {
        using V = remove_optional<decltype(this->tls_info)>::type;
        this->tls_info = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(TLSInfo)));
    }
}

