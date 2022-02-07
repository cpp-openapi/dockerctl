/*
 * PluginMount.cpp
 *
 * 
 */

#include "PluginMount.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(PluginMount, Name, Description, Settable, Source, Destination, Type, Options)

void PluginMount::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->description)>(openapi::StringT(OPENAPI_LITERAL(Description)), this->description);
    j.AddMember<decltype(this->settable)>(openapi::StringT(OPENAPI_LITERAL(Settable)), this->settable);
    j.AddMember<decltype(this->source)>(openapi::StringT(OPENAPI_LITERAL(Source)), this->source);
    j.AddMember<decltype(this->destination)>(openapi::StringT(OPENAPI_LITERAL(Destination)), this->destination);
    j.AddMember<decltype(this->type)>(openapi::StringT(OPENAPI_LITERAL(Type)), this->type);
    j.AddMember<decltype(this->options)>(openapi::StringT(OPENAPI_LITERAL(Options)), this->options);
}

void PluginMount::FromJSON(const Json & j)
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
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Source))))
    {
        using V = remove_optional<decltype(this->source)>::type;
        this->source = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Source)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Destination))))
    {
        using V = remove_optional<decltype(this->destination)>::type;
        this->destination = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Destination)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Type))))
    {
        using V = remove_optional<decltype(this->type)>::type;
        this->type = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Type)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Options))))
    {
        using V = remove_optional<decltype(this->options)>::type;
        this->options = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Options)));
    }
}

