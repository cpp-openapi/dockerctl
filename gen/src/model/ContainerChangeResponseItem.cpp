/*
 * ContainerChangeResponseItem.cpp
 *
 * change item in response to ContainerChanges operation
 */

#include "ContainerChangeResponseItem.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ContainerChangeResponseItem, Path, Kind)

void ContainerChangeResponseItem::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->path)>(openapi::StringT(OPENAPI_LITERAL(Path)), this->path);
    j.AddMember<decltype(this->kind)>(openapi::StringT(OPENAPI_LITERAL(Kind)), this->kind);
}

void ContainerChangeResponseItem::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Path))))
    {
        using V = remove_optional<decltype(this->path)>::type;
        this->path = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Path)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Kind))))
    {
        using V = remove_optional<decltype(this->kind)>::type;
        this->kind = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Kind)));
    }
}

