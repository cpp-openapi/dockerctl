/*
 * ResourcesBlkioWeightDevice.cpp
 *
 * 
 */

#include "ResourcesBlkioWeightDevice.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ResourcesBlkioWeightDevice, Path, Weight)

void ResourcesBlkioWeightDevice::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->path)>(openapi::StringT(OPENAPI_LITERAL(Path)), this->path);
    j.AddMember<decltype(this->weight)>(openapi::StringT(OPENAPI_LITERAL(Weight)), this->weight);
}

void ResourcesBlkioWeightDevice::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Path))))
    {
        using V = remove_optional<decltype(this->path)>::type;
        this->path = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Path)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Weight))))
    {
        using V = remove_optional<decltype(this->weight)>::type;
        this->weight = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Weight)));
    }
}

