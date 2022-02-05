/*
 * ExecConfig.cpp
 *
 * 
 */

#include "ExecConfig.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ExecConfig, AttachStdin, AttachStdout, AttachStderr, DetachKeys, Tty, Env, Cmd, Privileged, User, WorkingDir)

void ExecConfig::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->attach_stdin)>(openapi::StringT(OPENAPI_LITERAL(AttachStdin)), this->attach_stdin);
    j.AddMember<decltype(this->attach_stdout)>(openapi::StringT(OPENAPI_LITERAL(AttachStdout)), this->attach_stdout);
    j.AddMember<decltype(this->attach_stderr)>(openapi::StringT(OPENAPI_LITERAL(AttachStderr)), this->attach_stderr);
    j.AddMember<decltype(this->detach_keys)>(openapi::StringT(OPENAPI_LITERAL(DetachKeys)), this->detach_keys);
    j.AddMember<decltype(this->tty)>(openapi::StringT(OPENAPI_LITERAL(Tty)), this->tty);
    j.AddMember<decltype(this->env)>(openapi::StringT(OPENAPI_LITERAL(Env)), this->env);
    j.AddMember<decltype(this->cmd)>(openapi::StringT(OPENAPI_LITERAL(Cmd)), this->cmd);
    j.AddMember<decltype(this->privileged)>(openapi::StringT(OPENAPI_LITERAL(Privileged)), this->privileged);
    j.AddMember<decltype(this->user)>(openapi::StringT(OPENAPI_LITERAL(User)), this->user);
    j.AddMember<decltype(this->working_dir)>(openapi::StringT(OPENAPI_LITERAL(WorkingDir)), this->working_dir);
}

void ExecConfig::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(AttachStdin))))
    {
        using V = remove_optional<decltype(this->attach_stdin)>::type;
        this->attach_stdin = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(AttachStdin)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(AttachStdout))))
    {
        using V = remove_optional<decltype(this->attach_stdout)>::type;
        this->attach_stdout = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(AttachStdout)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(AttachStderr))))
    {
        using V = remove_optional<decltype(this->attach_stderr)>::type;
        this->attach_stderr = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(AttachStderr)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DetachKeys))))
    {
        using V = remove_optional<decltype(this->detach_keys)>::type;
        this->detach_keys = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DetachKeys)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Tty))))
    {
        using V = remove_optional<decltype(this->tty)>::type;
        this->tty = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Tty)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Env))))
    {
        using V = remove_optional<decltype(this->env)>::type;
        this->env = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Env)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Cmd))))
    {
        using V = remove_optional<decltype(this->cmd)>::type;
        this->cmd = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Cmd)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Privileged))))
    {
        using V = remove_optional<decltype(this->privileged)>::type;
        this->privileged = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Privileged)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(User))))
    {
        using V = remove_optional<decltype(this->user)>::type;
        this->user = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(User)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(WorkingDir))))
    {
        using V = remove_optional<decltype(this->working_dir)>::type;
        this->working_dir = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(WorkingDir)));
    }
}

