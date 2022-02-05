/*
 * EndpointPortConfig.cpp
 *
 * 
 */

#include "EndpointPortConfig.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(EndpointPortConfig, Name, Protocol, TargetPort, PublishedPort, PublishMode)

void EndpointPortConfig::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->protocol)>(openapi::StringT(OPENAPI_LITERAL(Protocol)), this->protocol);
    j.AddMember<decltype(this->target_port)>(openapi::StringT(OPENAPI_LITERAL(TargetPort)), this->target_port);
    j.AddMember<decltype(this->published_port)>(openapi::StringT(OPENAPI_LITERAL(PublishedPort)), this->published_port);
    j.AddMember<decltype(this->publish_mode)>(openapi::StringT(OPENAPI_LITERAL(PublishMode)), this->publish_mode);
}

void EndpointPortConfig::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Protocol))))
    {
        using V = remove_optional<decltype(this->protocol)>::type;
        this->protocol = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Protocol)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(TargetPort))))
    {
        using V = remove_optional<decltype(this->target_port)>::type;
        this->target_port = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(TargetPort)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PublishedPort))))
    {
        using V = remove_optional<decltype(this->published_port)>::type;
        this->published_port = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PublishedPort)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PublishMode))))
    {
        using V = remove_optional<decltype(this->publish_mode)>::type;
        this->publish_mode = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PublishMode)));
    }
}

