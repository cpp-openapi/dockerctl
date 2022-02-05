/*
 * SwarmInfo.cpp
 *
 * Represents generic information about swarm. 
 */

#include "SwarmInfo.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(SwarmInfo, NodeID, NodeAddr, LocalNodeState, ControlAvailable, Error, RemoteManagers, Nodes, Managers, Cluster)

void SwarmInfo::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->node_id)>(openapi::StringT(OPENAPI_LITERAL(NodeID)), this->node_id);
    j.AddMember<decltype(this->node_addr)>(openapi::StringT(OPENAPI_LITERAL(NodeAddr)), this->node_addr);
    j.AddMember<decltype(this->local_node_state)>(openapi::StringT(OPENAPI_LITERAL(LocalNodeState)), this->local_node_state);
    j.AddMember<decltype(this->control_available)>(openapi::StringT(OPENAPI_LITERAL(ControlAvailable)), this->control_available);
    j.AddMember<decltype(this->error)>(openapi::StringT(OPENAPI_LITERAL(Error)), this->error);
    j.AddMember<decltype(this->remote_managers)>(openapi::StringT(OPENAPI_LITERAL(RemoteManagers)), this->remote_managers);
    j.AddMember<decltype(this->nodes)>(openapi::StringT(OPENAPI_LITERAL(Nodes)), this->nodes);
    j.AddMember<decltype(this->managers)>(openapi::StringT(OPENAPI_LITERAL(Managers)), this->managers);
    j.AddMember<decltype(this->cluster)>(openapi::StringT(OPENAPI_LITERAL(Cluster)), this->cluster);
}

void SwarmInfo::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NodeID))))
    {
        using V = remove_optional<decltype(this->node_id)>::type;
        this->node_id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NodeID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NodeAddr))))
    {
        using V = remove_optional<decltype(this->node_addr)>::type;
        this->node_addr = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NodeAddr)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(LocalNodeState))))
    {
        using V = remove_optional<decltype(this->local_node_state)>::type;
        this->local_node_state = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(LocalNodeState)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ControlAvailable))))
    {
        using V = remove_optional<decltype(this->control_available)>::type;
        this->control_available = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ControlAvailable)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Error))))
    {
        using V = remove_optional<decltype(this->error)>::type;
        this->error = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Error)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(RemoteManagers))))
    {
        using V = remove_optional<decltype(this->remote_managers)>::type;
        this->remote_managers = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(RemoteManagers)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Nodes))))
    {
        using V = remove_optional<decltype(this->nodes)>::type;
        this->nodes = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Nodes)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Managers))))
    {
        using V = remove_optional<decltype(this->managers)>::type;
        this->managers = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Managers)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Cluster))))
    {
        using V = remove_optional<decltype(this->cluster)>::type;
        this->cluster = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Cluster)));
    }
}

