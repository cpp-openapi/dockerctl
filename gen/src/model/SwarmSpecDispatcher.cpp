/*
 * SwarmSpecDispatcher.cpp
 *
 * Dispatcher configuration.
 */

#include "SwarmSpecDispatcher.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(SwarmSpecDispatcher, HeartbeatPeriod)

void SwarmSpecDispatcher::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->heartbeat_period)>(openapi::StringT(OPENAPI_LITERAL(HeartbeatPeriod)), this->heartbeat_period);
}

void SwarmSpecDispatcher::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(HeartbeatPeriod))))
    {
        using V = remove_optional<decltype(this->heartbeat_period)>::type;
        this->heartbeat_period = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(HeartbeatPeriod)));
    }
}

