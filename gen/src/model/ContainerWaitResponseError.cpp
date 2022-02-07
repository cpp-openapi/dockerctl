/*
 * ContainerWaitResponseError.cpp
 *
 * container waiting error, if any
 */

#include "ContainerWaitResponseError.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ContainerWaitResponseError, Message)

void ContainerWaitResponseError::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->message)>(openapi::StringT(OPENAPI_LITERAL(Message)), this->message);
}

void ContainerWaitResponseError::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Message))))
    {
        using V = remove_optional<decltype(this->message)>::type;
        this->message = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Message)));
    }
}

