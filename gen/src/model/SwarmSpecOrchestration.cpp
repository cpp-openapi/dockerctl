/*
 * SwarmSpecOrchestration.cpp
 *
 * Orchestration configuration.
 */

#include "SwarmSpecOrchestration.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(SwarmSpecOrchestration, TaskHistoryRetentionLimit)

void SwarmSpecOrchestration::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->task_history_retention_limit)>(openapi::StringT(OPENAPI_LITERAL(TaskHistoryRetentionLimit)), this->task_history_retention_limit);
}

void SwarmSpecOrchestration::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(TaskHistoryRetentionLimit))))
    {
        using V = remove_optional<decltype(this->task_history_retention_limit)>::type;
        this->task_history_retention_limit = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(TaskHistoryRetentionLimit)));
    }
}

