/*
 * EventMessage.cpp
 *
 * EventMessage represents the information an event contains. 
 */

#include "EventMessage.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(EventMessage, Type, Action, Actor, scope, time, timeNano)

void EventMessage::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->type)>(openapi::StringT(OPENAPI_LITERAL(Type)), this->type);
    j.AddMember<decltype(this->action)>(openapi::StringT(OPENAPI_LITERAL(Action)), this->action);
    j.AddMember<decltype(this->actor)>(openapi::StringT(OPENAPI_LITERAL(Actor)), this->actor);
    j.AddMember<decltype(this->scope)>(openapi::StringT(OPENAPI_LITERAL(scope)), this->scope);
    j.AddMember<decltype(this->time)>(openapi::StringT(OPENAPI_LITERAL(time)), this->time);
    j.AddMember<decltype(this->time_nano)>(openapi::StringT(OPENAPI_LITERAL(timeNano)), this->time_nano);
}

void EventMessage::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Type))))
    {
        using V = remove_optional<decltype(this->type)>::type;
        this->type = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Type)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Action))))
    {
        using V = remove_optional<decltype(this->action)>::type;
        this->action = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Action)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Actor))))
    {
        using V = remove_optional<decltype(this->actor)>::type;
        this->actor = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Actor)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(scope))))
    {
        using V = remove_optional<decltype(this->scope)>::type;
        this->scope = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(scope)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(time))))
    {
        using V = remove_optional<decltype(this->time)>::type;
        this->time = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(time)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(timeNano))))
    {
        using V = remove_optional<decltype(this->time_nano)>::type;
        this->time_nano = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(timeNano)));
    }
}

