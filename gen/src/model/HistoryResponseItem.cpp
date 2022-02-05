/*
 * HistoryResponseItem.cpp
 *
 * individual image layer information in response to ImageHistory operation
 */

#include "HistoryResponseItem.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(HistoryResponseItem, Id, Created, CreatedBy, Tags, Size, Comment)

void HistoryResponseItem::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(Id)), this->id);
    j.AddMember<decltype(this->created)>(openapi::StringT(OPENAPI_LITERAL(Created)), this->created);
    j.AddMember<decltype(this->created_by)>(openapi::StringT(OPENAPI_LITERAL(CreatedBy)), this->created_by);
    j.AddMember<decltype(this->tags)>(openapi::StringT(OPENAPI_LITERAL(Tags)), this->tags);
    j.AddMember<decltype(this->size)>(openapi::StringT(OPENAPI_LITERAL(Size)), this->size);
    j.AddMember<decltype(this->comment)>(openapi::StringT(OPENAPI_LITERAL(Comment)), this->comment);
}

void HistoryResponseItem::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Id))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Id)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Created))))
    {
        using V = remove_optional<decltype(this->created)>::type;
        this->created = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Created)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CreatedBy))))
    {
        using V = remove_optional<decltype(this->created_by)>::type;
        this->created_by = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CreatedBy)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Tags))))
    {
        using V = remove_optional<decltype(this->tags)>::type;
        this->tags = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Tags)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Size))))
    {
        using V = remove_optional<decltype(this->size)>::type;
        this->size = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Size)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Comment))))
    {
        using V = remove_optional<decltype(this->comment)>::type;
        this->comment = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Comment)));
    }
}

