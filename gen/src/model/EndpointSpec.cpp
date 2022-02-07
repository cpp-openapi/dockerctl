/*
 * EndpointSpec.cpp
 *
 * Properties that can be configured to access and load balance a service.
 */

#include "EndpointSpec.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(EndpointSpec, Mode, Ports)

void EndpointSpec::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->mode)>(openapi::StringT(OPENAPI_LITERAL(Mode)), this->mode);
    j.AddMember<decltype(this->ports)>(openapi::StringT(OPENAPI_LITERAL(Ports)), this->ports);
}

void EndpointSpec::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Mode))))
    {
        using V = remove_optional<decltype(this->mode)>::type;
        this->mode = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Mode)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Ports))))
    {
        using V = remove_optional<decltype(this->ports)>::type;
        this->ports = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Ports)));
    }
}

