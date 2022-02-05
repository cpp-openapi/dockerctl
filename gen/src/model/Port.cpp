/*
 * Port.cpp
 *
 * An open port on a container
 */

#include "Port.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(Port, IP, PrivatePort, PublicPort, Type)

void Port::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->ip)>(openapi::StringT(OPENAPI_LITERAL(IP)), this->ip);
    j.AddMember<decltype(this->private_port)>(openapi::StringT(OPENAPI_LITERAL(PrivatePort)), this->private_port);
    j.AddMember<decltype(this->public_port)>(openapi::StringT(OPENAPI_LITERAL(PublicPort)), this->public_port);
    j.AddMember<decltype(this->type)>(openapi::StringT(OPENAPI_LITERAL(Type)), this->type);
}

void Port::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(IP))))
    {
        using V = remove_optional<decltype(this->ip)>::type;
        this->ip = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(IP)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PrivatePort))))
    {
        using V = remove_optional<decltype(this->private_port)>::type;
        this->private_port = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PrivatePort)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PublicPort))))
    {
        using V = remove_optional<decltype(this->public_port)>::type;
        this->public_port = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PublicPort)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Type))))
    {
        using V = remove_optional<decltype(this->type)>::type;
        this->type = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Type)));
    }
}

