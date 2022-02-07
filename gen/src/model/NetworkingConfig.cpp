/*
 * NetworkingConfig.cpp
 *
 * NetworkingConfig represents the container&#39;s networking configuration for each of its interfaces. It is used for the networking configs specified in the &#x60;docker create&#x60; and &#x60;docker network connect&#x60; commands. 
 */

#include "NetworkingConfig.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(NetworkingConfig, EndpointsConfig)

void NetworkingConfig::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->endpoints_config)>(openapi::StringT(OPENAPI_LITERAL(EndpointsConfig)), this->endpoints_config);
}

void NetworkingConfig::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(EndpointsConfig))))
    {
        using V = remove_optional<decltype(this->endpoints_config)>::type;
        this->endpoints_config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(EndpointsConfig)));
    }
}

