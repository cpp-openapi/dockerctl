/*
 * BuildInfo.cpp
 *
 * 
 */

#include "BuildInfo.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(BuildInfo, id, stream, error, errorDetail, status, progress, progressDetail, aux)

void BuildInfo::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(id)), this->id);
    j.AddMember<decltype(this->stream)>(openapi::StringT(OPENAPI_LITERAL(stream)), this->stream);
    j.AddMember<decltype(this->error)>(openapi::StringT(OPENAPI_LITERAL(error)), this->error);
    j.AddMember<decltype(this->error_detail)>(openapi::StringT(OPENAPI_LITERAL(errorDetail)), this->error_detail);
    j.AddMember<decltype(this->status)>(openapi::StringT(OPENAPI_LITERAL(status)), this->status);
    j.AddMember<decltype(this->progress)>(openapi::StringT(OPENAPI_LITERAL(progress)), this->progress);
    j.AddMember<decltype(this->progress_detail)>(openapi::StringT(OPENAPI_LITERAL(progressDetail)), this->progress_detail);
    j.AddMember<decltype(this->aux)>(openapi::StringT(OPENAPI_LITERAL(aux)), this->aux);
}

void BuildInfo::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(id))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(id)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(stream))))
    {
        using V = remove_optional<decltype(this->stream)>::type;
        this->stream = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(stream)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(error))))
    {
        using V = remove_optional<decltype(this->error)>::type;
        this->error = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(error)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(errorDetail))))
    {
        using V = remove_optional<decltype(this->error_detail)>::type;
        this->error_detail = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(errorDetail)));
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
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(aux))))
    {
        using V = remove_optional<decltype(this->aux)>::type;
        this->aux = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(aux)));
    }
}

