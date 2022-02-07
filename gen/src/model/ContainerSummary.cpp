/*
 * ContainerSummary.cpp
 *
 * 
 */

#include "ContainerSummary.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(ContainerSummary, Id, Names, Image, ImageID, Command, Created, Ports, SizeRw, SizeRootFs, Labels, State, Status, HostConfig, NetworkSettings, Mounts)

void ContainerSummary::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(Id)), this->id);
    j.AddMember<decltype(this->names)>(openapi::StringT(OPENAPI_LITERAL(Names)), this->names);
    j.AddMember<decltype(this->image)>(openapi::StringT(OPENAPI_LITERAL(Image)), this->image);
    j.AddMember<decltype(this->image_id)>(openapi::StringT(OPENAPI_LITERAL(ImageID)), this->image_id);
    j.AddMember<decltype(this->command)>(openapi::StringT(OPENAPI_LITERAL(Command)), this->command);
    j.AddMember<decltype(this->created)>(openapi::StringT(OPENAPI_LITERAL(Created)), this->created);
    j.AddMember<decltype(this->ports)>(openapi::StringT(OPENAPI_LITERAL(Ports)), this->ports);
    j.AddMember<decltype(this->size_rw)>(openapi::StringT(OPENAPI_LITERAL(SizeRw)), this->size_rw);
    j.AddMember<decltype(this->size_root_fs)>(openapi::StringT(OPENAPI_LITERAL(SizeRootFs)), this->size_root_fs);
    j.AddMember<decltype(this->labels)>(openapi::StringT(OPENAPI_LITERAL(Labels)), this->labels);
    j.AddMember<decltype(this->state)>(openapi::StringT(OPENAPI_LITERAL(State)), this->state);
    j.AddMember<decltype(this->status)>(openapi::StringT(OPENAPI_LITERAL(Status)), this->status);
    j.AddMember<decltype(this->host_config)>(openapi::StringT(OPENAPI_LITERAL(HostConfig)), this->host_config);
    j.AddMember<decltype(this->network_settings)>(openapi::StringT(OPENAPI_LITERAL(NetworkSettings)), this->network_settings);
    j.AddMember<decltype(this->mounts)>(openapi::StringT(OPENAPI_LITERAL(Mounts)), this->mounts);
}

void ContainerSummary::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Id))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Id)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Names))))
    {
        using V = remove_optional<decltype(this->names)>::type;
        this->names = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Names)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Image))))
    {
        using V = remove_optional<decltype(this->image)>::type;
        this->image = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Image)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ImageID))))
    {
        using V = remove_optional<decltype(this->image_id)>::type;
        this->image_id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ImageID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Command))))
    {
        using V = remove_optional<decltype(this->command)>::type;
        this->command = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Command)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Created))))
    {
        using V = remove_optional<decltype(this->created)>::type;
        this->created = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Created)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Ports))))
    {
        using V = remove_optional<decltype(this->ports)>::type;
        this->ports = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Ports)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SizeRw))))
    {
        using V = remove_optional<decltype(this->size_rw)>::type;
        this->size_rw = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SizeRw)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SizeRootFs))))
    {
        using V = remove_optional<decltype(this->size_root_fs)>::type;
        this->size_root_fs = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SizeRootFs)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Labels))))
    {
        using V = remove_optional<decltype(this->labels)>::type;
        this->labels = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Labels)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(State))))
    {
        using V = remove_optional<decltype(this->state)>::type;
        this->state = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(State)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Status))))
    {
        using V = remove_optional<decltype(this->status)>::type;
        this->status = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Status)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(HostConfig))))
    {
        using V = remove_optional<decltype(this->host_config)>::type;
        this->host_config = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(HostConfig)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NetworkSettings))))
    {
        using V = remove_optional<decltype(this->network_settings)>::type;
        this->network_settings = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NetworkSettings)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Mounts))))
    {
        using V = remove_optional<decltype(this->mounts)>::type;
        this->mounts = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Mounts)));
    }
}

