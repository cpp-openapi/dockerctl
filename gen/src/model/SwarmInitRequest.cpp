/*
 * SwarmInitRequest.cpp
 *
 * 
 */

#include "SwarmInitRequest.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(SwarmInitRequest, ListenAddr, AdvertiseAddr, DataPathAddr, DataPathPort, DefaultAddrPool, ForceNewCluster, SubnetSize, Spec)

void SwarmInitRequest::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->listen_addr)>(openapi::StringT(OPENAPI_LITERAL(ListenAddr)), this->listen_addr);
    j.AddMember<decltype(this->advertise_addr)>(openapi::StringT(OPENAPI_LITERAL(AdvertiseAddr)), this->advertise_addr);
    j.AddMember<decltype(this->data_path_addr)>(openapi::StringT(OPENAPI_LITERAL(DataPathAddr)), this->data_path_addr);
    j.AddMember<decltype(this->data_path_port)>(openapi::StringT(OPENAPI_LITERAL(DataPathPort)), this->data_path_port);
    j.AddMember<decltype(this->default_addr_pool)>(openapi::StringT(OPENAPI_LITERAL(DefaultAddrPool)), this->default_addr_pool);
    j.AddMember<decltype(this->force_new_cluster)>(openapi::StringT(OPENAPI_LITERAL(ForceNewCluster)), this->force_new_cluster);
    j.AddMember<decltype(this->subnet_size)>(openapi::StringT(OPENAPI_LITERAL(SubnetSize)), this->subnet_size);
    j.AddMember<decltype(this->spec)>(openapi::StringT(OPENAPI_LITERAL(Spec)), this->spec);
}

void SwarmInitRequest::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ListenAddr))))
    {
        using V = remove_optional<decltype(this->listen_addr)>::type;
        this->listen_addr = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ListenAddr)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(AdvertiseAddr))))
    {
        using V = remove_optional<decltype(this->advertise_addr)>::type;
        this->advertise_addr = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(AdvertiseAddr)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DataPathAddr))))
    {
        using V = remove_optional<decltype(this->data_path_addr)>::type;
        this->data_path_addr = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DataPathAddr)));
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
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ForceNewCluster))))
    {
        using V = remove_optional<decltype(this->force_new_cluster)>::type;
        this->force_new_cluster = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ForceNewCluster)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SubnetSize))))
    {
        using V = remove_optional<decltype(this->subnet_size)>::type;
        this->subnet_size = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SubnetSize)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Spec))))
    {
        using V = remove_optional<decltype(this->spec)>::type;
        this->spec = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Spec)));
    }
}

