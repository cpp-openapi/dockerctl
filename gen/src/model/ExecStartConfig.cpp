/*
 * ExecStartConfig.cpp
 *
 * 
 */

#include "ExecStartConfig.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ExecStartConfig, Detach, Tty)

void ExecStartConfig::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->detach)>(openapi::StringT(OPENAPI_LITERAL(Detach)), this->detach);
    j.AddMember<decltype(this->tty)>(openapi::StringT(OPENAPI_LITERAL(Tty)), this->tty);
}

void ExecStartConfig::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Detach))))
    {
        using V = remove_optional<decltype(this->detach)>::type;
        this->detach = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Detach)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Tty))))
    {
        using V = remove_optional<decltype(this->tty)>::type;
        this->tty = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Tty)));
    }
}

