/*
 * VolumeListResponse.cpp
 *
 * Volume list response
 */

#include "VolumeListResponse.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(VolumeListResponse, Volumes, Warnings)

void VolumeListResponse::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->volumes)>(openapi::StringT(OPENAPI_LITERAL(Volumes)), this->volumes);
    j.AddMember<decltype(this->warnings)>(openapi::StringT(OPENAPI_LITERAL(Warnings)), this->warnings);
}

void VolumeListResponse::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Volumes))))
    {
        using V = remove_optional<decltype(this->volumes)>::type;
        this->volumes = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Volumes)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Warnings))))
    {
        using V = remove_optional<decltype(this->warnings)>::type;
        this->warnings = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Warnings)));
    }
}

