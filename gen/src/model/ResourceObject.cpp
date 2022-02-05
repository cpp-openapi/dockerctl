/*
 * ResourceObject.cpp
 *
 * An object describing the resources which can be advertised by a node and requested by a task. 
 */

#include "ResourceObject.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ResourceObject, NanoCPUs, MemoryBytes, GenericResources)

void ResourceObject::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->nano_cpus)>(openapi::StringT(OPENAPI_LITERAL(NanoCPUs)), this->nano_cpus);
    j.AddMember<decltype(this->memory_bytes)>(openapi::StringT(OPENAPI_LITERAL(MemoryBytes)), this->memory_bytes);
    j.AddMember<decltype(this->generic_resources)>(openapi::StringT(OPENAPI_LITERAL(GenericResources)), this->generic_resources);
}

void ResourceObject::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NanoCPUs))))
    {
        using V = remove_optional<decltype(this->nano_cpus)>::type;
        this->nano_cpus = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NanoCPUs)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(MemoryBytes))))
    {
        using V = remove_optional<decltype(this->memory_bytes)>::type;
        this->memory_bytes = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(MemoryBytes)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(GenericResources))))
    {
        using V = remove_optional<decltype(this->generic_resources)>::type;
        this->generic_resources = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(GenericResources)));
    }
}

