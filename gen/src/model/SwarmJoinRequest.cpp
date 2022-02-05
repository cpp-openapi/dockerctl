/*
 * SwarmJoinRequest.cpp
 *
 * 
 */

#include "SwarmJoinRequest.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(SwarmJoinRequest, ListenAddr, AdvertiseAddr, DataPathAddr, RemoteAddrs, JoinToken)

void SwarmJoinRequest::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->listen_addr)>(openapi::StringT(OPENAPI_LITERAL(ListenAddr)), this->listen_addr);
    j.AddMember<decltype(this->advertise_addr)>(openapi::StringT(OPENAPI_LITERAL(AdvertiseAddr)), this->advertise_addr);
    j.AddMember<decltype(this->data_path_addr)>(openapi::StringT(OPENAPI_LITERAL(DataPathAddr)), this->data_path_addr);
    j.AddMember<decltype(this->remote_addrs)>(openapi::StringT(OPENAPI_LITERAL(RemoteAddrs)), this->remote_addrs);
    j.AddMember<decltype(this->join_token)>(openapi::StringT(OPENAPI_LITERAL(JoinToken)), this->join_token);
}

void SwarmJoinRequest::FromJSON(const Json & j)
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
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(RemoteAddrs))))
    {
        using V = remove_optional<decltype(this->remote_addrs)>::type;
        this->remote_addrs = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(RemoteAddrs)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(JoinToken))))
    {
        using V = remove_optional<decltype(this->join_token)>::type;
        this->join_token = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(JoinToken)));
    }
}

