/*
 * Address.cpp
 *
 * Address represents an IPv4 or IPv6 IP address.
 */

#include "Address.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(Address, Addr, PrefixLen)

void Address::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->addr)>(openapi::StringT(OPENAPI_LITERAL(Addr)), this->addr);
    j.AddMember<decltype(this->prefix_len)>(openapi::StringT(OPENAPI_LITERAL(PrefixLen)), this->prefix_len);
}

void Address::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Addr))))
    {
        using V = remove_optional<decltype(this->addr)>::type;
        this->addr = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Addr)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PrefixLen))))
    {
        using V = remove_optional<decltype(this->prefix_len)>::type;
        this->prefix_len = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PrefixLen)));
    }
}

