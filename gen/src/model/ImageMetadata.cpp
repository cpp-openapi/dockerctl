/*
 * ImageMetadata.cpp
 *
 * 
 */

#include "ImageMetadata.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ImageMetadata, LastTagTime)

void ImageMetadata::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->last_tag_time)>(openapi::StringT(OPENAPI_LITERAL(LastTagTime)), this->last_tag_time);
}

void ImageMetadata::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(LastTagTime))))
    {
        using V = remove_optional<decltype(this->last_tag_time)>::type;
        this->last_tag_time = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(LastTagTime)));
    }
}

