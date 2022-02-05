/*
 * SwarmSpec.cpp
 *
 * User modifiable swarm configuration.
 */

#include "SwarmSpec.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(SwarmSpec, Name, Labels, Orchestration, Raft, Dispatcher, CAConfig, EncryptionConfig, TaskDefaults)

void SwarmSpec::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->labels)>(openapi::StringT(OPENAPI_LITERAL(Labels)), this->labels);
    j.AddMember<decltype(this->orchestration)>(openapi::StringT(OPENAPI_LITERAL(Orchestration)), this->orchestration);
    j.AddMember<decltype(this->raft)>(openapi::StringT(OPENAPI_LITERAL(Raft)), this->raft);
    j.AddMember<decltype(this->dispatcher)>(openapi::StringT(OPENAPI_LITERAL(Dispatcher)), this->dispatcher);
    j.AddMember<decltype(this->ca_config)>(openapi::StringT(OPENAPI_LITERAL(CAConfig)), this->ca_config);
    j.AddMember<decltype(this->encryption_config)>(openapi::StringT(OPENAPI_LITERAL(EncryptionConfig)), this->encryption_config);
    j.AddMember<decltype(this->task_defaults)>(openapi::StringT(OPENAPI_LITERAL(TaskDefaults)), this->task_defaults);
}

void SwarmSpec::FromJSON(const Json & j)
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
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Orchestration))))
    {
        using V = remove_optional<decltype(this->orchestration)>::type;
        this->orchestration = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Orchestration)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Raft))))
    {
        using V = remove_optional<decltype(this->raft)>::type;
        this->raft = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Raft)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Dispatcher))))
    {
        using V = remove_optional<decltype(this->dispatcher)>::type;
        this->dispatcher = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Dispatcher)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CAConfig))))
    {
        using V = remove_optional<decltype(this->ca_config)>::type;
        this->ca_config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CAConfig)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(EncryptionConfig))))
    {
        using V = remove_optional<decltype(this->encryption_config)>::type;
        this->encryption_config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(EncryptionConfig)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(TaskDefaults))))
    {
        using V = remove_optional<decltype(this->task_defaults)>::type;
        this->task_defaults = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(TaskDefaults)));
    }
}

