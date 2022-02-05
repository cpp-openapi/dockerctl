/*
 * NetworkContainer.cpp
 *
 * 
 */

#include "NetworkContainer.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(NetworkContainer, Name, EndpointID, MacAddress, IPv4Address, IPv6Address)

void NetworkContainer::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->endpoint_id)>(openapi::StringT(OPENAPI_LITERAL(EndpointID)), this->endpoint_id);
    j.AddMember<decltype(this->mac_address)>(openapi::StringT(OPENAPI_LITERAL(MacAddress)), this->mac_address);
    j.AddMember<decltype(this->ipv4_address)>(openapi::StringT(OPENAPI_LITERAL(IPv4Address)), this->ipv4_address);
    j.AddMember<decltype(this->ipv6_address)>(openapi::StringT(OPENAPI_LITERAL(IPv6Address)), this->ipv6_address);
}

void NetworkContainer::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(EndpointID))))
    {
        using V = remove_optional<decltype(this->endpoint_id)>::type;
        this->endpoint_id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(EndpointID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MacAddress))))
    {
        using V = remove_optional<decltype(this->mac_address)>::type;
        this->mac_address = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MacAddress)));
    }
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
}

