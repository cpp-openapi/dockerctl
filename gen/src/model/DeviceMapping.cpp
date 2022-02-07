/*
 * DeviceMapping.cpp
 *
 * A device mapping between the host and container
 */

#include "DeviceMapping.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(DeviceMapping, PathOnHost, PathInContainer, CgroupPermissions)

void DeviceMapping::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->path_on_host)>(openapi::StringT(OPENAPI_LITERAL(PathOnHost)), this->path_on_host);
    j.AddMember<decltype(this->path_in_container)>(openapi::StringT(OPENAPI_LITERAL(PathInContainer)), this->path_in_container);
    j.AddMember<decltype(this->cgroup_permissions)>(openapi::StringT(OPENAPI_LITERAL(CgroupPermissions)), this->cgroup_permissions);
}

void DeviceMapping::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PathOnHost))))
    {
        using V = remove_optional<decltype(this->path_on_host)>::type;
        this->path_on_host = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PathOnHost)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(PathInContainer))))
    {
        using V = remove_optional<decltype(this->path_in_container)>::type;
        this->path_in_container = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(PathInContainer)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CgroupPermissions))))
    {
        using V = remove_optional<decltype(this->cgroup_permissions)>::type;
        this->cgroup_permissions = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CgroupPermissions)));
    }
}

