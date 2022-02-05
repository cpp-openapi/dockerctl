/*
 * DistributionInspect.cpp
 *
 * Describes the result obtained from contacting the registry to retrieve image metadata. 
 */

#include "DistributionInspect.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(DistributionInspect, Descriptor, Platforms)

void DistributionInspect::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->descriptor)>(openapi::StringT(OPENAPI_LITERAL(Descriptor)), this->descriptor);
    j.AddMember<decltype(this->platforms)>(openapi::StringT(OPENAPI_LITERAL(Platforms)), this->platforms);
}

void DistributionInspect::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Descriptor))))
    {
        using V = remove_optional<decltype(this->descriptor)>::type;
        this->descriptor = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Descriptor)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Platforms))))
    {
        using V = remove_optional<decltype(this->platforms)>::type;
        this->platforms = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Platforms)));
    }
}

