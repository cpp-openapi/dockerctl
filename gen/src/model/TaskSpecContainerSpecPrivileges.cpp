/*
 * TaskSpecContainerSpecPrivileges.cpp
 *
 * Security options for the container
 */

#include "TaskSpecContainerSpecPrivileges.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(TaskSpecContainerSpecPrivileges, CredentialSpec, SELinuxContext)

void TaskSpecContainerSpecPrivileges::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->credential_spec)>(openapi::StringT(OPENAPI_LITERAL(CredentialSpec)), this->credential_spec);
    j.AddMember<decltype(this->se_linux_context)>(openapi::StringT(OPENAPI_LITERAL(SELinuxContext)), this->se_linux_context);
}

void TaskSpecContainerSpecPrivileges::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CredentialSpec))))
    {
        using V = remove_optional<decltype(this->credential_spec)>::type;
        this->credential_spec = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CredentialSpec)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SELinuxContext))))
    {
        using V = remove_optional<decltype(this->se_linux_context)>::type;
        this->se_linux_context = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SELinuxContext)));
    }
}

