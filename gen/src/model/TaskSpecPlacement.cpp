/*
 * TaskSpecPlacement.cpp
 *
 * 
 */

#include "TaskSpecPlacement.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(TaskSpecPlacement, Constraints, Preferences, MaxReplicas, Platforms)

void TaskSpecPlacement::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->constraints)>(openapi::StringT(OPENAPI_LITERAL(Constraints)), this->constraints);
    j.AddMember<decltype(this->preferences)>(openapi::StringT(OPENAPI_LITERAL(Preferences)), this->preferences);
    j.AddMember<decltype(this->max_replicas)>(openapi::StringT(OPENAPI_LITERAL(MaxReplicas)), this->max_replicas);
    j.AddMember<decltype(this->platforms)>(openapi::StringT(OPENAPI_LITERAL(Platforms)), this->platforms);
}

void TaskSpecPlacement::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Constraints))))
    {
        using V = remove_optional<decltype(this->constraints)>::type;
        this->constraints = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Constraints)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Preferences))))
    {
        using V = remove_optional<decltype(this->preferences)>::type;
        this->preferences = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Preferences)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MaxReplicas))))
    {
        using V = remove_optional<decltype(this->max_replicas)>::type;
        this->max_replicas = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MaxReplicas)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Platforms))))
    {
        using V = remove_optional<decltype(this->platforms)>::type;
        this->platforms = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Platforms)));
    }
}

