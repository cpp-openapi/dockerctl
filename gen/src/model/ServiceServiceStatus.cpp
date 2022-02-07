/*
 * ServiceServiceStatus.cpp
 *
 * The status of the service&#39;s tasks. Provided only when requested as part of a ServiceList operation. 
 */

#include "ServiceServiceStatus.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ServiceServiceStatus, RunningTasks, DesiredTasks, CompletedTasks)

void ServiceServiceStatus::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->running_tasks)>(openapi::StringT(OPENAPI_LITERAL(RunningTasks)), this->running_tasks);
    j.AddMember<decltype(this->desired_tasks)>(openapi::StringT(OPENAPI_LITERAL(DesiredTasks)), this->desired_tasks);
    j.AddMember<decltype(this->completed_tasks)>(openapi::StringT(OPENAPI_LITERAL(CompletedTasks)), this->completed_tasks);
}

void ServiceServiceStatus::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(RunningTasks))))
    {
        using V = remove_optional<decltype(this->running_tasks)>::type;
        this->running_tasks = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(RunningTasks)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DesiredTasks))))
    {
        using V = remove_optional<decltype(this->desired_tasks)>::type;
        this->desired_tasks = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DesiredTasks)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CompletedTasks))))
    {
        using V = remove_optional<decltype(this->completed_tasks)>::type;
        this->completed_tasks = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CompletedTasks)));
    }
}

