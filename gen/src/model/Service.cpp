/*
 * Service.cpp
 *
 * 
 */

#include "Service.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(Service, ID, Version, CreatedAt, UpdatedAt, Spec, Endpoint, UpdateStatus, ServiceStatus, JobStatus)

void Service::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(ID)), this->id);
    j.AddMember<decltype(this->version)>(openapi::StringT(OPENAPI_LITERAL(Version)), this->version);
    j.AddMember<decltype(this->created_at)>(openapi::StringT(OPENAPI_LITERAL(CreatedAt)), this->created_at);
    j.AddMember<decltype(this->updated_at)>(openapi::StringT(OPENAPI_LITERAL(UpdatedAt)), this->updated_at);
    j.AddMember<decltype(this->spec)>(openapi::StringT(OPENAPI_LITERAL(Spec)), this->spec);
    j.AddMember<decltype(this->endpoint)>(openapi::StringT(OPENAPI_LITERAL(Endpoint)), this->endpoint);
    j.AddMember<decltype(this->update_status)>(openapi::StringT(OPENAPI_LITERAL(UpdateStatus)), this->update_status);
    j.AddMember<decltype(this->service_status)>(openapi::StringT(OPENAPI_LITERAL(ServiceStatus)), this->service_status);
    j.AddMember<decltype(this->job_status)>(openapi::StringT(OPENAPI_LITERAL(JobStatus)), this->job_status);
}

void Service::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ID))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Version))))
    {
        using V = remove_optional<decltype(this->version)>::type;
        this->version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Version)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CreatedAt))))
    {
        using V = remove_optional<decltype(this->created_at)>::type;
        this->created_at = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CreatedAt)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(UpdatedAt))))
    {
        using V = remove_optional<decltype(this->updated_at)>::type;
        this->updated_at = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(UpdatedAt)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Spec))))
    {
        using V = remove_optional<decltype(this->spec)>::type;
        this->spec = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Spec)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Endpoint))))
    {
        using V = remove_optional<decltype(this->endpoint)>::type;
        this->endpoint = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Endpoint)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(UpdateStatus))))
    {
        using V = remove_optional<decltype(this->update_status)>::type;
        this->update_status = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(UpdateStatus)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ServiceStatus))))
    {
        using V = remove_optional<decltype(this->service_status)>::type;
        this->service_status = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ServiceStatus)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(JobStatus))))
    {
        using V = remove_optional<decltype(this->job_status)>::type;
        this->job_status = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(JobStatus)));
    }
}

