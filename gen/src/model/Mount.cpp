/*
 * Mount.cpp
 *
 * 
 */

#include "Mount.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(Mount, Target, Source, Type, ReadOnly, Consistency, BindOptions, VolumeOptions, TmpfsOptions)

void Mount::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->target)>(openapi::StringT(OPENAPI_LITERAL(Target)), this->target);
    j.AddMember<decltype(this->source)>(openapi::StringT(OPENAPI_LITERAL(Source)), this->source);
    j.AddMember<decltype(this->type)>(openapi::StringT(OPENAPI_LITERAL(Type)), this->type);
    j.AddMember<decltype(this->read_only)>(openapi::StringT(OPENAPI_LITERAL(ReadOnly)), this->read_only);
    j.AddMember<decltype(this->consistency)>(openapi::StringT(OPENAPI_LITERAL(Consistency)), this->consistency);
    j.AddMember<decltype(this->bind_options)>(openapi::StringT(OPENAPI_LITERAL(BindOptions)), this->bind_options);
    j.AddMember<decltype(this->volume_options)>(openapi::StringT(OPENAPI_LITERAL(VolumeOptions)), this->volume_options);
    j.AddMember<decltype(this->tmpfs_options)>(openapi::StringT(OPENAPI_LITERAL(TmpfsOptions)), this->tmpfs_options);
}

void Mount::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Target))))
    {
        using V = remove_optional<decltype(this->target)>::type;
        this->target = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Target)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Source))))
    {
        using V = remove_optional<decltype(this->source)>::type;
        this->source = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Source)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Type))))
    {
        using V = remove_optional<decltype(this->type)>::type;
        this->type = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Type)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ReadOnly))))
    {
        using V = remove_optional<decltype(this->read_only)>::type;
        this->read_only = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ReadOnly)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Consistency))))
    {
        using V = remove_optional<decltype(this->consistency)>::type;
        this->consistency = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Consistency)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(BindOptions))))
    {
        using V = remove_optional<decltype(this->bind_options)>::type;
        this->bind_options = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(BindOptions)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(VolumeOptions))))
    {
        using V = remove_optional<decltype(this->volume_options)>::type;
        this->volume_options = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(VolumeOptions)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(TmpfsOptions))))
    {
        using V = remove_optional<decltype(this->tmpfs_options)>::type;
        this->tmpfs_options = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(TmpfsOptions)));
    }
}

