/*
 * OCIPlatform.cpp
 *
 * Describes the platform which the image in the manifest runs on, as defined in the [OCI Image Index Specification](https://github.com/opencontainers/image-spec/blob/v1.0.1/image-index.md). 
 */

#include "OCIPlatform.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(OCIPlatform, architecture, os, os.version, os.features, variant)

void OCIPlatform::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->architecture)>(openapi::StringT(OPENAPI_LITERAL(architecture)), this->architecture);
    j.AddMember<decltype(this->os)>(openapi::StringT(OPENAPI_LITERAL(os)), this->os);
    j.AddMember<decltype(this->os_version)>(openapi::StringT(OPENAPI_LITERAL(os.version)), this->os_version);
    j.AddMember<decltype(this->os_features)>(openapi::StringT(OPENAPI_LITERAL(os.features)), this->os_features);
    j.AddMember<decltype(this->variant)>(openapi::StringT(OPENAPI_LITERAL(variant)), this->variant);
}

void OCIPlatform::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(architecture))))
    {
        using V = remove_optional<decltype(this->architecture)>::type;
        this->architecture = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(architecture)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(os))))
    {
        using V = remove_optional<decltype(this->os)>::type;
        this->os = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(os)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(os.version))))
    {
        using V = remove_optional<decltype(this->os_version)>::type;
        this->os_version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(os.version)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(os.features))))
    {
        using V = remove_optional<decltype(this->os_features)>::type;
        this->os_features = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(os.features)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(variant))))
    {
        using V = remove_optional<decltype(this->variant)>::type;
        this->variant = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(variant)));
    }
}

