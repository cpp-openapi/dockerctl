/*
 * SystemVersion.cpp
 *
 * Response of Engine API: GET \&quot;/version\&quot; 
 */

#include "SystemVersion.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(SystemVersion, Platform, Components, Version, ApiVersion, MinAPIVersion, GitCommit, GoVersion, Os, Arch, KernelVersion, Experimental, BuildTime)

void SystemVersion::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->platform)>(openapi::StringT(OPENAPI_LITERAL(Platform)), this->platform);
    j.AddMember<decltype(this->components)>(openapi::StringT(OPENAPI_LITERAL(Components)), this->components);
    j.AddMember<decltype(this->version)>(openapi::StringT(OPENAPI_LITERAL(Version)), this->version);
    j.AddMember<decltype(this->api_version)>(openapi::StringT(OPENAPI_LITERAL(ApiVersion)), this->api_version);
    j.AddMember<decltype(this->min_api_version)>(openapi::StringT(OPENAPI_LITERAL(MinAPIVersion)), this->min_api_version);
    j.AddMember<decltype(this->git_commit)>(openapi::StringT(OPENAPI_LITERAL(GitCommit)), this->git_commit);
    j.AddMember<decltype(this->go_version)>(openapi::StringT(OPENAPI_LITERAL(GoVersion)), this->go_version);
    j.AddMember<decltype(this->os)>(openapi::StringT(OPENAPI_LITERAL(Os)), this->os);
    j.AddMember<decltype(this->arch)>(openapi::StringT(OPENAPI_LITERAL(Arch)), this->arch);
    j.AddMember<decltype(this->kernel_version)>(openapi::StringT(OPENAPI_LITERAL(KernelVersion)), this->kernel_version);
    j.AddMember<decltype(this->experimental)>(openapi::StringT(OPENAPI_LITERAL(Experimental)), this->experimental);
    j.AddMember<decltype(this->build_time)>(openapi::StringT(OPENAPI_LITERAL(BuildTime)), this->build_time);
}

void SystemVersion::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Platform))))
    {
        using V = remove_optional<decltype(this->platform)>::type;
        this->platform = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Platform)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Components))))
    {
        using V = remove_optional<decltype(this->components)>::type;
        this->components = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Components)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Version))))
    {
        using V = remove_optional<decltype(this->version)>::type;
        this->version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Version)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ApiVersion))))
    {
        using V = remove_optional<decltype(this->api_version)>::type;
        this->api_version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ApiVersion)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MinAPIVersion))))
    {
        using V = remove_optional<decltype(this->min_api_version)>::type;
        this->min_api_version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MinAPIVersion)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(GitCommit))))
    {
        using V = remove_optional<decltype(this->git_commit)>::type;
        this->git_commit = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(GitCommit)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(GoVersion))))
    {
        using V = remove_optional<decltype(this->go_version)>::type;
        this->go_version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(GoVersion)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Os))))
    {
        using V = remove_optional<decltype(this->os)>::type;
        this->os = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Os)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Arch))))
    {
        using V = remove_optional<decltype(this->arch)>::type;
        this->arch = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Arch)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(KernelVersion))))
    {
        using V = remove_optional<decltype(this->kernel_version)>::type;
        this->kernel_version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(KernelVersion)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Experimental))))
    {
        using V = remove_optional<decltype(this->experimental)>::type;
        this->experimental = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Experimental)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(BuildTime))))
    {
        using V = remove_optional<decltype(this->build_time)>::type;
        this->build_time = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(BuildTime)));
    }
}

