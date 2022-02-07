/*
 * PluginConfigLinux.cpp
 *
 * 
 */

#include "PluginConfigLinux.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(PluginConfigLinux, Capabilities, AllowAllDevices, Devices)

void PluginConfigLinux::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->capabilities)>(openapi::StringT(OPENAPI_LITERAL(Capabilities)), this->capabilities);
    j.AddMember<decltype(this->allow_all_devices)>(openapi::StringT(OPENAPI_LITERAL(AllowAllDevices)), this->allow_all_devices);
    j.AddMember<decltype(this->devices)>(openapi::StringT(OPENAPI_LITERAL(Devices)), this->devices);
}

void PluginConfigLinux::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Capabilities))))
    {
        using V = remove_optional<decltype(this->capabilities)>::type;
        this->capabilities = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Capabilities)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(AllowAllDevices))))
    {
        using V = remove_optional<decltype(this->allow_all_devices)>::type;
        this->allow_all_devices = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(AllowAllDevices)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Devices))))
    {
        using V = remove_optional<decltype(this->devices)>::type;
        this->devices = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Devices)));
    }
}

