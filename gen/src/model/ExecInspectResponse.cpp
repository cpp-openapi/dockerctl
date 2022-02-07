/*
 * ExecInspectResponse.cpp
 *
 * 
 */

#include "ExecInspectResponse.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ExecInspectResponse, CanRemove, DetachKeys, ID, Running, ExitCode, ProcessConfig, OpenStdin, OpenStderr, OpenStdout, ContainerID, Pid)

void ExecInspectResponse::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->can_remove)>(openapi::StringT(OPENAPI_LITERAL(CanRemove)), this->can_remove);
    j.AddMember<decltype(this->detach_keys)>(openapi::StringT(OPENAPI_LITERAL(DetachKeys)), this->detach_keys);
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(ID)), this->id);
    j.AddMember<decltype(this->running)>(openapi::StringT(OPENAPI_LITERAL(Running)), this->running);
    j.AddMember<decltype(this->exit_code)>(openapi::StringT(OPENAPI_LITERAL(ExitCode)), this->exit_code);
    j.AddMember<decltype(this->process_config)>(openapi::StringT(OPENAPI_LITERAL(ProcessConfig)), this->process_config);
    j.AddMember<decltype(this->open_stdin)>(openapi::StringT(OPENAPI_LITERAL(OpenStdin)), this->open_stdin);
    j.AddMember<decltype(this->open_stderr)>(openapi::StringT(OPENAPI_LITERAL(OpenStderr)), this->open_stderr);
    j.AddMember<decltype(this->open_stdout)>(openapi::StringT(OPENAPI_LITERAL(OpenStdout)), this->open_stdout);
    j.AddMember<decltype(this->container_id)>(openapi::StringT(OPENAPI_LITERAL(ContainerID)), this->container_id);
    j.AddMember<decltype(this->pid)>(openapi::StringT(OPENAPI_LITERAL(Pid)), this->pid);
}

void ExecInspectResponse::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CanRemove))))
    {
        using V = remove_optional<decltype(this->can_remove)>::type;
        this->can_remove = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CanRemove)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DetachKeys))))
    {
        using V = remove_optional<decltype(this->detach_keys)>::type;
        this->detach_keys = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DetachKeys)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ID))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Running))))
    {
        using V = remove_optional<decltype(this->running)>::type;
        this->running = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Running)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ExitCode))))
    {
        using V = remove_optional<decltype(this->exit_code)>::type;
        this->exit_code = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ExitCode)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ProcessConfig))))
    {
        using V = remove_optional<decltype(this->process_config)>::type;
        this->process_config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ProcessConfig)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(OpenStdin))))
    {
        using V = remove_optional<decltype(this->open_stdin)>::type;
        this->open_stdin = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(OpenStdin)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(OpenStderr))))
    {
        using V = remove_optional<decltype(this->open_stderr)>::type;
        this->open_stderr = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(OpenStderr)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(OpenStdout))))
    {
        using V = remove_optional<decltype(this->open_stdout)>::type;
        this->open_stdout = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(OpenStdout)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ContainerID))))
    {
        using V = remove_optional<decltype(this->container_id)>::type;
        this->container_id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ContainerID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Pid))))
    {
        using V = remove_optional<decltype(this->pid)>::type;
        this->pid = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Pid)));
    }
}

