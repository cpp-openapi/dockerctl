/*
 * HealthcheckResult.cpp
 *
 * HealthcheckResult stores information about a single run of a healthcheck probe 
 */

#include "HealthcheckResult.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(HealthcheckResult, Start, End, ExitCode, Output)

void HealthcheckResult::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->start)>(openapi::StringT(OPENAPI_LITERAL(Start)), this->start);
    j.AddMember<decltype(this->end)>(openapi::StringT(OPENAPI_LITERAL(End)), this->end);
    j.AddMember<decltype(this->exit_code)>(openapi::StringT(OPENAPI_LITERAL(ExitCode)), this->exit_code);
    j.AddMember<decltype(this->output)>(openapi::StringT(OPENAPI_LITERAL(Output)), this->output);
}

void HealthcheckResult::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Start))))
    {
        using V = remove_optional<decltype(this->start)>::type;
        this->start = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Start)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(End))))
    {
        using V = remove_optional<decltype(this->end)>::type;
        this->end = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(End)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ExitCode))))
    {
        using V = remove_optional<decltype(this->exit_code)>::type;
        this->exit_code = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ExitCode)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Output))))
    {
        using V = remove_optional<decltype(this->output)>::type;
        this->output = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Output)));
    }
}

