/*
 * TaskSpecContainerSpecPrivilegesSELinuxContext.cpp
 *
 * SELinux labels of the container
 */

#include "TaskSpecContainerSpecPrivilegesSELinuxContext.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(TaskSpecContainerSpecPrivilegesSELinuxContext, Disable, User, Role, Type, Level)

void TaskSpecContainerSpecPrivilegesSELinuxContext::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->disable)>(openapi::StringT(OPENAPI_LITERAL(Disable)), this->disable);
    j.AddMember<decltype(this->user)>(openapi::StringT(OPENAPI_LITERAL(User)), this->user);
    j.AddMember<decltype(this->role)>(openapi::StringT(OPENAPI_LITERAL(Role)), this->role);
    j.AddMember<decltype(this->type)>(openapi::StringT(OPENAPI_LITERAL(Type)), this->type);
    j.AddMember<decltype(this->level)>(openapi::StringT(OPENAPI_LITERAL(Level)), this->level);
}

void TaskSpecContainerSpecPrivilegesSELinuxContext::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Disable))))
    {
        using V = remove_optional<decltype(this->disable)>::type;
        this->disable = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Disable)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(User))))
    {
        using V = remove_optional<decltype(this->user)>::type;
        this->user = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(User)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Role))))
    {
        using V = remove_optional<decltype(this->role)>::type;
        this->role = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Role)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Type))))
    {
        using V = remove_optional<decltype(this->type)>::type;
        this->type = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Type)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Level))))
    {
        using V = remove_optional<decltype(this->level)>::type;
        this->level = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Level)));
    }
}

