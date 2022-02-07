/*
 * ProcessConfig.cpp
 *
 * 
 */

#include "ProcessConfig.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ProcessConfig, privileged, user, tty, entrypoint, arguments)

void ProcessConfig::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->privileged)>(openapi::StringT(OPENAPI_LITERAL(privileged)), this->privileged);
    j.AddMember<decltype(this->user)>(openapi::StringT(OPENAPI_LITERAL(user)), this->user);
    j.AddMember<decltype(this->tty)>(openapi::StringT(OPENAPI_LITERAL(tty)), this->tty);
    j.AddMember<decltype(this->entrypoint)>(openapi::StringT(OPENAPI_LITERAL(entrypoint)), this->entrypoint);
    j.AddMember<decltype(this->arguments)>(openapi::StringT(OPENAPI_LITERAL(arguments)), this->arguments);
}

void ProcessConfig::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(privileged))))
    {
        using V = remove_optional<decltype(this->privileged)>::type;
        this->privileged = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(privileged)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(user))))
    {
        using V = remove_optional<decltype(this->user)>::type;
        this->user = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(user)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(tty))))
    {
        using V = remove_optional<decltype(this->tty)>::type;
        this->tty = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(tty)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(entrypoint))))
    {
        using V = remove_optional<decltype(this->entrypoint)>::type;
        this->entrypoint = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(entrypoint)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(arguments))))
    {
        using V = remove_optional<decltype(this->arguments)>::type;
        this->arguments = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(arguments)));
    }
}

