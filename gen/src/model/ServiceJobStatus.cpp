/*
 * ServiceJobStatus.cpp
 *
 * The status of the service when it is in one of ReplicatedJob or GlobalJob modes. Absent on Replicated and Global mode services. The JobIteration is an ObjectVersion, but unlike the Service&#39;s version, does not need to be sent with an update request. 
 */

#include "ServiceJobStatus.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ServiceJobStatus, JobIteration, LastExecution)

void ServiceJobStatus::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->job_iteration)>(openapi::StringT(OPENAPI_LITERAL(JobIteration)), this->job_iteration);
    j.AddMember<decltype(this->last_execution)>(openapi::StringT(OPENAPI_LITERAL(LastExecution)), this->last_execution);
}

void ServiceJobStatus::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(JobIteration))))
    {
        using V = remove_optional<decltype(this->job_iteration)>::type;
        this->job_iteration = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(JobIteration)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(LastExecution))))
    {
        using V = remove_optional<decltype(this->last_execution)>::type;
        this->last_execution = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(LastExecution)));
    }
}

