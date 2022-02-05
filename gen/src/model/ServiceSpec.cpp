/*
 * ServiceSpec.cpp
 *
 * User modifiable configuration for a service.
 */

#include "ServiceSpec.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ServiceSpec, Name, Labels, TaskTemplate, Mode, UpdateConfig, RollbackConfig, Networks, EndpointSpec)

void ServiceSpec::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->labels)>(openapi::StringT(OPENAPI_LITERAL(Labels)), this->labels);
    j.AddMember<decltype(this->task_template)>(openapi::StringT(OPENAPI_LITERAL(TaskTemplate)), this->task_template);
    j.AddMember<decltype(this->mode)>(openapi::StringT(OPENAPI_LITERAL(Mode)), this->mode);
    j.AddMember<decltype(this->update_config)>(openapi::StringT(OPENAPI_LITERAL(UpdateConfig)), this->update_config);
    j.AddMember<decltype(this->rollback_config)>(openapi::StringT(OPENAPI_LITERAL(RollbackConfig)), this->rollback_config);
    j.AddMember<decltype(this->networks)>(openapi::StringT(OPENAPI_LITERAL(Networks)), this->networks);
    j.AddMember<decltype(this->endpoint_spec)>(openapi::StringT(OPENAPI_LITERAL(EndpointSpec)), this->endpoint_spec);
}

void ServiceSpec::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Labels))))
    {
        using V = remove_optional<decltype(this->labels)>::type;
        this->labels = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Labels)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(TaskTemplate))))
    {
        using V = remove_optional<decltype(this->task_template)>::type;
        this->task_template = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(TaskTemplate)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Mode))))
    {
        using V = remove_optional<decltype(this->mode)>::type;
        this->mode = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Mode)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(UpdateConfig))))
    {
        using V = remove_optional<decltype(this->update_config)>::type;
        this->update_config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(UpdateConfig)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(RollbackConfig))))
    {
        using V = remove_optional<decltype(this->rollback_config)>::type;
        this->rollback_config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(RollbackConfig)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Networks))))
    {
        using V = remove_optional<decltype(this->networks)>::type;
        this->networks = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Networks)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(EndpointSpec))))
    {
        using V = remove_optional<decltype(this->endpoint_spec)>::type;
        this->endpoint_spec = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(EndpointSpec)));
    }
}

