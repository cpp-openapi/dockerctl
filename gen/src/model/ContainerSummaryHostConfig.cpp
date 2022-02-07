/*
 * ContainerSummaryHostConfig.cpp
 *
 * 
 */

#include "ContainerSummaryHostConfig.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ContainerSummaryHostConfig, NetworkMode)

void ContainerSummaryHostConfig::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->network_mode)>(openapi::StringT(OPENAPI_LITERAL(NetworkMode)), this->network_mode);
}

void ContainerSummaryHostConfig::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NetworkMode))))
    {
        using V = remove_optional<decltype(this->network_mode)>::type;
        this->network_mode = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NetworkMode)));
    }
}

