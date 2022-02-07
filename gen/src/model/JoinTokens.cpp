/*
 * JoinTokens.cpp
 *
 * JoinTokens contains the tokens workers and managers need to join the swarm. 
 */

#include "JoinTokens.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(JoinTokens, Worker, Manager)

void JoinTokens::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->worker)>(openapi::StringT(OPENAPI_LITERAL(Worker)), this->worker);
    j.AddMember<decltype(this->manager)>(openapi::StringT(OPENAPI_LITERAL(Manager)), this->manager);
}

void JoinTokens::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Worker))))
    {
        using V = remove_optional<decltype(this->worker)>::type;
        this->worker = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Worker)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Manager))))
    {
        using V = remove_optional<decltype(this->manager)>::type;
        this->manager = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Manager)));
    }
}

