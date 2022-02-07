/*
 * Swarm.cpp
 *
 * 
 */

#include "Swarm.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(Swarm, ID, Version, CreatedAt, UpdatedAt, Spec, TLSInfo, RootRotationInProgress, DataPathPort, DefaultAddrPool, SubnetSize, JoinTokens)

void Swarm::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(ID)), this->id);
    j.AddMember<decltype(this->version)>(openapi::StringT(OPENAPI_LITERAL(Version)), this->version);
    j.AddMember<decltype(this->created_at)>(openapi::StringT(OPENAPI_LITERAL(CreatedAt)), this->created_at);
    j.AddMember<decltype(this->updated_at)>(openapi::StringT(OPENAPI_LITERAL(UpdatedAt)), this->updated_at);
    j.AddMember<decltype(this->spec)>(openapi::StringT(OPENAPI_LITERAL(Spec)), this->spec);
    j.AddMember<decltype(this->tls_info)>(openapi::StringT(OPENAPI_LITERAL(TLSInfo)), this->tls_info);
    j.AddMember<decltype(this->root_rotation_in_progress)>(openapi::StringT(OPENAPI_LITERAL(RootRotationInProgress)), this->root_rotation_in_progress);
    j.AddMember<decltype(this->data_path_port)>(openapi::StringT(OPENAPI_LITERAL(DataPathPort)), this->data_path_port);
    j.AddMember<decltype(this->default_addr_pool)>(openapi::StringT(OPENAPI_LITERAL(DefaultAddrPool)), this->default_addr_pool);
    j.AddMember<decltype(this->subnet_size)>(openapi::StringT(OPENAPI_LITERAL(SubnetSize)), this->subnet_size);
    j.AddMember<decltype(this->join_tokens)>(openapi::StringT(OPENAPI_LITERAL(JoinTokens)), this->join_tokens);
}

void Swarm::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ID))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Version))))
    {
        using V = remove_optional<decltype(this->version)>::type;
        this->version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Version)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CreatedAt))))
    {
        using V = remove_optional<decltype(this->created_at)>::type;
        this->created_at = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CreatedAt)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(UpdatedAt))))
    {
        using V = remove_optional<decltype(this->updated_at)>::type;
        this->updated_at = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(UpdatedAt)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Spec))))
    {
        using V = remove_optional<decltype(this->spec)>::type;
        this->spec = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Spec)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(TLSInfo))))
    {
        using V = remove_optional<decltype(this->tls_info)>::type;
        this->tls_info = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(TLSInfo)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(RootRotationInProgress))))
    {
        using V = remove_optional<decltype(this->root_rotation_in_progress)>::type;
        this->root_rotation_in_progress = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(RootRotationInProgress)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DataPathPort))))
    {
        using V = remove_optional<decltype(this->data_path_port)>::type;
        this->data_path_port = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DataPathPort)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DefaultAddrPool))))
    {
        using V = remove_optional<decltype(this->default_addr_pool)>::type;
        this->default_addr_pool = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DefaultAddrPool)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SubnetSize))))
    {
        using V = remove_optional<decltype(this->subnet_size)>::type;
        this->subnet_size = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SubnetSize)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(JoinTokens))))
    {
        using V = remove_optional<decltype(this->join_tokens)>::type;
        this->join_tokens = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(JoinTokens)));
    }
}

