/*
 * IndexInfo.cpp
 *
 * IndexInfo contains information about a registry.
 */

#include "IndexInfo.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(IndexInfo, Name, Mirrors, Secure, Official)

void IndexInfo::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->mirrors)>(openapi::StringT(OPENAPI_LITERAL(Mirrors)), this->mirrors);
    j.AddMember<decltype(this->secure)>(openapi::StringT(OPENAPI_LITERAL(Secure)), this->secure);
    j.AddMember<decltype(this->official)>(openapi::StringT(OPENAPI_LITERAL(Official)), this->official);
}

void IndexInfo::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Mirrors))))
    {
        using V = remove_optional<decltype(this->mirrors)>::type;
        this->mirrors = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Mirrors)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Secure))))
    {
        using V = remove_optional<decltype(this->secure)>::type;
        this->secure = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Secure)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Official))))
    {
        using V = remove_optional<decltype(this->official)>::type;
        this->official = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Official)));
    }
}

