/*
 * EndpointIPAMConfig.cpp
 *
 * EndpointIPAMConfig represents an endpoint&#39;s IPAM configuration. 
 */

#include "EndpointIPAMConfig.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(EndpointIPAMConfig, IPv4Address, IPv6Address, LinkLocalIPs)

void EndpointIPAMConfig::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->ipv4_address)>(openapi::StringT(OPENAPI_LITERAL(IPv4Address)), this->ipv4_address);
    j.AddMember<decltype(this->ipv6_address)>(openapi::StringT(OPENAPI_LITERAL(IPv6Address)), this->ipv6_address);
    j.AddMember<decltype(this->link_local_ips)>(openapi::StringT(OPENAPI_LITERAL(LinkLocalIPs)), this->link_local_ips);
}

void EndpointIPAMConfig::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(IPv4Address))))
    {
        using V = remove_optional<decltype(this->ipv4_address)>::type;
        this->ipv4_address = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(IPv4Address)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(IPv6Address))))
    {
        using V = remove_optional<decltype(this->ipv6_address)>::type;
        this->ipv6_address = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(IPv6Address)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(LinkLocalIPs))))
    {
        using V = remove_optional<decltype(this->link_local_ips)>::type;
        this->link_local_ips = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(LinkLocalIPs)));
    }
}

