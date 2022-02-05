/*
 * Task.cpp
 *
 * 
 */

#include "Task.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(Task, ID, Version, CreatedAt, UpdatedAt, Name, Labels, Spec, ServiceID, Slot, NodeID, AssignedGenericResources, Status, DesiredState, JobIteration)

void Task::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(ID)), this->id);
    j.AddMember<decltype(this->version)>(openapi::StringT(OPENAPI_LITERAL(Version)), this->version);
    j.AddMember<decltype(this->created_at)>(openapi::StringT(OPENAPI_LITERAL(CreatedAt)), this->created_at);
    j.AddMember<decltype(this->updated_at)>(openapi::StringT(OPENAPI_LITERAL(UpdatedAt)), this->updated_at);
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->labels)>(openapi::StringT(OPENAPI_LITERAL(Labels)), this->labels);
    j.AddMember<decltype(this->spec)>(openapi::StringT(OPENAPI_LITERAL(Spec)), this->spec);
    j.AddMember<decltype(this->service_id)>(openapi::StringT(OPENAPI_LITERAL(ServiceID)), this->service_id);
    j.AddMember<decltype(this->slot)>(openapi::StringT(OPENAPI_LITERAL(Slot)), this->slot);
    j.AddMember<decltype(this->node_id)>(openapi::StringT(OPENAPI_LITERAL(NodeID)), this->node_id);
    j.AddMember<decltype(this->assigned_generic_resources)>(openapi::StringT(OPENAPI_LITERAL(AssignedGenericResources)), this->assigned_generic_resources);
    j.AddMember<decltype(this->status)>(openapi::StringT(OPENAPI_LITERAL(Status)), this->status);
    j.AddMember<decltype(this->desired_state)>(openapi::StringT(OPENAPI_LITERAL(DesiredState)), this->desired_state);
    j.AddMember<decltype(this->job_iteration)>(openapi::StringT(OPENAPI_LITERAL(JobIteration)), this->job_iteration);
}

void Task::FromJSON(const Json & j)
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
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Spec))))
    {
        using V = remove_optional<decltype(this->spec)>::type;
        this->spec = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Spec)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ServiceID))))
    {
        using V = remove_optional<decltype(this->service_id)>::type;
        this->service_id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ServiceID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Slot))))
    {
        using V = remove_optional<decltype(this->slot)>::type;
        this->slot = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Slot)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NodeID))))
    {
        using V = remove_optional<decltype(this->node_id)>::type;
        this->node_id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NodeID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(AssignedGenericResources))))
    {
        using V = remove_optional<decltype(this->assigned_generic_resources)>::type;
        this->assigned_generic_resources = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(AssignedGenericResources)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Status))))
    {
        using V = remove_optional<decltype(this->status)>::type;
        this->status = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Status)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DesiredState))))
    {
        using V = remove_optional<decltype(this->desired_state)>::type;
        this->desired_state = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DesiredState)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(JobIteration))))
    {
        using V = remove_optional<decltype(this->job_iteration)>::type;
        this->job_iteration = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(JobIteration)));
    }
}

