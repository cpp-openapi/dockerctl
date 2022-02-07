/*
 * IPAM.cpp
 *
 * 
 */

#include "IPAM.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(IPAM, Driver, Config, Options)

void IPAM::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->driver)>(openapi::StringT(OPENAPI_LITERAL(Driver)), this->driver);
    j.AddMember<decltype(this->config)>(openapi::StringT(OPENAPI_LITERAL(Config)), this->config);
    j.AddMember<decltype(this->options)>(openapi::StringT(OPENAPI_LITERAL(Options)), this->options);
}

void IPAM::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Driver))))
    {
        using V = remove_optional<decltype(this->driver)>::type;
        this->driver = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Driver)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Config))))
    {
        using V = remove_optional<decltype(this->config)>::type;
        this->config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Config)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Options))))
    {
        using V = remove_optional<decltype(this->options)>::type;
        this->options = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Options)));
    }
}

