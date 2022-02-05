/*
 * PluginEnv.cpp
 *
 * 
 */

#include "PluginEnv.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(PluginEnv, Name, Description, Settable, Value)

void PluginEnv::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->description)>(openapi::StringT(OPENAPI_LITERAL(Description)), this->description);
    j.AddMember<decltype(this->settable)>(openapi::StringT(OPENAPI_LITERAL(Settable)), this->settable);
    j.AddMember<decltype(this->value)>(openapi::StringT(OPENAPI_LITERAL(Value)), this->value);
}

void PluginEnv::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Description))))
    {
        using V = remove_optional<decltype(this->description)>::type;
        this->description = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Description)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Settable))))
    {
        using V = remove_optional<decltype(this->settable)>::type;
        this->settable = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Settable)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Value))))
    {
        using V = remove_optional<decltype(this->value)>::type;
        this->value = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Value)));
    }
}

