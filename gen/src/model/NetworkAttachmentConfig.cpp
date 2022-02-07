/*
 * NetworkAttachmentConfig.cpp
 *
 * Specifies how a service should be attached to a particular network. 
 */

#include "NetworkAttachmentConfig.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(NetworkAttachmentConfig, Target, Aliases, DriverOpts)

void NetworkAttachmentConfig::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->target)>(openapi::StringT(OPENAPI_LITERAL(Target)), this->target);
    j.AddMember<decltype(this->aliases)>(openapi::StringT(OPENAPI_LITERAL(Aliases)), this->aliases);
    j.AddMember<decltype(this->driver_opts)>(openapi::StringT(OPENAPI_LITERAL(DriverOpts)), this->driver_opts);
}

void NetworkAttachmentConfig::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Target))))
    {
        using V = remove_optional<decltype(this->target)>::type;
        this->target = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Target)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Aliases))))
    {
        using V = remove_optional<decltype(this->aliases)>::type;
        this->aliases = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Aliases)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DriverOpts))))
    {
        using V = remove_optional<decltype(this->driver_opts)>::type;
        this->driver_opts = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DriverOpts)));
    }
}

