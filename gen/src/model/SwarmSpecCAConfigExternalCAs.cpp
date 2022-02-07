/*
 * SwarmSpecCAConfigExternalCAs.cpp
 *
 * 
 */

#include "SwarmSpecCAConfigExternalCAs.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(SwarmSpecCAConfigExternalCAs, Protocol, URL, Options, CACert)

void SwarmSpecCAConfigExternalCAs::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->protocol)>(openapi::StringT(OPENAPI_LITERAL(Protocol)), this->protocol);
    j.AddMember<decltype(this->url)>(openapi::StringT(OPENAPI_LITERAL(URL)), this->url);
    j.AddMember<decltype(this->options)>(openapi::StringT(OPENAPI_LITERAL(Options)), this->options);
    j.AddMember<decltype(this->ca_cert)>(openapi::StringT(OPENAPI_LITERAL(CACert)), this->ca_cert);
}

void SwarmSpecCAConfigExternalCAs::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Protocol))))
    {
        using V = remove_optional<decltype(this->protocol)>::type;
        this->protocol = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Protocol)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(URL))))
    {
        using V = remove_optional<decltype(this->url)>::type;
        this->url = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(URL)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Options))))
    {
        using V = remove_optional<decltype(this->options)>::type;
        this->options = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Options)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CACert))))
    {
        using V = remove_optional<decltype(this->ca_cert)>::type;
        this->ca_cert = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CACert)));
    }
}

