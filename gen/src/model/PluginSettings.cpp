/*
 * PluginSettings.cpp
 *
 * Settings that can be modified by users.
 */

#include "PluginSettings.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(PluginSettings, Mounts, Env, Args, Devices)

void PluginSettings::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->mounts)>(openapi::StringT(OPENAPI_LITERAL(Mounts)), this->mounts);
    j.AddMember<decltype(this->env)>(openapi::StringT(OPENAPI_LITERAL(Env)), this->env);
    j.AddMember<decltype(this->args)>(openapi::StringT(OPENAPI_LITERAL(Args)), this->args);
    j.AddMember<decltype(this->devices)>(openapi::StringT(OPENAPI_LITERAL(Devices)), this->devices);
}

void PluginSettings::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
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
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Devices))))
    {
        using V = remove_optional<decltype(this->devices)>::type;
        this->devices = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Devices)));
    }
}

