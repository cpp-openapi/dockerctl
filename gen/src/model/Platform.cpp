/*
 * Platform.cpp
 *
 * Platform represents the platform (Arch/OS). 
 */

#include "Platform.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(Platform, Architecture, OS)

void Platform::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->architecture)>(openapi::StringT(OPENAPI_LITERAL(Architecture)), this->architecture);
    j.AddMember<decltype(this->os)>(openapi::StringT(OPENAPI_LITERAL(OS)), this->os);
}

void Platform::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Architecture))))
    {
        using V = remove_optional<decltype(this->architecture)>::type;
        this->architecture = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Architecture)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(OS))))
    {
        using V = remove_optional<decltype(this->os)>::type;
        this->os = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(OS)));
    }
}

