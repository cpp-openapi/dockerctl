/*
 * TaskSpecContainerSpecConfigs.cpp
 *
 * 
 */

#include "TaskSpecContainerSpecConfigs.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(TaskSpecContainerSpecConfigs, File, Runtime, ConfigID, ConfigName)

void TaskSpecContainerSpecConfigs::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->file)>(openapi::StringT(OPENAPI_LITERAL(File)), this->file);
    j.AddMember<decltype(this->runtime)>(openapi::StringT(OPENAPI_LITERAL(Runtime)), this->runtime);
    j.AddMember<decltype(this->config_id)>(openapi::StringT(OPENAPI_LITERAL(ConfigID)), this->config_id);
    j.AddMember<decltype(this->config_name)>(openapi::StringT(OPENAPI_LITERAL(ConfigName)), this->config_name);
}

void TaskSpecContainerSpecConfigs::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(File))))
    {
        using V = remove_optional<decltype(this->file)>::type;
        this->file = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(File)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Runtime))))
    {
        using V = remove_optional<decltype(this->runtime)>::type;
        this->runtime = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Runtime)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ConfigID))))
    {
        using V = remove_optional<decltype(this->config_id)>::type;
        this->config_id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ConfigID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ConfigName))))
    {
        using V = remove_optional<decltype(this->config_name)>::type;
        this->config_name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ConfigName)));
    }
}

