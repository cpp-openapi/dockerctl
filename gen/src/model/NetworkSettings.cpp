/*
 * NetworkSettings.cpp
 *
 * NetworkSettings exposes the network settings in the API
 */

#include "NetworkSettings.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(NetworkSettings, Bridge, SandboxID, HairpinMode, LinkLocalIPv6Address, LinkLocalIPv6PrefixLen, Ports, SandboxKey, SecondaryIPAddresses, SecondaryIPv6Addresses, EndpointID, Gateway, GlobalIPv6Address, GlobalIPv6PrefixLen, IPAddress, IPPrefixLen, IPv6Gateway, MacAddress, Networks)

void NetworkSettings::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->bridge)>(openapi::StringT(OPENAPI_LITERAL(Bridge)), this->bridge);
    j.AddMember<decltype(this->sandbox_id)>(openapi::StringT(OPENAPI_LITERAL(SandboxID)), this->sandbox_id);
    j.AddMember<decltype(this->hairpin_mode)>(openapi::StringT(OPENAPI_LITERAL(HairpinMode)), this->hairpin_mode);
    j.AddMember<decltype(this->link_local_ipv6_address)>(openapi::StringT(OPENAPI_LITERAL(LinkLocalIPv6Address)), this->link_local_ipv6_address);
    j.AddMember<decltype(this->link_local_ipv6_prefix_len)>(openapi::StringT(OPENAPI_LITERAL(LinkLocalIPv6PrefixLen)), this->link_local_ipv6_prefix_len);
    j.AddMember<decltype(this->ports)>(openapi::StringT(OPENAPI_LITERAL(Ports)), this->ports);
    j.AddMember<decltype(this->sandbox_key)>(openapi::StringT(OPENAPI_LITERAL(SandboxKey)), this->sandbox_key);
    j.AddMember<decltype(this->secondary_ip_addresses)>(openapi::StringT(OPENAPI_LITERAL(SecondaryIPAddresses)), this->secondary_ip_addresses);
    j.AddMember<decltype(this->secondary_ipv6_addresses)>(openapi::StringT(OPENAPI_LITERAL(SecondaryIPv6Addresses)), this->secondary_ipv6_addresses);
    j.AddMember<decltype(this->endpoint_id)>(openapi::StringT(OPENAPI_LITERAL(EndpointID)), this->endpoint_id);
    j.AddMember<decltype(this->gateway)>(openapi::StringT(OPENAPI_LITERAL(Gateway)), this->gateway);
    j.AddMember<decltype(this->global_ipv6_address)>(openapi::StringT(OPENAPI_LITERAL(GlobalIPv6Address)), this->global_ipv6_address);
    j.AddMember<decltype(this->global_ipv6_prefix_len)>(openapi::StringT(OPENAPI_LITERAL(GlobalIPv6PrefixLen)), this->global_ipv6_prefix_len);
    j.AddMember<decltype(this->ip_address)>(openapi::StringT(OPENAPI_LITERAL(IPAddress)), this->ip_address);
    j.AddMember<decltype(this->ip_prefix_len)>(openapi::StringT(OPENAPI_LITERAL(IPPrefixLen)), this->ip_prefix_len);
    j.AddMember<decltype(this->ipv6_gateway)>(openapi::StringT(OPENAPI_LITERAL(IPv6Gateway)), this->ipv6_gateway);
    j.AddMember<decltype(this->mac_address)>(openapi::StringT(OPENAPI_LITERAL(MacAddress)), this->mac_address);
    j.AddMember<decltype(this->networks)>(openapi::StringT(OPENAPI_LITERAL(Networks)), this->networks);
}

void NetworkSettings::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Bridge))))
    {
        using V = remove_optional<decltype(this->bridge)>::type;
        this->bridge = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Bridge)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SandboxID))))
    {
        using V = remove_optional<decltype(this->sandbox_id)>::type;
        this->sandbox_id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SandboxID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(HairpinMode))))
    {
        using V = remove_optional<decltype(this->hairpin_mode)>::type;
        this->hairpin_mode = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(HairpinMode)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(LinkLocalIPv6Address))))
    {
        using V = remove_optional<decltype(this->link_local_ipv6_address)>::type;
        this->link_local_ipv6_address = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(LinkLocalIPv6Address)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(LinkLocalIPv6PrefixLen))))
    {
        using V = remove_optional<decltype(this->link_local_ipv6_prefix_len)>::type;
        this->link_local_ipv6_prefix_len = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(LinkLocalIPv6PrefixLen)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Ports))))
    {
        using V = remove_optional<decltype(this->ports)>::type;
        this->ports = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Ports)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SandboxKey))))
    {
        using V = remove_optional<decltype(this->sandbox_key)>::type;
        this->sandbox_key = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SandboxKey)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SecondaryIPAddresses))))
    {
        using V = remove_optional<decltype(this->secondary_ip_addresses)>::type;
        this->secondary_ip_addresses = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SecondaryIPAddresses)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SecondaryIPv6Addresses))))
    {
        using V = remove_optional<decltype(this->secondary_ipv6_addresses)>::type;
        this->secondary_ipv6_addresses = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SecondaryIPv6Addresses)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(EndpointID))))
    {
        using V = remove_optional<decltype(this->endpoint_id)>::type;
        this->endpoint_id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(EndpointID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Gateway))))
    {
        using V = remove_optional<decltype(this->gateway)>::type;
        this->gateway = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Gateway)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(GlobalIPv6Address))))
    {
        using V = remove_optional<decltype(this->global_ipv6_address)>::type;
        this->global_ipv6_address = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(GlobalIPv6Address)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(GlobalIPv6PrefixLen))))
    {
        using V = remove_optional<decltype(this->global_ipv6_prefix_len)>::type;
        this->global_ipv6_prefix_len = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(GlobalIPv6PrefixLen)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(IPAddress))))
    {
        using V = remove_optional<decltype(this->ip_address)>::type;
        this->ip_address = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(IPAddress)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(IPPrefixLen))))
    {
        using V = remove_optional<decltype(this->ip_prefix_len)>::type;
        this->ip_prefix_len = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(IPPrefixLen)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(IPv6Gateway))))
    {
        using V = remove_optional<decltype(this->ipv6_gateway)>::type;
        this->ipv6_gateway = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(IPv6Gateway)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MacAddress))))
    {
        using V = remove_optional<decltype(this->mac_address)>::type;
        this->mac_address = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MacAddress)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Networks))))
    {
        using V = remove_optional<decltype(this->networks)>::type;
        this->networks = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Networks)));
    }
}

