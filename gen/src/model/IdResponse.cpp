/*
 * IdResponse.cpp
 *
 * Response to an API call that returns just an Id
 */

#include "IdResponse.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(IdResponse, Id)

void IdResponse::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(Id)), this->id);
}

void IdResponse::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Id))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Id)));
    }
}

