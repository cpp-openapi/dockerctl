/*
 * OCIDescriptor.cpp
 *
 * A descriptor struct containing digest, media type, and size, as defined in the [OCI Content Descriptors Specification](https://github.com/opencontainers/image-spec/blob/v1.0.1/descriptor.md). 
 */

#include "OCIDescriptor.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(OCIDescriptor, mediaType, digest, size)

void OCIDescriptor::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->media_type)>(openapi::StringT(OPENAPI_LITERAL(mediaType)), this->media_type);
    j.AddMember<decltype(this->digest)>(openapi::StringT(OPENAPI_LITERAL(digest)), this->digest);
    j.AddMember<decltype(this->size)>(openapi::StringT(OPENAPI_LITERAL(size)), this->size);
}

void OCIDescriptor::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(mediaType))))
    {
        using V = remove_optional<decltype(this->media_type)>::type;
        this->media_type = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(mediaType)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(digest))))
    {
        using V = remove_optional<decltype(this->digest)>::type;
        this->digest = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(digest)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(size))))
    {
        using V = remove_optional<decltype(this->size)>::type;
        this->size = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(size)));
    }
}

