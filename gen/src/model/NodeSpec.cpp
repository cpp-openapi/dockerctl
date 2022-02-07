/*
 * NodeSpec.cpp
 *
 * 
 */

#include "NodeSpec.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(NodeSpec, Name, Labels, Role, Availability)

void NodeSpec::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->labels)>(openapi::StringT(OPENAPI_LITERAL(Labels)), this->labels);
    j.AddMember<decltype(this->role)>(openapi::StringT(OPENAPI_LITERAL(Role)), this->role);
    j.AddMember<decltype(this->availability)>(openapi::StringT(OPENAPI_LITERAL(Availability)), this->availability);
}

void NodeSpec::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Labels))))
    {
        using V = remove_optional<decltype(this->labels)>::type;
        this->labels = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Labels)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Role))))
    {
        using V = remove_optional<decltype(this->role)>::type;
        this->role = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Role)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Availability))))
    {
        using V = remove_optional<decltype(this->availability)>::type;
        this->availability = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Availability)));
    }
}

