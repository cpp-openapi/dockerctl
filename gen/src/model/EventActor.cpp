/*
 * EventActor.cpp
 *
 * Actor describes something that generates events, like a container, network, or a volume. 
 */

#include "EventActor.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(EventActor, ID, Attributes)

void EventActor::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(ID)), this->id);
    j.AddMember<decltype(this->attributes)>(openapi::StringT(OPENAPI_LITERAL(Attributes)), this->attributes);
}

void EventActor::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ID))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Attributes))))
    {
        using V = remove_optional<decltype(this->attributes)>::type;
        this->attributes = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Attributes)));
    }
}

