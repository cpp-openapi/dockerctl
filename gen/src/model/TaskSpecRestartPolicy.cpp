/*
 * TaskSpecRestartPolicy.cpp
 *
 * Specification for the restart policy which applies to containers created as part of this service. 
 */

#include "TaskSpecRestartPolicy.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(TaskSpecRestartPolicy, Condition, Delay, MaxAttempts, Window)

void TaskSpecRestartPolicy::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->condition)>(openapi::StringT(OPENAPI_LITERAL(Condition)), this->condition);
    j.AddMember<decltype(this->delay)>(openapi::StringT(OPENAPI_LITERAL(Delay)), this->delay);
    j.AddMember<decltype(this->max_attempts)>(openapi::StringT(OPENAPI_LITERAL(MaxAttempts)), this->max_attempts);
    j.AddMember<decltype(this->window)>(openapi::StringT(OPENAPI_LITERAL(Window)), this->window);
}

void TaskSpecRestartPolicy::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Condition))))
    {
        using V = remove_optional<decltype(this->condition)>::type;
        this->condition = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Condition)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Delay))))
    {
        using V = remove_optional<decltype(this->delay)>::type;
        this->delay = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Delay)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MaxAttempts))))
    {
        using V = remove_optional<decltype(this->max_attempts)>::type;
        this->max_attempts = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MaxAttempts)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Window))))
    {
        using V = remove_optional<decltype(this->window)>::type;
        this->window = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Window)));
    }
}

