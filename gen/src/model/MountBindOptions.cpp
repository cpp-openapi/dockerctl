/*
 * MountBindOptions.cpp
 *
 * Optional configuration for the &#x60;bind&#x60; type.
 */

#include "MountBindOptions.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(MountBindOptions, Propagation, NonRecursive)

void MountBindOptions::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->propagation)>(openapi::StringT(OPENAPI_LITERAL(Propagation)), this->propagation);
    j.AddMember<decltype(this->non_recursive)>(openapi::StringT(OPENAPI_LITERAL(NonRecursive)), this->non_recursive);
}

void MountBindOptions::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Propagation))))
    {
        using V = remove_optional<decltype(this->propagation)>::type;
        this->propagation = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Propagation)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NonRecursive))))
    {
        using V = remove_optional<decltype(this->non_recursive)>::type;
        this->non_recursive = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NonRecursive)));
    }
}

