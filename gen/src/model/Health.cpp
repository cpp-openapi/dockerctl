/*
 * Health.cpp
 *
 * Health stores information about the container&#39;s healthcheck results. 
 */

#include "Health.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(Health, Status, FailingStreak, Log)

void Health::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->status)>(openapi::StringT(OPENAPI_LITERAL(Status)), this->status);
    j.AddMember<decltype(this->failing_streak)>(openapi::StringT(OPENAPI_LITERAL(FailingStreak)), this->failing_streak);
    j.AddMember<decltype(this->log)>(openapi::StringT(OPENAPI_LITERAL(Log)), this->log);
}

void Health::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Status))))
    {
        using V = remove_optional<decltype(this->status)>::type;
        this->status = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Status)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(FailingStreak))))
    {
        using V = remove_optional<decltype(this->failing_streak)>::type;
        this->failing_streak = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(FailingStreak)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Log))))
    {
        using V = remove_optional<decltype(this->log)>::type;
        this->log = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Log)));
    }
}

