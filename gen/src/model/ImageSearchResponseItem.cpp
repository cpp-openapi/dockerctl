/*
 * ImageSearchResponseItem.cpp
 *
 * 
 */

#include "ImageSearchResponseItem.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ImageSearchResponseItem, description, is_official, is_automated, name, star_count)

void ImageSearchResponseItem::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->description)>(openapi::StringT(OPENAPI_LITERAL(description)), this->description);
    j.AddMember<decltype(this->is_official)>(openapi::StringT(OPENAPI_LITERAL(is_official)), this->is_official);
    j.AddMember<decltype(this->is_automated)>(openapi::StringT(OPENAPI_LITERAL(is_automated)), this->is_automated);
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(name)), this->name);
    j.AddMember<decltype(this->star_count)>(openapi::StringT(OPENAPI_LITERAL(star_count)), this->star_count);
}

void ImageSearchResponseItem::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(description))))
    {
        using V = remove_optional<decltype(this->description)>::type;
        this->description = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(description)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(is_official))))
    {
        using V = remove_optional<decltype(this->is_official)>::type;
        this->is_official = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(is_official)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(is_automated))))
    {
        using V = remove_optional<decltype(this->is_automated)>::type;
        this->is_automated = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(is_automated)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(star_count))))
    {
        using V = remove_optional<decltype(this->star_count)>::type;
        this->star_count = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(star_count)));
    }
}

