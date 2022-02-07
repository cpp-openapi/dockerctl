/*
 * NetworkPruneResponse.cpp
 *
 * 
 */

#include "NetworkPruneResponse.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(NetworkPruneResponse, NetworksDeleted)

void NetworkPruneResponse::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->networks_deleted)>(openapi::StringT(OPENAPI_LITERAL(NetworksDeleted)), this->networks_deleted);
}

void NetworkPruneResponse::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NetworksDeleted))))
    {
        using V = remove_optional<decltype(this->networks_deleted)>::type;
        this->networks_deleted = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NetworksDeleted)));
    }
}

