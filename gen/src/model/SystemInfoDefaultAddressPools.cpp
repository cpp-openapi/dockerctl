/*
 * SystemInfoDefaultAddressPools.cpp
 *
 * 
 */

#include "SystemInfoDefaultAddressPools.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(SystemInfoDefaultAddressPools, Base, Size)

void SystemInfoDefaultAddressPools::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->base)>(openapi::StringT(OPENAPI_LITERAL(Base)), this->base);
    j.AddMember<decltype(this->size)>(openapi::StringT(OPENAPI_LITERAL(Size)), this->size);
}

void SystemInfoDefaultAddressPools::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Base))))
    {
        using V = remove_optional<decltype(this->base)>::type;
        this->base = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Base)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Size))))
    {
        using V = remove_optional<decltype(this->size)>::type;
        this->size = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Size)));
    }
}

