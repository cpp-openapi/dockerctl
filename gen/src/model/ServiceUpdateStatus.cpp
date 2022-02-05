/*
 * ServiceUpdateStatus.cpp
 *
 * The status of a service update.
 */

#include "ServiceUpdateStatus.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ServiceUpdateStatus, State, StartedAt, CompletedAt, Message)

void ServiceUpdateStatus::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->state)>(openapi::StringT(OPENAPI_LITERAL(State)), this->state);
    j.AddMember<decltype(this->started_at)>(openapi::StringT(OPENAPI_LITERAL(StartedAt)), this->started_at);
    j.AddMember<decltype(this->completed_at)>(openapi::StringT(OPENAPI_LITERAL(CompletedAt)), this->completed_at);
    j.AddMember<decltype(this->message)>(openapi::StringT(OPENAPI_LITERAL(Message)), this->message);
}

void ServiceUpdateStatus::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(State))))
    {
        using V = remove_optional<decltype(this->state)>::type;
        this->state = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(State)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(StartedAt))))
    {
        using V = remove_optional<decltype(this->started_at)>::type;
        this->started_at = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(StartedAt)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CompletedAt))))
    {
        using V = remove_optional<decltype(this->completed_at)>::type;
        this->completed_at = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CompletedAt)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Message))))
    {
        using V = remove_optional<decltype(this->message)>::type;
        this->message = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Message)));
    }
}

