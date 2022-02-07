/*
 * NodeStatus.cpp
 *
 * NodeStatus represents the status of a node.  It provides the current status of the node, as seen by the manager. 
 */

#include "NodeStatus.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(NodeStatus, State, Message, Addr)

void NodeStatus::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->state)>(openapi::StringT(OPENAPI_LITERAL(State)), this->state);
    j.AddMember<decltype(this->message)>(openapi::StringT(OPENAPI_LITERAL(Message)), this->message);
    j.AddMember<decltype(this->addr)>(openapi::StringT(OPENAPI_LITERAL(Addr)), this->addr);
}

void NodeStatus::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(State))))
    {
        using V = remove_optional<decltype(this->state)>::type;
        this->state = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(State)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Message))))
    {
        using V = remove_optional<decltype(this->message)>::type;
        this->message = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Message)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Addr))))
    {
        using V = remove_optional<decltype(this->addr)>::type;
        this->addr = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Addr)));
    }
}

