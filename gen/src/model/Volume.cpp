/*
 * Volume.cpp
 *
 * 
 */

#include "Volume.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(Volume, Name, Driver, Mountpoint, CreatedAt, Status, Labels, Scope, Options, UsageData)

void Volume::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->driver)>(openapi::StringT(OPENAPI_LITERAL(Driver)), this->driver);
    j.AddMember<decltype(this->mountpoint)>(openapi::StringT(OPENAPI_LITERAL(Mountpoint)), this->mountpoint);
    j.AddMember<decltype(this->created_at)>(openapi::StringT(OPENAPI_LITERAL(CreatedAt)), this->created_at);
    j.AddMember<decltype(this->status)>(openapi::StringT(OPENAPI_LITERAL(Status)), this->status);
    j.AddMember<decltype(this->labels)>(openapi::StringT(OPENAPI_LITERAL(Labels)), this->labels);
    j.AddMember<decltype(this->scope)>(openapi::StringT(OPENAPI_LITERAL(Scope)), this->scope);
    j.AddMember<decltype(this->options)>(openapi::StringT(OPENAPI_LITERAL(Options)), this->options);
    j.AddMember<decltype(this->usage_data)>(openapi::StringT(OPENAPI_LITERAL(UsageData)), this->usage_data);
}

void Volume::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Driver))))
    {
        using V = remove_optional<decltype(this->driver)>::type;
        this->driver = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Driver)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Mountpoint))))
    {
        using V = remove_optional<decltype(this->mountpoint)>::type;
        this->mountpoint = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Mountpoint)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CreatedAt))))
    {
        using V = remove_optional<decltype(this->created_at)>::type;
        this->created_at = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CreatedAt)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Status))))
    {
        using V = remove_optional<decltype(this->status)>::type;
        this->status = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Status)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Labels))))
    {
        using V = remove_optional<decltype(this->labels)>::type;
        this->labels = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Labels)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Scope))))
    {
        using V = remove_optional<decltype(this->scope)>::type;
        this->scope = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Scope)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Options))))
    {
        using V = remove_optional<decltype(this->options)>::type;
        this->options = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Options)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(UsageData))))
    {
        using V = remove_optional<decltype(this->usage_data)>::type;
        this->usage_data = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(UsageData)));
    }
}

