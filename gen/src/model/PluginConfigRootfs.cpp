/*
 * PluginConfigRootfs.cpp
 *
 * 
 */

#include "PluginConfigRootfs.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(PluginConfigRootfs, type, diffUnderscoreids)

void PluginConfigRootfs::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->type)>(openapi::StringT(OPENAPI_LITERAL(type)), this->type);
    j.AddMember<decltype(this->diff_underscoreids)>(openapi::StringT(OPENAPI_LITERAL(diffUnderscoreids)), this->diff_underscoreids);
}

void PluginConfigRootfs::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(type))))
    {
        using V = remove_optional<decltype(this->type)>::type;
        this->type = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(type)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(diffUnderscoreids))))
    {
        using V = remove_optional<decltype(this->diff_underscoreids)>::type;
        this->diff_underscoreids = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(diffUnderscoreids)));
    }
}

