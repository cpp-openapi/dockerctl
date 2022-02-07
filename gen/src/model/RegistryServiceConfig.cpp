/*
 * RegistryServiceConfig.cpp
 *
 * RegistryServiceConfig stores daemon registry services configuration. 
 */

#include "RegistryServiceConfig.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(RegistryServiceConfig, AllowNondistributableArtifactsCIDRs, AllowNondistributableArtifactsHostnames, InsecureRegistryCIDRs, IndexConfigs, Mirrors)

void RegistryServiceConfig::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->allow_nondistributable_artifacts_cidrs)>(openapi::StringT(OPENAPI_LITERAL(AllowNondistributableArtifactsCIDRs)), this->allow_nondistributable_artifacts_cidrs);
    j.AddMember<decltype(this->allow_nondistributable_artifacts_hostnames)>(openapi::StringT(OPENAPI_LITERAL(AllowNondistributableArtifactsHostnames)), this->allow_nondistributable_artifacts_hostnames);
    j.AddMember<decltype(this->insecure_registry_cidrs)>(openapi::StringT(OPENAPI_LITERAL(InsecureRegistryCIDRs)), this->insecure_registry_cidrs);
    j.AddMember<decltype(this->index_configs)>(openapi::StringT(OPENAPI_LITERAL(IndexConfigs)), this->index_configs);
    j.AddMember<decltype(this->mirrors)>(openapi::StringT(OPENAPI_LITERAL(Mirrors)), this->mirrors);
}

void RegistryServiceConfig::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(AllowNondistributableArtifactsCIDRs))))
    {
        using V = remove_optional<decltype(this->allow_nondistributable_artifacts_cidrs)>::type;
        this->allow_nondistributable_artifacts_cidrs = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(AllowNondistributableArtifactsCIDRs)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(AllowNondistributableArtifactsHostnames))))
    {
        using V = remove_optional<decltype(this->allow_nondistributable_artifacts_hostnames)>::type;
        this->allow_nondistributable_artifacts_hostnames = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(AllowNondistributableArtifactsHostnames)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(InsecureRegistryCIDRs))))
    {
        using V = remove_optional<decltype(this->insecure_registry_cidrs)>::type;
        this->insecure_registry_cidrs = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(InsecureRegistryCIDRs)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(IndexConfigs))))
    {
        using V = remove_optional<decltype(this->index_configs)>::type;
        this->index_configs = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(IndexConfigs)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Mirrors))))
    {
        using V = remove_optional<decltype(this->mirrors)>::type;
        this->mirrors = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Mirrors)));
    }
}

