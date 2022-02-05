/*
 * SwarmUnlockRequest.cpp
 *
 * 
 */

#include "SwarmUnlockRequest.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(SwarmUnlockRequest, UnlockKey)

void SwarmUnlockRequest::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->unlock_key)>(openapi::StringT(OPENAPI_LITERAL(UnlockKey)), this->unlock_key);
}

void SwarmUnlockRequest::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(UnlockKey))))
    {
        using V = remove_optional<decltype(this->unlock_key)>::type;
        this->unlock_key = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(UnlockKey)));
    }
}

