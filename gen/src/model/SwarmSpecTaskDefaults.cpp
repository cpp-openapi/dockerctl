/*
 * SwarmSpecTaskDefaults.cpp
 *
 * Defaults for creating tasks in this cluster.
 */

#include "SwarmSpecTaskDefaults.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(SwarmSpecTaskDefaults, LogDriver)

void SwarmSpecTaskDefaults::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->log_driver)>(openapi::StringT(OPENAPI_LITERAL(LogDriver)), this->log_driver);
}

void SwarmSpecTaskDefaults::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(LogDriver))))
    {
        using V = remove_optional<decltype(this->log_driver)>::type;
        this->log_driver = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(LogDriver)));
    }
}

