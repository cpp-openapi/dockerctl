/*
 * ManagerStatus.cpp
 *
 * ManagerStatus represents the status of a manager.  It provides the current status of a node&#39;s manager component, if the node is a manager. 
 */

#include "ManagerStatus.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ManagerStatus, Leader, Reachability, Addr)

void ManagerStatus::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->leader)>(openapi::StringT(OPENAPI_LITERAL(Leader)), this->leader);
    j.AddMember<decltype(this->reachability)>(openapi::StringT(OPENAPI_LITERAL(Reachability)), this->reachability);
    j.AddMember<decltype(this->addr)>(openapi::StringT(OPENAPI_LITERAL(Addr)), this->addr);
}

void ManagerStatus::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Leader))))
    {
        using V = remove_optional<decltype(this->leader)>::type;
        this->leader = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Leader)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Reachability))))
    {
        using V = remove_optional<decltype(this->reachability)>::type;
        this->reachability = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Reachability)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Addr))))
    {
        using V = remove_optional<decltype(this->addr)>::type;
        this->addr = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Addr)));
    }
}

