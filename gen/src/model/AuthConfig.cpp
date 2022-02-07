/*
 * AuthConfig.cpp
 *
 * 
 */

#include "AuthConfig.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(AuthConfig, username, password, email, serveraddress)

void AuthConfig::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->username)>(openapi::StringT(OPENAPI_LITERAL(username)), this->username);
    j.AddMember<decltype(this->password)>(openapi::StringT(OPENAPI_LITERAL(password)), this->password);
    j.AddMember<decltype(this->email)>(openapi::StringT(OPENAPI_LITERAL(email)), this->email);
    j.AddMember<decltype(this->serveraddress)>(openapi::StringT(OPENAPI_LITERAL(serveraddress)), this->serveraddress);
}

void AuthConfig::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(username))))
    {
        using V = remove_optional<decltype(this->username)>::type;
        this->username = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(username)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(password))))
    {
        using V = remove_optional<decltype(this->password)>::type;
        this->password = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(password)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(email))))
    {
        using V = remove_optional<decltype(this->email)>::type;
        this->email = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(email)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(serveraddress))))
    {
        using V = remove_optional<decltype(this->serveraddress)>::type;
        this->serveraddress = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(serveraddress)));
    }
}

