/*
 * TaskSpecContainerSpecDNSConfig.cpp
 *
 * Specification for DNS related configurations in resolver configuration file (&#x60;resolv.conf&#x60;). 
 */

#include "TaskSpecContainerSpecDNSConfig.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(TaskSpecContainerSpecDNSConfig, Nameservers, Search, Options)

void TaskSpecContainerSpecDNSConfig::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->nameservers)>(openapi::StringT(OPENAPI_LITERAL(Nameservers)), this->nameservers);
    j.AddMember<decltype(this->search)>(openapi::StringT(OPENAPI_LITERAL(Search)), this->search);
    j.AddMember<decltype(this->options)>(openapi::StringT(OPENAPI_LITERAL(Options)), this->options);
}

void TaskSpecContainerSpecDNSConfig::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Nameservers))))
    {
        using V = remove_optional<decltype(this->nameservers)>::type;
        this->nameservers = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Nameservers)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Search))))
    {
        using V = remove_optional<decltype(this->search)>::type;
        this->search = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Search)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Options))))
    {
        using V = remove_optional<decltype(this->options)>::type;
        this->options = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Options)));
    }
}

