/*
 * RestartPolicy.cpp
 *
 * The behavior to apply when the container exits. The default is not to restart.  An ever increasing delay (double the previous delay, starting at 100ms) is added before each restart to prevent flooding the server. 
 */

#include "RestartPolicy.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(RestartPolicy, Name, MaximumRetryCount)

void RestartPolicy::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->maximum_retry_count)>(openapi::StringT(OPENAPI_LITERAL(MaximumRetryCount)), this->maximum_retry_count);
}

void RestartPolicy::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MaximumRetryCount))))
    {
        using V = remove_optional<decltype(this->maximum_retry_count)>::type;
        this->maximum_retry_count = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MaximumRetryCount)));
    }
}

