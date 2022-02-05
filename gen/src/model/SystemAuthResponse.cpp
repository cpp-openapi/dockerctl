/*
 * SystemAuthResponse.cpp
 *
 * 
 */

#include "SystemAuthResponse.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(SystemAuthResponse, Status, IdentityToken)

void SystemAuthResponse::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->status)>(openapi::StringT(OPENAPI_LITERAL(Status)), this->status);
    j.AddMember<decltype(this->identity_token)>(openapi::StringT(OPENAPI_LITERAL(IdentityToken)), this->identity_token);
}

void SystemAuthResponse::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Status))))
    {
        using V = remove_optional<decltype(this->status)>::type;
        this->status = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Status)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(IdentityToken))))
    {
        using V = remove_optional<decltype(this->identity_token)>::type;
        this->identity_token = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(IdentityToken)));
    }
}

