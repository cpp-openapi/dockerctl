/*
 * VolumeUsageData.cpp
 *
 * Usage details about the volume. This information is used by the &#x60;GET /system/df&#x60; endpoint, and omitted in other endpoints. 
 */

#include "VolumeUsageData.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(VolumeUsageData, Size, RefCount)

void VolumeUsageData::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->size)>(openapi::StringT(OPENAPI_LITERAL(Size)), this->size);
    j.AddMember<decltype(this->ref_count)>(openapi::StringT(OPENAPI_LITERAL(RefCount)), this->ref_count);
}

void VolumeUsageData::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Size))))
    {
        using V = remove_optional<decltype(this->size)>::type;
        this->size = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Size)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(RefCount))))
    {
        using V = remove_optional<decltype(this->ref_count)>::type;
        this->ref_count = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(RefCount)));
    }
}

