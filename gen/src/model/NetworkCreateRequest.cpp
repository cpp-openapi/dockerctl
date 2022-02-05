/*
 * NetworkCreateRequest.cpp
 *
 * 
 */

#include "NetworkCreateRequest.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(NetworkCreateRequest, Name, CheckDuplicate, Driver, Internal, Attachable, Ingress, IPAM, EnableIPv6, Options, Labels)

void NetworkCreateRequest::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->check_duplicate)>(openapi::StringT(OPENAPI_LITERAL(CheckDuplicate)), this->check_duplicate);
    j.AddMember<decltype(this->driver)>(openapi::StringT(OPENAPI_LITERAL(Driver)), this->driver);
    j.AddMember<decltype(this->internal)>(openapi::StringT(OPENAPI_LITERAL(Internal)), this->internal);
    j.AddMember<decltype(this->attachable)>(openapi::StringT(OPENAPI_LITERAL(Attachable)), this->attachable);
    j.AddMember<decltype(this->ingress)>(openapi::StringT(OPENAPI_LITERAL(Ingress)), this->ingress);
    j.AddMember<decltype(this->ipam)>(openapi::StringT(OPENAPI_LITERAL(IPAM)), this->ipam);
    j.AddMember<decltype(this->enable_ipv6)>(openapi::StringT(OPENAPI_LITERAL(EnableIPv6)), this->enable_ipv6);
    j.AddMember<decltype(this->options)>(openapi::StringT(OPENAPI_LITERAL(Options)), this->options);
    j.AddMember<decltype(this->labels)>(openapi::StringT(OPENAPI_LITERAL(Labels)), this->labels);
}

void NetworkCreateRequest::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CheckDuplicate))))
    {
        using V = remove_optional<decltype(this->check_duplicate)>::type;
        this->check_duplicate = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CheckDuplicate)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Driver))))
    {
        using V = remove_optional<decltype(this->driver)>::type;
        this->driver = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Driver)));
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
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(IPAM))))
    {
        using V = remove_optional<decltype(this->ipam)>::type;
        this->ipam = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(IPAM)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(EnableIPv6))))
    {
        using V = remove_optional<decltype(this->enable_ipv6)>::type;
        this->enable_ipv6 = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(EnableIPv6)));
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

