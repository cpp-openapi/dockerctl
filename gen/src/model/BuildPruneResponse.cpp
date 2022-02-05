/*
 * BuildPruneResponse.cpp
 *
 * 
 */

#include "BuildPruneResponse.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(BuildPruneResponse, CachesDeleted, SpaceReclaimed)

void BuildPruneResponse::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->caches_deleted)>(openapi::StringT(OPENAPI_LITERAL(CachesDeleted)), this->caches_deleted);
    j.AddMember<decltype(this->space_reclaimed)>(openapi::StringT(OPENAPI_LITERAL(SpaceReclaimed)), this->space_reclaimed);
}

void BuildPruneResponse::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CachesDeleted))))
    {
        using V = remove_optional<decltype(this->caches_deleted)>::type;
        this->caches_deleted = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CachesDeleted)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SpaceReclaimed))))
    {
        using V = remove_optional<decltype(this->space_reclaimed)>::type;
        this->space_reclaimed = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SpaceReclaimed)));
    }
}

