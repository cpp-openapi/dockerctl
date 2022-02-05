/*
 * Limit.cpp
 *
 * An object describing a limit on resources which can be requested by a task. 
 */

#include "Limit.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(Limit, NanoCPUs, MemoryBytes, Pids)

void Limit::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->nano_cpus)>(openapi::StringT(OPENAPI_LITERAL(NanoCPUs)), this->nano_cpus);
    j.AddMember<decltype(this->memory_bytes)>(openapi::StringT(OPENAPI_LITERAL(MemoryBytes)), this->memory_bytes);
    j.AddMember<decltype(this->pids)>(openapi::StringT(OPENAPI_LITERAL(Pids)), this->pids);
}

void Limit::FromJSON(const Json & j)
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
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Pids))))
    {
        using V = remove_optional<decltype(this->pids)>::type;
        this->pids = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Pids)));
    }
}

