/*
 * Plugin.cpp
 *
 * A plugin for the Engine API
 */

#include "Plugin.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(Plugin, Id, Name, Enabled, Settings, PluginReference, Config)

void Plugin::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(Id)), this->id);
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->enabled)>(openapi::StringT(OPENAPI_LITERAL(Enabled)), this->enabled);
    j.AddMember<decltype(this->settings)>(openapi::StringT(OPENAPI_LITERAL(Settings)), this->settings);
    j.AddMember<decltype(this->plugin_reference)>(openapi::StringT(OPENAPI_LITERAL(PluginReference)), this->plugin_reference);
    j.AddMember<decltype(this->config)>(openapi::StringT(OPENAPI_LITERAL(Config)), this->config);
}

void Plugin::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Id))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Id)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Enabled))))
    {
        using V = remove_optional<decltype(this->enabled)>::type;
        this->enabled = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Enabled)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Settings))))
    {
        using V = remove_optional<decltype(this->settings)>::type;
        this->settings = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Settings)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PluginReference))))
    {
        using V = remove_optional<decltype(this->plugin_reference)>::type;
        this->plugin_reference = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PluginReference)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Config))))
    {
        using V = remove_optional<decltype(this->config)>::type;
        this->config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Config)));
    }
}

