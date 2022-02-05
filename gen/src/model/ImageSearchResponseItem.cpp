/*
 * ImageSearchResponseItem.cpp
 *
 * 
 */

#include "ImageSearchResponseItem.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ImageSearchResponseItem, description, isUnderscoreofficial, isUnderscoreautomated, name, starUnderscorecount)

void ImageSearchResponseItem::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->description)>(openapi::StringT(OPENAPI_LITERAL(description)), this->description);
    j.AddMember<decltype(this->is_underscoreofficial)>(openapi::StringT(OPENAPI_LITERAL(isUnderscoreofficial)), this->is_underscoreofficial);
    j.AddMember<decltype(this->is_underscoreautomated)>(openapi::StringT(OPENAPI_LITERAL(isUnderscoreautomated)), this->is_underscoreautomated);
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(name)), this->name);
    j.AddMember<decltype(this->star_underscorecount)>(openapi::StringT(OPENAPI_LITERAL(starUnderscorecount)), this->star_underscorecount);
}

void ImageSearchResponseItem::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(description))))
    {
        using V = remove_optional<decltype(this->description)>::type;
        this->description = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(description)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(isUnderscoreofficial))))
    {
        using V = remove_optional<decltype(this->is_underscoreofficial)>::type;
        this->is_underscoreofficial = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(isUnderscoreofficial)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(isUnderscoreautomated))))
    {
        using V = remove_optional<decltype(this->is_underscoreautomated)>::type;
        this->is_underscoreautomated = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(isUnderscoreautomated)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(starUnderscorecount))))
    {
        using V = remove_optional<decltype(this->star_underscorecount)>::type;
        this->star_underscorecount = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(starUnderscorecount)));
    }
}

