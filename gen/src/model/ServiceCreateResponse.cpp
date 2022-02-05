/*
 * ServiceCreateResponse.cpp
 *
 * 
 */

#include "ServiceCreateResponse.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ServiceCreateResponse, ID, Warning)

void ServiceCreateResponse::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(ID)), this->id);
    j.AddMember<decltype(this->warning)>(openapi::StringT(OPENAPI_LITERAL(Warning)), this->warning);
}

void ServiceCreateResponse::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ID))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Warning))))
    {
        using V = remove_optional<decltype(this->warning)>::type;
        this->warning = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Warning)));
    }
}

