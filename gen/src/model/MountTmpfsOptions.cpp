/*
 * MountTmpfsOptions.cpp
 *
 * Optional configuration for the &#x60;tmpfs&#x60; type.
 */

#include "MountTmpfsOptions.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(MountTmpfsOptions, SizeBytes, Mode)

void MountTmpfsOptions::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->size_bytes)>(openapi::StringT(OPENAPI_LITERAL(SizeBytes)), this->size_bytes);
    j.AddMember<decltype(this->mode)>(openapi::StringT(OPENAPI_LITERAL(Mode)), this->mode);
}

void MountTmpfsOptions::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SizeBytes))))
    {
        using V = remove_optional<decltype(this->size_bytes)>::type;
        this->size_bytes = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SizeBytes)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Mode))))
    {
        using V = remove_optional<decltype(this->mode)>::type;
        this->mode = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Mode)));
    }
}

