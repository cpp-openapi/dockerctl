/*
 * ImageSummary.cpp
 *
 * 
 */

#include "ImageSummary.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(ImageSummary, Id, ParentId, RepoTags, RepoDigests, Created, Size, SharedSize, VirtualSize, Labels, Containers)

void ImageSummary::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(Id)), this->id);
    j.AddMember<decltype(this->parent_id)>(openapi::StringT(OPENAPI_LITERAL(ParentId)), this->parent_id);
    j.AddMember<decltype(this->repo_tags)>(openapi::StringT(OPENAPI_LITERAL(RepoTags)), this->repo_tags);
    j.AddMember<decltype(this->repo_digests)>(openapi::StringT(OPENAPI_LITERAL(RepoDigests)), this->repo_digests);
    j.AddMember<decltype(this->created)>(openapi::StringT(OPENAPI_LITERAL(Created)), this->created);
    j.AddMember<decltype(this->size)>(openapi::StringT(OPENAPI_LITERAL(Size)), this->size);
    j.AddMember<decltype(this->shared_size)>(openapi::StringT(OPENAPI_LITERAL(SharedSize)), this->shared_size);
    j.AddMember<decltype(this->virtual_size)>(openapi::StringT(OPENAPI_LITERAL(VirtualSize)), this->virtual_size);
    j.AddMember<decltype(this->labels)>(openapi::StringT(OPENAPI_LITERAL(Labels)), this->labels);
    j.AddMember<decltype(this->containers)>(openapi::StringT(OPENAPI_LITERAL(Containers)), this->containers);
}

void ImageSummary::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Id))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Id)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ParentId))))
    {
        using V = remove_optional<decltype(this->parent_id)>::type;
        this->parent_id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ParentId)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(RepoTags))))
    {
        using V = remove_optional<decltype(this->repo_tags)>::type;
        this->repo_tags = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(RepoTags)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(RepoDigests))))
    {
        using V = remove_optional<decltype(this->repo_digests)>::type;
        this->repo_digests = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(RepoDigests)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Created))))
    {
        using V = remove_optional<decltype(this->created)>::type;
        this->created = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Created)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Size))))
    {
        using V = remove_optional<decltype(this->size)>::type;
        this->size = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Size)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SharedSize))))
    {
        using V = remove_optional<decltype(this->shared_size)>::type;
        this->shared_size = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SharedSize)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(VirtualSize))))
    {
        using V = remove_optional<decltype(this->virtual_size)>::type;
        this->virtual_size = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(VirtualSize)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Labels))))
    {
        using V = remove_optional<decltype(this->labels)>::type;
        this->labels = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Labels)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Containers))))
    {
        using V = remove_optional<decltype(this->containers)>::type;
        this->containers = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Containers)));
    }
}

