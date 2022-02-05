/*
 * BuildCache.cpp
 *
 * 
 */

#include "BuildCache.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(BuildCache, ID, Parent, Type, Description, InUse, Shared, Size, CreatedAt, LastUsedAt, UsageCount)

void BuildCache::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(ID)), this->id);
    j.AddMember<decltype(this->parent)>(openapi::StringT(OPENAPI_LITERAL(Parent)), this->parent);
    j.AddMember<decltype(this->type)>(openapi::StringT(OPENAPI_LITERAL(Type)), this->type);
    j.AddMember<decltype(this->description)>(openapi::StringT(OPENAPI_LITERAL(Description)), this->description);
    j.AddMember<decltype(this->in_use)>(openapi::StringT(OPENAPI_LITERAL(InUse)), this->in_use);
    j.AddMember<decltype(this->shared)>(openapi::StringT(OPENAPI_LITERAL(Shared)), this->shared);
    j.AddMember<decltype(this->size)>(openapi::StringT(OPENAPI_LITERAL(Size)), this->size);
    j.AddMember<decltype(this->created_at)>(openapi::StringT(OPENAPI_LITERAL(CreatedAt)), this->created_at);
    j.AddMember<decltype(this->last_used_at)>(openapi::StringT(OPENAPI_LITERAL(LastUsedAt)), this->last_used_at);
    j.AddMember<decltype(this->usage_count)>(openapi::StringT(OPENAPI_LITERAL(UsageCount)), this->usage_count);
}

void BuildCache::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ID))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Parent))))
    {
        using V = remove_optional<decltype(this->parent)>::type;
        this->parent = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Parent)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Type))))
    {
        using V = remove_optional<decltype(this->type)>::type;
        this->type = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Type)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Description))))
    {
        using V = remove_optional<decltype(this->description)>::type;
        this->description = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Description)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(InUse))))
    {
        using V = remove_optional<decltype(this->in_use)>::type;
        this->in_use = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(InUse)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Shared))))
    {
        using V = remove_optional<decltype(this->shared)>::type;
        this->shared = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Shared)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Size))))
    {
        using V = remove_optional<decltype(this->size)>::type;
        this->size = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Size)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CreatedAt))))
    {
        using V = remove_optional<decltype(this->created_at)>::type;
        this->created_at = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CreatedAt)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(LastUsedAt))))
    {
        using V = remove_optional<decltype(this->last_used_at)>::type;
        this->last_used_at = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(LastUsedAt)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(UsageCount))))
    {
        using V = remove_optional<decltype(this->usage_count)>::type;
        this->usage_count = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(UsageCount)));
    }
}

