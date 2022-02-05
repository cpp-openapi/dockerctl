/*
 * ServiceSpecMode.cpp
 *
 * Scheduling mode for the service.
 */

#include "ServiceSpecMode.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ServiceSpecMode, Replicated, Global, ReplicatedJob, GlobalJob)

void ServiceSpecMode::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->replicated)>(openapi::StringT(OPENAPI_LITERAL(Replicated)), this->replicated);
    j.AddMember<decltype(this->global)>(openapi::StringT(OPENAPI_LITERAL(Global)), this->global);
    j.AddMember<decltype(this->replicated_job)>(openapi::StringT(OPENAPI_LITERAL(ReplicatedJob)), this->replicated_job);
    j.AddMember<decltype(this->global_job)>(openapi::StringT(OPENAPI_LITERAL(GlobalJob)), this->global_job);
}

void ServiceSpecMode::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Replicated))))
    {
        using V = remove_optional<decltype(this->replicated)>::type;
        this->replicated = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Replicated)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Global))))
    {
        using V = remove_optional<decltype(this->global)>::type;
        this->global = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Global)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ReplicatedJob))))
    {
        using V = remove_optional<decltype(this->replicated_job)>::type;
        this->replicated_job = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ReplicatedJob)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(GlobalJob))))
    {
        using V = remove_optional<decltype(this->global_job)>::type;
        this->global_job = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(GlobalJob)));
    }
}

