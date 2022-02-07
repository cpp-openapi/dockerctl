/*
 * SwarmSpecTaskDefaultsLogDriver.cpp
 *
 * The log driver to use for tasks created in the orchestrator if unspecified by a service.  Updating this value only affects new tasks. Existing tasks continue to use their previously configured log driver until recreated. 
 */

#include "SwarmSpecTaskDefaultsLogDriver.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(SwarmSpecTaskDefaultsLogDriver, Name, Options)

void SwarmSpecTaskDefaultsLogDriver::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->options)>(openapi::StringT(OPENAPI_LITERAL(Options)), this->options);
}

void SwarmSpecTaskDefaultsLogDriver::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Options))))
    {
        using V = remove_optional<decltype(this->options)>::type;
        this->options = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Options)));
    }
}

