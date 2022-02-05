/*
 * ServiceSpecModeReplicatedJob.cpp
 *
 * The mode used for services with a finite number of tasks that run to a completed state. 
 */

#include "ServiceSpecModeReplicatedJob.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ServiceSpecModeReplicatedJob, MaxConcurrent, TotalCompletions)

void ServiceSpecModeReplicatedJob::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->max_concurrent)>(openapi::StringT(OPENAPI_LITERAL(MaxConcurrent)), this->max_concurrent);
    j.AddMember<decltype(this->total_completions)>(openapi::StringT(OPENAPI_LITERAL(TotalCompletions)), this->total_completions);
}

void ServiceSpecModeReplicatedJob::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MaxConcurrent))))
    {
        using V = remove_optional<decltype(this->max_concurrent)>::type;
        this->max_concurrent = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MaxConcurrent)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(TotalCompletions))))
    {
        using V = remove_optional<decltype(this->total_completions)>::type;
        this->total_completions = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(TotalCompletions)));
    }
}

