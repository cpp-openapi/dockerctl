/*
 * ServiceEndpointVirtualIPs.cpp
 *
 * 
 */

#include "ServiceEndpointVirtualIPs.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ServiceEndpointVirtualIPs, NetworkID, Addr)

void ServiceEndpointVirtualIPs::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->network_id)>(openapi::StringT(OPENAPI_LITERAL(NetworkID)), this->network_id);
    j.AddMember<decltype(this->addr)>(openapi::StringT(OPENAPI_LITERAL(Addr)), this->addr);
}

void ServiceEndpointVirtualIPs::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NetworkID))))
    {
        using V = remove_optional<decltype(this->network_id)>::type;
        this->network_id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NetworkID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Addr))))
    {
        using V = remove_optional<decltype(this->addr)>::type;
        this->addr = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Addr)));
    }
}

