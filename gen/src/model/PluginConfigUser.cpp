/*
 * PluginConfigUser.cpp
 *
 * 
 */

#include "PluginConfigUser.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(PluginConfigUser, UID, GID)

void PluginConfigUser::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->uid)>(openapi::StringT(OPENAPI_LITERAL(UID)), this->uid);
    j.AddMember<decltype(this->gid)>(openapi::StringT(OPENAPI_LITERAL(GID)), this->gid);
}

void PluginConfigUser::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(UID))))
    {
        using V = remove_optional<decltype(this->uid)>::type;
        this->uid = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(UID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(GID))))
    {
        using V = remove_optional<decltype(this->gid)>::type;
        this->gid = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(GID)));
    }
}

