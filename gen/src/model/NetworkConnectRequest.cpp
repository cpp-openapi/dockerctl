/*
 * NetworkConnectRequest.cpp
 *
 * 
 */

#include "NetworkConnectRequest.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(NetworkConnectRequest, Container, EndpointConfig)

void NetworkConnectRequest::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->container)>(openapi::StringT(OPENAPI_LITERAL(Container)), this->container);
    j.AddMember<decltype(this->endpoint_config)>(openapi::StringT(OPENAPI_LITERAL(EndpointConfig)), this->endpoint_config);
}

void NetworkConnectRequest::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Container))))
    {
        using V = remove_optional<decltype(this->container)>::type;
        this->container = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Container)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(EndpointConfig))))
    {
        using V = remove_optional<decltype(this->endpoint_config)>::type;
        this->endpoint_config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(EndpointConfig)));
    }
}

