/*
 * NetworkCreateResponse.cpp
 *
 * 
 */

#include "NetworkCreateResponse.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(NetworkCreateResponse, Id, Warning)

void NetworkCreateResponse::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(Id)), this->id);
    j.AddMember<decltype(this->warning)>(openapi::StringT(OPENAPI_LITERAL(Warning)), this->warning);
}

void NetworkCreateResponse::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Id))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Id)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Warning))))
    {
        using V = remove_optional<decltype(this->warning)>::type;
        this->warning = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Warning)));
    }
}

