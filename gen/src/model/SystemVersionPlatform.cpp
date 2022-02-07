/*
 * SystemVersionPlatform.cpp
 *
 * 
 */

#include "SystemVersionPlatform.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(SystemVersionPlatform, Name)

void SystemVersionPlatform::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
}

void SystemVersionPlatform::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
}

