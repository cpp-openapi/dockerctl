/*
 * ImageDeleteResponseItem.cpp
 *
 * 
 */

#include "ImageDeleteResponseItem.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ImageDeleteResponseItem, Untagged, Deleted)

void ImageDeleteResponseItem::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->untagged)>(openapi::StringT(OPENAPI_LITERAL(Untagged)), this->untagged);
    j.AddMember<decltype(this->deleted)>(openapi::StringT(OPENAPI_LITERAL(Deleted)), this->deleted);
}

void ImageDeleteResponseItem::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Untagged))))
    {
        using V = remove_optional<decltype(this->untagged)>::type;
        this->untagged = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Untagged)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Deleted))))
    {
        using V = remove_optional<decltype(this->deleted)>::type;
        this->deleted = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Deleted)));
    }
}

