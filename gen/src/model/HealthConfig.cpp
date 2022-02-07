/*
 * HealthConfig.cpp
 *
 * A test to perform to check that the container is healthy.
 */

#include "HealthConfig.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(HealthConfig, Test, Interval, Timeout, Retries, StartPeriod)

void HealthConfig::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->test)>(openapi::StringT(OPENAPI_LITERAL(Test)), this->test);
    j.AddMember<decltype(this->interval)>(openapi::StringT(OPENAPI_LITERAL(Interval)), this->interval);
    j.AddMember<decltype(this->timeout)>(openapi::StringT(OPENAPI_LITERAL(Timeout)), this->timeout);
    j.AddMember<decltype(this->retries)>(openapi::StringT(OPENAPI_LITERAL(Retries)), this->retries);
    j.AddMember<decltype(this->start_period)>(openapi::StringT(OPENAPI_LITERAL(StartPeriod)), this->start_period);
}

void HealthConfig::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Test))))
    {
        using V = remove_optional<decltype(this->test)>::type;
        this->test = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Test)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Interval))))
    {
        using V = remove_optional<decltype(this->interval)>::type;
        this->interval = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Interval)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Timeout))))
    {
        using V = remove_optional<decltype(this->timeout)>::type;
        this->timeout = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Timeout)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Retries))))
    {
        using V = remove_optional<decltype(this->retries)>::type;
        this->retries = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Retries)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(StartPeriod))))
    {
        using V = remove_optional<decltype(this->start_period)>::type;
        this->start_period = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(StartPeriod)));
    }
}

