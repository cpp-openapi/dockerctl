/*
 * ServiceSpecModeReplicated.cpp
 *
 * 
 */

#include "ServiceSpecModeReplicated.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ServiceSpecModeReplicated, Replicas)

void ServiceSpecModeReplicated::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->replicas)>(openapi::StringT(OPENAPI_LITERAL(Replicas)), this->replicas);
}

void ServiceSpecModeReplicated::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Replicas))))
    {
        using V = remove_optional<decltype(this->replicas)>::type;
        this->replicas = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Replicas)));
    }
}

