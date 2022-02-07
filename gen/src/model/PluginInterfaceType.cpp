/*
 * PluginInterfaceType.cpp
 *
 * 
 */

#include "PluginInterfaceType.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(PluginInterfaceType, Prefix, Capability, Version)

void PluginInterfaceType::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->prefix)>(openapi::StringT(OPENAPI_LITERAL(Prefix)), this->prefix);
    j.AddMember<decltype(this->capability)>(openapi::StringT(OPENAPI_LITERAL(Capability)), this->capability);
    j.AddMember<decltype(this->version)>(openapi::StringT(OPENAPI_LITERAL(Version)), this->version);
}

void PluginInterfaceType::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Prefix))))
    {
        using V = remove_optional<decltype(this->prefix)>::type;
        this->prefix = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Prefix)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Capability))))
    {
        using V = remove_optional<decltype(this->capability)>::type;
        this->capability = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Capability)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Version))))
    {
        using V = remove_optional<decltype(this->version)>::type;
        this->version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Version)));
    }
}

