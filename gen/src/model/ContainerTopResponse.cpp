/*
 * ContainerTopResponse.cpp
 *
 * OK response to ContainerTop operation
 */

#include "ContainerTopResponse.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ContainerTopResponse, Titles, Processes)

void ContainerTopResponse::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->titles)>(openapi::StringT(OPENAPI_LITERAL(Titles)), this->titles);
    j.AddMember<decltype(this->processes)>(openapi::StringT(OPENAPI_LITERAL(Processes)), this->processes);
}

void ContainerTopResponse::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Titles))))
    {
        using V = remove_optional<decltype(this->titles)>::type;
        this->titles = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Titles)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Processes))))
    {
        using V = remove_optional<decltype(this->processes)>::type;
        this->processes = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Processes)));
    }
}

