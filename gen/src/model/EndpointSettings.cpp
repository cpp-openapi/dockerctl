/*
 * EndpointSettings.cpp
 *
 * Configuration for a network endpoint.
 */

#include "EndpointSettings.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(EndpointSettings, IPAMConfig, Links, Aliases, NetworkID, EndpointID, Gateway, IPAddress, IPPrefixLen, IPv6Gateway, GlobalIPv6Address, GlobalIPv6PrefixLen, MacAddress, DriverOpts)

void EndpointSettings::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->ipam_config)>(openapi::StringT(OPENAPI_LITERAL(IPAMConfig)), this->ipam_config);
    j.AddMember<decltype(this->links)>(openapi::StringT(OPENAPI_LITERAL(Links)), this->links);
    j.AddMember<decltype(this->aliases)>(openapi::StringT(OPENAPI_LITERAL(Aliases)), this->aliases);
    j.AddMember<decltype(this->network_id)>(openapi::StringT(OPENAPI_LITERAL(NetworkID)), this->network_id);
    j.AddMember<decltype(this->endpoint_id)>(openapi::StringT(OPENAPI_LITERAL(EndpointID)), this->endpoint_id);
    j.AddMember<decltype(this->gateway)>(openapi::StringT(OPENAPI_LITERAL(Gateway)), this->gateway);
    j.AddMember<decltype(this->ip_address)>(openapi::StringT(OPENAPI_LITERAL(IPAddress)), this->ip_address);
    j.AddMember<decltype(this->ip_prefix_len)>(openapi::StringT(OPENAPI_LITERAL(IPPrefixLen)), this->ip_prefix_len);
    j.AddMember<decltype(this->ipv6_gateway)>(openapi::StringT(OPENAPI_LITERAL(IPv6Gateway)), this->ipv6_gateway);
    j.AddMember<decltype(this->global_ipv6_address)>(openapi::StringT(OPENAPI_LITERAL(GlobalIPv6Address)), this->global_ipv6_address);
    j.AddMember<decltype(this->global_ipv6_prefix_len)>(openapi::StringT(OPENAPI_LITERAL(GlobalIPv6PrefixLen)), this->global_ipv6_prefix_len);
    j.AddMember<decltype(this->mac_address)>(openapi::StringT(OPENAPI_LITERAL(MacAddress)), this->mac_address);
    j.AddMember<decltype(this->driver_opts)>(openapi::StringT(OPENAPI_LITERAL(DriverOpts)), this->driver_opts);
}

void EndpointSettings::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(IPAMConfig))))
    {
        using V = remove_optional<decltype(this->ipam_config)>::type;
        this->ipam_config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(IPAMConfig)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Links))))
    {
        using V = remove_optional<decltype(this->links)>::type;
        this->links = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Links)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Aliases))))
    {
        using V = remove_optional<decltype(this->aliases)>::type;
        this->aliases = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Aliases)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NetworkID))))
    {
        using V = remove_optional<decltype(this->network_id)>::type;
        this->network_id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NetworkID)));
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
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MacAddress))))
    {
        using V = remove_optional<decltype(this->mac_address)>::type;
        this->mac_address = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MacAddress)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DriverOpts))))
    {
        using V = remove_optional<decltype(this->driver_opts)>::type;
        this->driver_opts = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DriverOpts)));
    }
}

