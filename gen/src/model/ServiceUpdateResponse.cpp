/*
 * ServiceUpdateResponse.cpp
 *
 * 
 */

#include "ServiceUpdateResponse.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ServiceUpdateResponse, Warnings)

void ServiceUpdateResponse::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->warnings)>(openapi::StringT(OPENAPI_LITERAL(Warnings)), this->warnings);
}

void ServiceUpdateResponse::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Warnings))))
    {
        using V = remove_optional<decltype(this->warnings)>::type;
        this->warnings = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Warnings)));
    }
}

