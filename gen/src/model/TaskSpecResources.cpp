/*
 * TaskSpecResources.cpp
 *
 * Resource requirements which apply to each individual container created as part of the service. 
 */

#include "TaskSpecResources.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(TaskSpecResources, Limits, Reservation)

void TaskSpecResources::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->limits)>(openapi::StringT(OPENAPI_LITERAL(Limits)), this->limits);
    j.AddMember<decltype(this->reservation)>(openapi::StringT(OPENAPI_LITERAL(Reservation)), this->reservation);
}

void TaskSpecResources::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Limits))))
    {
        using V = remove_optional<decltype(this->limits)>::type;
        this->limits = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Limits)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Reservation))))
    {
        using V = remove_optional<decltype(this->reservation)>::type;
        this->reservation = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Reservation)));
    }
}

