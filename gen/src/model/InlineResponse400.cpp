/*
 * InlineResponse400.cpp
 *
 * 
 */

#include "InlineResponse400.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(InlineResponse400, ErrorResponse, message)

void InlineResponse400::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->error_response)>(openapi::StringT(OPENAPI_LITERAL(ErrorResponse)), this->error_response);
    j.AddMember<decltype(this->message)>(openapi::StringT(OPENAPI_LITERAL(message)), this->message);
}

void InlineResponse400::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ErrorResponse))))
    {
        using V = remove_optional<decltype(this->error_response)>::type;
        this->error_response = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ErrorResponse)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(message))))
    {
        using V = remove_optional<decltype(this->message)>::type;
        this->message = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(message)));
    }
}

