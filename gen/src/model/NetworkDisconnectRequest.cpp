/*
 * NetworkDisconnectRequest.cpp
 *
 * 
 */

#include "NetworkDisconnectRequest.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(NetworkDisconnectRequest, Container, Force)

void NetworkDisconnectRequest::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->container)>(openapi::StringT(OPENAPI_LITERAL(Container)), this->container);
    j.AddMember<decltype(this->force)>(openapi::StringT(OPENAPI_LITERAL(Force)), this->force);
}

void NetworkDisconnectRequest::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Container))))
    {
        using V = remove_optional<decltype(this->container)>::type;
        this->container = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Container)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Force))))
    {
        using V = remove_optional<decltype(this->force)>::type;
        this->force = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Force)));
    }
}

