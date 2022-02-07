/*
 * MountVolumeOptions.cpp
 *
 * Optional configuration for the &#x60;volume&#x60; type.
 */

#include "MountVolumeOptions.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(MountVolumeOptions, NoCopy, Labels, DriverConfig)

void MountVolumeOptions::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->no_copy)>(openapi::StringT(OPENAPI_LITERAL(NoCopy)), this->no_copy);
    j.AddMember<decltype(this->labels)>(openapi::StringT(OPENAPI_LITERAL(Labels)), this->labels);
    j.AddMember<decltype(this->driver_config)>(openapi::StringT(OPENAPI_LITERAL(DriverConfig)), this->driver_config);
}

void MountVolumeOptions::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NoCopy))))
    {
        using V = remove_optional<decltype(this->no_copy)>::type;
        this->no_copy = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NoCopy)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Labels))))
    {
        using V = remove_optional<decltype(this->labels)>::type;
        this->labels = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Labels)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DriverConfig))))
    {
        using V = remove_optional<decltype(this->driver_config)>::type;
        this->driver_config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DriverConfig)));
    }
}

