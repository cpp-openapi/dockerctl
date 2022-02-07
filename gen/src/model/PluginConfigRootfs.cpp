/*
 * PluginConfigRootfs.cpp
 *
 * 
 */

#include "PluginConfigRootfs.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(PluginConfigRootfs, type, diff_ids)

void PluginConfigRootfs::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->type)>(openapi::StringT(OPENAPI_LITERAL(type)), this->type);
    j.AddMember<decltype(this->diff_ids)>(openapi::StringT(OPENAPI_LITERAL(diff_ids)), this->diff_ids);
}

void PluginConfigRootfs::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(type))))
    {
        using V = remove_optional<decltype(this->type)>::type;
        this->type = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(type)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(diff_ids))))
    {
        using V = remove_optional<decltype(this->diff_ids)>::type;
        this->diff_ids = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(diff_ids)));
    }
}

