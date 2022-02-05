/*
 * ContainerSummaryNetworkSettings.cpp
 *
 * A summary of the container&#39;s network settings
 */

#include "ContainerSummaryNetworkSettings.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ContainerSummaryNetworkSettings, Networks)

void ContainerSummaryNetworkSettings::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->networks)>(openapi::StringT(OPENAPI_LITERAL(Networks)), this->networks);
}

void ContainerSummaryNetworkSettings::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Networks))))
    {
        using V = remove_optional<decltype(this->networks)>::type;
        this->networks = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Networks)));
    }
}

