/*
 * ThrottleDevice.cpp
 *
 * 
 */

#include "ThrottleDevice.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ThrottleDevice, Path, Rate)

void ThrottleDevice::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->path)>(openapi::StringT(OPENAPI_LITERAL(Path)), this->path);
    j.AddMember<decltype(this->rate)>(openapi::StringT(OPENAPI_LITERAL(Rate)), this->rate);
}

void ThrottleDevice::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Path))))
    {
        using V = remove_optional<decltype(this->path)>::type;
        this->path = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Path)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Rate))))
    {
        using V = remove_optional<decltype(this->rate)>::type;
        this->rate = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Rate)));
    }
}

