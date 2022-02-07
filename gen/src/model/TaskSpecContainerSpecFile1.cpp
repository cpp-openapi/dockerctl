/*
 * TaskSpecContainerSpecFile1.cpp
 *
 * File represents a specific target that is backed by a file.  &lt;p&gt;&lt;br /&gt;&lt;p&gt;  &gt; **Note**: &#x60;Configs.File&#x60; and &#x60;Configs.Runtime&#x60; are mutually exclusive 
 */

#include "TaskSpecContainerSpecFile1.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(TaskSpecContainerSpecFile1, Name, UID, GID, Mode)

void TaskSpecContainerSpecFile1::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->uid)>(openapi::StringT(OPENAPI_LITERAL(UID)), this->uid);
    j.AddMember<decltype(this->gid)>(openapi::StringT(OPENAPI_LITERAL(GID)), this->gid);
    j.AddMember<decltype(this->mode)>(openapi::StringT(OPENAPI_LITERAL(Mode)), this->mode);
}

void TaskSpecContainerSpecFile1::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
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
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Mode))))
    {
        using V = remove_optional<decltype(this->mode)>::type;
        this->mode = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Mode)));
    }
}

