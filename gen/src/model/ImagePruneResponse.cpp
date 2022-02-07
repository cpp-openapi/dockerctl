/*
 * ImagePruneResponse.cpp
 *
 * 
 */

#include "ImagePruneResponse.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ImagePruneResponse, ImagesDeleted, SpaceReclaimed)

void ImagePruneResponse::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->images_deleted)>(openapi::StringT(OPENAPI_LITERAL(ImagesDeleted)), this->images_deleted);
    j.AddMember<decltype(this->space_reclaimed)>(openapi::StringT(OPENAPI_LITERAL(SpaceReclaimed)), this->space_reclaimed);
}

void ImagePruneResponse::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ImagesDeleted))))
    {
        using V = remove_optional<decltype(this->images_deleted)>::type;
        this->images_deleted = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ImagesDeleted)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SpaceReclaimed))))
    {
        using V = remove_optional<decltype(this->space_reclaimed)>::type;
        this->space_reclaimed = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SpaceReclaimed)));
    }
}

