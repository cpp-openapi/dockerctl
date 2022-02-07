/*
 * ContainerState.cpp
 *
 * ContainerState stores container&#39;s running state. It&#39;s part of ContainerJSONBase and will be returned by the \&quot;inspect\&quot; command. 
 */

#include "ContainerState.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ContainerState, Status, Running, Paused, Restarting, OOMKilled, Dead, Pid, ExitCode, Error, StartedAt, FinishedAt, Health)

void ContainerState::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->status)>(openapi::StringT(OPENAPI_LITERAL(Status)), this->status);
    j.AddMember<decltype(this->running)>(openapi::StringT(OPENAPI_LITERAL(Running)), this->running);
    j.AddMember<decltype(this->paused)>(openapi::StringT(OPENAPI_LITERAL(Paused)), this->paused);
    j.AddMember<decltype(this->restarting)>(openapi::StringT(OPENAPI_LITERAL(Restarting)), this->restarting);
    j.AddMember<decltype(this->oom_killed)>(openapi::StringT(OPENAPI_LITERAL(OOMKilled)), this->oom_killed);
    j.AddMember<decltype(this->dead)>(openapi::StringT(OPENAPI_LITERAL(Dead)), this->dead);
    j.AddMember<decltype(this->pid)>(openapi::StringT(OPENAPI_LITERAL(Pid)), this->pid);
    j.AddMember<decltype(this->exit_code)>(openapi::StringT(OPENAPI_LITERAL(ExitCode)), this->exit_code);
    j.AddMember<decltype(this->error)>(openapi::StringT(OPENAPI_LITERAL(Error)), this->error);
    j.AddMember<decltype(this->started_at)>(openapi::StringT(OPENAPI_LITERAL(StartedAt)), this->started_at);
    j.AddMember<decltype(this->finished_at)>(openapi::StringT(OPENAPI_LITERAL(FinishedAt)), this->finished_at);
    j.AddMember<decltype(this->health)>(openapi::StringT(OPENAPI_LITERAL(Health)), this->health);
}

void ContainerState::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Status))))
    {
        using V = remove_optional<decltype(this->status)>::type;
        this->status = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Status)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Running))))
    {
        using V = remove_optional<decltype(this->running)>::type;
        this->running = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Running)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Paused))))
    {
        using V = remove_optional<decltype(this->paused)>::type;
        this->paused = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Paused)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Restarting))))
    {
        using V = remove_optional<decltype(this->restarting)>::type;
        this->restarting = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Restarting)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(OOMKilled))))
    {
        using V = remove_optional<decltype(this->oom_killed)>::type;
        this->oom_killed = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(OOMKilled)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Dead))))
    {
        using V = remove_optional<decltype(this->dead)>::type;
        this->dead = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Dead)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Pid))))
    {
        using V = remove_optional<decltype(this->pid)>::type;
        this->pid = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Pid)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ExitCode))))
    {
        using V = remove_optional<decltype(this->exit_code)>::type;
        this->exit_code = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ExitCode)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Error))))
    {
        using V = remove_optional<decltype(this->error)>::type;
        this->error = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Error)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(StartedAt))))
    {
        using V = remove_optional<decltype(this->started_at)>::type;
        this->started_at = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(StartedAt)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(FinishedAt))))
    {
        using V = remove_optional<decltype(this->finished_at)>::type;
        this->finished_at = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(FinishedAt)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Health))))
    {
        using V = remove_optional<decltype(this->health)>::type;
        this->health = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Health)));
    }
}

