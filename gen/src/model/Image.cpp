/*
 * Image.cpp
 *
 * 
 */

#include "Image.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(Image, Id, RepoTags, RepoDigests, Parent, Comment, Created, Container, ContainerConfig, DockerVersion, Author, Config, Architecture, Os, OsVersion, Size, VirtualSize, GraphDriver, RootFS, Metadata)

void Image::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(Id)), this->id);
    j.AddMember<decltype(this->repo_tags)>(openapi::StringT(OPENAPI_LITERAL(RepoTags)), this->repo_tags);
    j.AddMember<decltype(this->repo_digests)>(openapi::StringT(OPENAPI_LITERAL(RepoDigests)), this->repo_digests);
    j.AddMember<decltype(this->parent)>(openapi::StringT(OPENAPI_LITERAL(Parent)), this->parent);
    j.AddMember<decltype(this->comment)>(openapi::StringT(OPENAPI_LITERAL(Comment)), this->comment);
    j.AddMember<decltype(this->created)>(openapi::StringT(OPENAPI_LITERAL(Created)), this->created);
    j.AddMember<decltype(this->container)>(openapi::StringT(OPENAPI_LITERAL(Container)), this->container);
    j.AddMember<decltype(this->container_config)>(openapi::StringT(OPENAPI_LITERAL(ContainerConfig)), this->container_config);
    j.AddMember<decltype(this->docker_version)>(openapi::StringT(OPENAPI_LITERAL(DockerVersion)), this->docker_version);
    j.AddMember<decltype(this->author)>(openapi::StringT(OPENAPI_LITERAL(Author)), this->author);
    j.AddMember<decltype(this->config)>(openapi::StringT(OPENAPI_LITERAL(Config)), this->config);
    j.AddMember<decltype(this->architecture)>(openapi::StringT(OPENAPI_LITERAL(Architecture)), this->architecture);
    j.AddMember<decltype(this->os)>(openapi::StringT(OPENAPI_LITERAL(Os)), this->os);
    j.AddMember<decltype(this->os_version)>(openapi::StringT(OPENAPI_LITERAL(OsVersion)), this->os_version);
    j.AddMember<decltype(this->size)>(openapi::StringT(OPENAPI_LITERAL(Size)), this->size);
    j.AddMember<decltype(this->virtual_size)>(openapi::StringT(OPENAPI_LITERAL(VirtualSize)), this->virtual_size);
    j.AddMember<decltype(this->graph_driver)>(openapi::StringT(OPENAPI_LITERAL(GraphDriver)), this->graph_driver);
    j.AddMember<decltype(this->root_fs)>(openapi::StringT(OPENAPI_LITERAL(RootFS)), this->root_fs);
    j.AddMember<decltype(this->metadata)>(openapi::StringT(OPENAPI_LITERAL(Metadata)), this->metadata);
}

void Image::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Id))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Id)));
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
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Parent))))
    {
        using V = remove_optional<decltype(this->parent)>::type;
        this->parent = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Parent)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Comment))))
    {
        using V = remove_optional<decltype(this->comment)>::type;
        this->comment = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Comment)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Created))))
    {
        using V = remove_optional<decltype(this->created)>::type;
        this->created = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Created)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Container))))
    {
        using V = remove_optional<decltype(this->container)>::type;
        this->container = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Container)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ContainerConfig))))
    {
        using V = remove_optional<decltype(this->container_config)>::type;
        this->container_config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ContainerConfig)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(DockerVersion))))
    {
        using V = remove_optional<decltype(this->docker_version)>::type;
        this->docker_version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(DockerVersion)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Author))))
    {
        using V = remove_optional<decltype(this->author)>::type;
        this->author = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Author)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Config))))
    {
        using V = remove_optional<decltype(this->config)>::type;
        this->config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Config)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Architecture))))
    {
        using V = remove_optional<decltype(this->architecture)>::type;
        this->architecture = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Architecture)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Os))))
    {
        using V = remove_optional<decltype(this->os)>::type;
        this->os = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Os)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(OsVersion))))
    {
        using V = remove_optional<decltype(this->os_version)>::type;
        this->os_version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(OsVersion)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Size))))
    {
        using V = remove_optional<decltype(this->size)>::type;
        this->size = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Size)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(VirtualSize))))
    {
        using V = remove_optional<decltype(this->virtual_size)>::type;
        this->virtual_size = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(VirtualSize)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(GraphDriver))))
    {
        using V = remove_optional<decltype(this->graph_driver)>::type;
        this->graph_driver = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(GraphDriver)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(RootFS))))
    {
        using V = remove_optional<decltype(this->root_fs)>::type;
        this->root_fs = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(RootFS)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Metadata))))
    {
        using V = remove_optional<decltype(this->metadata)>::type;
        this->metadata = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Metadata)));
    }
}

