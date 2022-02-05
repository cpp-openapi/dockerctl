/*
 * ContainerWaitResponse.cpp
 *
 * OK response to ContainerWait operation
 */

#include "ContainerWaitResponse.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ContainerWaitResponse, StatusCode, Error)

void ContainerWaitResponse::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->status_code)>(openapi::StringT(OPENAPI_LITERAL(StatusCode)), this->status_code);
    j.AddMember<decltype(this->error)>(openapi::StringT(OPENAPI_LITERAL(Error)), this->error);
}

void ContainerWaitResponse::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(StatusCode))))
    {
        using V = remove_optional<decltype(this->status_code)>::type;
        this->status_code = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(StatusCode)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Error))))
    {
        using V = remove_optional<decltype(this->error)>::type;
        this->error = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Error)));
    }
}

