/*
 * ProgressDetail.cpp
 *
 * 
 */

#include "ProgressDetail.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ProgressDetail, current, total)

void ProgressDetail::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->current)>(openapi::StringT(OPENAPI_LITERAL(current)), this->current);
    j.AddMember<decltype(this->total)>(openapi::StringT(OPENAPI_LITERAL(total)), this->total);
}

void ProgressDetail::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(current))))
    {
        using V = remove_optional<decltype(this->current)>::type;
        this->current = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(current)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(total))))
    {
        using V = remove_optional<decltype(this->total)>::type;
        this->total = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(total)));
    }
}

