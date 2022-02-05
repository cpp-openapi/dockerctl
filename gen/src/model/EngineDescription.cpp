/*
 * EngineDescription.cpp
 *
 * EngineDescription provides information about an engine.
 */

#include "EngineDescription.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(EngineDescription, EngineVersion, Labels, Plugins)

void EngineDescription::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->engine_version)>(openapi::StringT(OPENAPI_LITERAL(EngineVersion)), this->engine_version);
    j.AddMember<decltype(this->labels)>(openapi::StringT(OPENAPI_LITERAL(Labels)), this->labels);
    j.AddMember<decltype(this->plugins)>(openapi::StringT(OPENAPI_LITERAL(Plugins)), this->plugins);
}

void EngineDescription::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(EngineVersion))))
    {
        using V = remove_optional<decltype(this->engine_version)>::type;
        this->engine_version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(EngineVersion)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Labels))))
    {
        using V = remove_optional<decltype(this->labels)>::type;
        this->labels = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Labels)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Plugins))))
    {
        using V = remove_optional<decltype(this->plugins)>::type;
        this->plugins = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Plugins)));
    }
}

