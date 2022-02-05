/*
 * DeviceRequest.cpp
 *
 * A request for devices to be sent to device drivers
 */

#include "DeviceRequest.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(DeviceRequest, Driver, Count, DeviceIDs, Capabilities, Options)

void DeviceRequest::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->driver)>(openapi::StringT(OPENAPI_LITERAL(Driver)), this->driver);
    j.AddMember<decltype(this->count)>(openapi::StringT(OPENAPI_LITERAL(Count)), this->count);
    j.AddMember<decltype(this->device_ids)>(openapi::StringT(OPENAPI_LITERAL(DeviceIDs)), this->device_ids);
    j.AddMember<decltype(this->capabilities)>(openapi::StringT(OPENAPI_LITERAL(Capabilities)), this->capabilities);
    j.AddMember<decltype(this->options)>(openapi::StringT(OPENAPI_LITERAL(Options)), this->options);
}

void DeviceRequest::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Driver))))
    {
        using V = remove_optional<decltype(this->driver)>::type;
        this->driver = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Driver)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Count))))
    {
        using V = remove_optional<decltype(this->count)>::type;
        this->count = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Count)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DeviceIDs))))
    {
        using V = remove_optional<decltype(this->device_ids)>::type;
        this->device_ids = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DeviceIDs)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Capabilities))))
    {
        using V = remove_optional<decltype(this->capabilities)>::type;
        this->capabilities = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Capabilities)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Options))))
    {
        using V = remove_optional<decltype(this->options)>::type;
        this->options = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Options)));
    }
}

