/*
 * PeerNode.cpp
 *
 * Represents a peer-node in the swarm
 */

#include "PeerNode.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(PeerNode, NodeID, Addr)

void PeerNode::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->node_id)>(openapi::StringT(OPENAPI_LITERAL(NodeID)), this->node_id);
    j.AddMember<decltype(this->addr)>(openapi::StringT(OPENAPI_LITERAL(Addr)), this->addr);
}

void PeerNode::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NodeID))))
    {
        using V = remove_optional<decltype(this->node_id)>::type;
        this->node_id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NodeID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Addr))))
    {
        using V = remove_optional<decltype(this->addr)>::type;
        this->addr = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Addr)));
    }
}

