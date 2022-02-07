/*
 * TaskStatusContainerStatus.cpp
 *
 * 
 */

#include "TaskStatusContainerStatus.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(TaskStatusContainerStatus, ContainerID, PID, ExitCode)

void TaskStatusContainerStatus::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->container_id)>(openapi::StringT(OPENAPI_LITERAL(ContainerID)), this->container_id);
    j.AddMember<decltype(this->pid)>(openapi::StringT(OPENAPI_LITERAL(PID)), this->pid);
    j.AddMember<decltype(this->exit_code)>(openapi::StringT(OPENAPI_LITERAL(ExitCode)), this->exit_code);
}

void TaskStatusContainerStatus::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ContainerID))))
    {
        using V = remove_optional<decltype(this->container_id)>::type;
        this->container_id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ContainerID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PID))))
    {
        using V = remove_optional<decltype(this->pid)>::type;
        this->pid = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ExitCode))))
    {
        using V = remove_optional<decltype(this->exit_code)>::type;
        this->exit_code = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ExitCode)));
    }
}

