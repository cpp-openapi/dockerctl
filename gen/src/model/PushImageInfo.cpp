/*
 * PushImageInfo.cpp
 *
 * 
 */

#include "PushImageInfo.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(PushImageInfo, error, status, progress, progressDetail)

void PushImageInfo::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->error)>(openapi::StringT(OPENAPI_LITERAL(error)), this->error);
    j.AddMember<decltype(this->status)>(openapi::StringT(OPENAPI_LITERAL(status)), this->status);
    j.AddMember<decltype(this->progress)>(openapi::StringT(OPENAPI_LITERAL(progress)), this->progress);
    j.AddMember<decltype(this->progress_detail)>(openapi::StringT(OPENAPI_LITERAL(progressDetail)), this->progress_detail);
}

void PushImageInfo::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(error))))
    {
        using V = remove_optional<decltype(this->error)>::type;
        this->error = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(error)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(status))))
    {
        using V = remove_optional<decltype(this->status)>::type;
        this->status = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(status)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(progress))))
    {
        using V = remove_optional<decltype(this->progress)>::type;
        this->progress = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(progress)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(progressDetail))))
    {
        using V = remove_optional<decltype(this->progress_detail)>::type;
        this->progress_detail = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(progressDetail)));
    }
}

