/*
 * TaskSpecContainerSpecPrivilegesCredentialSpec.cpp
 *
 * CredentialSpec for managed service account (Windows only)
 */

#include "TaskSpecContainerSpecPrivilegesCredentialSpec.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(TaskSpecContainerSpecPrivilegesCredentialSpec, Config, File, Registry)

void TaskSpecContainerSpecPrivilegesCredentialSpec::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->config)>(openapi::StringT(OPENAPI_LITERAL(Config)), this->config);
    j.AddMember<decltype(this->file)>(openapi::StringT(OPENAPI_LITERAL(File)), this->file);
    j.AddMember<decltype(this->registry)>(openapi::StringT(OPENAPI_LITERAL(Registry)), this->registry);
}

void TaskSpecContainerSpecPrivilegesCredentialSpec::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Config))))
    {
        using V = remove_optional<decltype(this->config)>::type;
        this->config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Config)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(File))))
    {
        using V = remove_optional<decltype(this->file)>::type;
        this->file = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(File)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Registry))))
    {
        using V = remove_optional<decltype(this->registry)>::type;
        this->registry = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Registry)));
    }
}

