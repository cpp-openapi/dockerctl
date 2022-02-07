/*
 * PortBinding.cpp
 *
 * PortBinding represents a binding between a host IP address and a host port. 
 */

#include "PortBinding.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(PortBinding, HostIp, HostPort)

void PortBinding::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->host_ip)>(openapi::StringT(OPENAPI_LITERAL(HostIp)), this->host_ip);
    j.AddMember<decltype(this->host_port)>(openapi::StringT(OPENAPI_LITERAL(HostPort)), this->host_port);
}

void PortBinding::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(HostIp))))
    {
        using V = remove_optional<decltype(this->host_ip)>::type;
        this->host_ip = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(HostIp)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(HostPort))))
    {
        using V = remove_optional<decltype(this->host_port)>::type;
        this->host_port = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(HostPort)));
    }
}

