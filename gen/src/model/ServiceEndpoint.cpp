/*
 * ServiceEndpoint.cpp
 *
 * 
 */

#include "ServiceEndpoint.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ServiceEndpoint, Spec, Ports, VirtualIPs)

void ServiceEndpoint::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->spec)>(openapi::StringT(OPENAPI_LITERAL(Spec)), this->spec);
    j.AddMember<decltype(this->ports)>(openapi::StringT(OPENAPI_LITERAL(Ports)), this->ports);
    j.AddMember<decltype(this->virtual_ips)>(openapi::StringT(OPENAPI_LITERAL(VirtualIPs)), this->virtual_ips);
}

void ServiceEndpoint::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Spec))))
    {
        using V = remove_optional<decltype(this->spec)>::type;
        this->spec = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Spec)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Ports))))
    {
        using V = remove_optional<decltype(this->ports)>::type;
        this->ports = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Ports)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(VirtualIPs))))
    {
        using V = remove_optional<decltype(this->virtual_ips)>::type;
        this->virtual_ips = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(VirtualIPs)));
    }
}

