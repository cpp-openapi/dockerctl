/*
 * SystemDataUsageResponse.cpp
 *
 * 
 */

#include "SystemDataUsageResponse.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(SystemDataUsageResponse, LayersSize, Images, Containers, Volumes, BuildCache)

void SystemDataUsageResponse::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->layers_size)>(openapi::StringT(OPENAPI_LITERAL(LayersSize)), this->layers_size);
    j.AddMember<decltype(this->images)>(openapi::StringT(OPENAPI_LITERAL(Images)), this->images);
    j.AddMember<decltype(this->containers)>(openapi::StringT(OPENAPI_LITERAL(Containers)), this->containers);
    j.AddMember<decltype(this->volumes)>(openapi::StringT(OPENAPI_LITERAL(Volumes)), this->volumes);
    j.AddMember<decltype(this->build_cache)>(openapi::StringT(OPENAPI_LITERAL(BuildCache)), this->build_cache);
}

void SystemDataUsageResponse::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(LayersSize))))
    {
        using V = remove_optional<decltype(this->layers_size)>::type;
        this->layers_size = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(LayersSize)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Images))))
    {
        using V = remove_optional<decltype(this->images)>::type;
        this->images = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Images)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Containers))))
    {
        using V = remove_optional<decltype(this->containers)>::type;
        this->containers = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Containers)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Volumes))))
    {
        using V = remove_optional<decltype(this->volumes)>::type;
        this->volumes = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Volumes)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(BuildCache))))
    {
        using V = remove_optional<decltype(this->build_cache)>::type;
        this->build_cache = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(BuildCache)));
    }
}

