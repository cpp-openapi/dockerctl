/*
 * SystemVersionComponents.cpp
 *
 * 
 */

#include "SystemVersionComponents.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(SystemVersionComponents, Name, Version, Details)

void SystemVersionComponents::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->version)>(openapi::StringT(OPENAPI_LITERAL(Version)), this->version);
    j.AddMember<decltype(this->details)>(openapi::StringT(OPENAPI_LITERAL(Details)), this->details);
}

void SystemVersionComponents::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Version))))
    {
        using V = remove_optional<decltype(this->version)>::type;
        this->version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Version)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Details))))
    {
        using V = remove_optional<decltype(this->details)>::type;
        this->details = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Details)));
    }
}

