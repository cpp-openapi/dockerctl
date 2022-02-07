/*
 * SwarmAllOf.cpp
 *
 * 
 */

#include "SwarmAllOf.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(SwarmAllOf, JoinTokens)

void SwarmAllOf::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->join_tokens)>(openapi::StringT(OPENAPI_LITERAL(JoinTokens)), this->join_tokens);
}

void SwarmAllOf::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(JoinTokens))))
    {
        using V = remove_optional<decltype(this->join_tokens)>::type;
        this->join_tokens = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(JoinTokens)));
    }
}

