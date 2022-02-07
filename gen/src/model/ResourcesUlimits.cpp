/*
 * ResourcesUlimits.cpp
 *
 * 
 */

#include "ResourcesUlimits.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ResourcesUlimits, Name, Soft, Hard)

void ResourcesUlimits::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->soft)>(openapi::StringT(OPENAPI_LITERAL(Soft)), this->soft);
    j.AddMember<decltype(this->hard)>(openapi::StringT(OPENAPI_LITERAL(Hard)), this->hard);
}

void ResourcesUlimits::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Soft))))
    {
        using V = remove_optional<decltype(this->soft)>::type;
        this->soft = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Soft)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Hard))))
    {
        using V = remove_optional<decltype(this->hard)>::type;
        this->hard = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Hard)));
    }
}

