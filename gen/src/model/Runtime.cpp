/*
 * Runtime.cpp
 *
 * Runtime describes an [OCI compliant](https://github.com/opencontainers/runtime-spec) runtime.  The runtime is invoked by the daemon via the &#x60;containerd&#x60; daemon. OCI runtimes act as an interface to the Linux kernel namespaces, cgroups, and SELinux. 
 */

#include "Runtime.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(Runtime, path, runtimeArgs)

void Runtime::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->path)>(openapi::StringT(OPENAPI_LITERAL(path)), this->path);
    j.AddMember<decltype(this->runtime_args)>(openapi::StringT(OPENAPI_LITERAL(runtimeArgs)), this->runtime_args);
}

void Runtime::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(path))))
    {
        using V = remove_optional<decltype(this->path)>::type;
        this->path = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(path)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(runtimeArgs))))
    {
        using V = remove_optional<decltype(this->runtime_args)>::type;
        this->runtime_args = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(runtimeArgs)));
    }
}

