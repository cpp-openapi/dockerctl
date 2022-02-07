/*
 * Network.cpp
 *
 * 
 */

#include "Network.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(Network, Name, Id, Created, Scope, Driver, EnableIPv6, IPAM, Internal, Attachable, Ingress, Containers, Options, Labels)

void Network::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(Id)), this->id);
    j.AddMember<decltype(this->created)>(openapi::StringT(OPENAPI_LITERAL(Created)), this->created);
    j.AddMember<decltype(this->scope)>(openapi::StringT(OPENAPI_LITERAL(Scope)), this->scope);
    j.AddMember<decltype(this->driver)>(openapi::StringT(OPENAPI_LITERAL(Driver)), this->driver);
    j.AddMember<decltype(this->enable_ipv6)>(openapi::StringT(OPENAPI_LITERAL(EnableIPv6)), this->enable_ipv6);
    j.AddMember<decltype(this->ipam)>(openapi::StringT(OPENAPI_LITERAL(IPAM)), this->ipam);
    j.AddMember<decltype(this->internal)>(openapi::StringT(OPENAPI_LITERAL(Internal)), this->internal);
    j.AddMember<decltype(this->attachable)>(openapi::StringT(OPENAPI_LITERAL(Attachable)), this->attachable);
    j.AddMember<decltype(this->ingress)>(openapi::StringT(OPENAPI_LITERAL(Ingress)), this->ingress);
    j.AddMember<decltype(this->containers)>(openapi::StringT(OPENAPI_LITERAL(Containers)), this->containers);
    j.AddMember<decltype(this->options)>(openapi::StringT(OPENAPI_LITERAL(Options)), this->options);
    j.AddMember<decltype(this->labels)>(openapi::StringT(OPENAPI_LITERAL(Labels)), this->labels);
}

void Network::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Id))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Id)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Created))))
    {
        using V = remove_optional<decltype(this->created)>::type;
        this->created = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Created)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Scope))))
    {
        using V = remove_optional<decltype(this->scope)>::type;
        this->scope = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Scope)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Driver))))
    {
        using V = remove_optional<decltype(this->driver)>::type;
        this->driver = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Driver)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(EnableIPv6))))
    {
        using V = remove_optional<decltype(this->enable_ipv6)>::type;
        this->enable_ipv6 = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(EnableIPv6)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(IPAM))))
    {
        using V = remove_optional<decltype(this->ipam)>::type;
        this->ipam = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(IPAM)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Internal))))
    {
        using V = remove_optional<decltype(this->internal)>::type;
        this->internal = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Internal)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Attachable))))
    {
        using V = remove_optional<decltype(this->attachable)>::type;
        this->attachable = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Attachable)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Ingress))))
    {
        using V = remove_optional<decltype(this->ingress)>::type;
        this->ingress = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Ingress)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Containers))))
    {
        using V = remove_optional<decltype(this->containers)>::type;
        this->containers = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Containers)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Options))))
    {
        using V = remove_optional<decltype(this->options)>::type;
        this->options = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Options)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Labels))))
    {
        using V = remove_optional<decltype(this->labels)>::type;
        this->labels = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Labels)));
    }
}

