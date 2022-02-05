/*
 * MountPoint.cpp
 *
 * A mount point inside a container
 */

#include "MountPoint.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(MountPoint, Type, Name, Source, Destination, Driver, Mode, RW, Propagation)

void MountPoint::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->type)>(openapi::StringT(OPENAPI_LITERAL(Type)), this->type);
    j.AddMember<decltype(this->name)>(openapi::StringT(OPENAPI_LITERAL(Name)), this->name);
    j.AddMember<decltype(this->source)>(openapi::StringT(OPENAPI_LITERAL(Source)), this->source);
    j.AddMember<decltype(this->destination)>(openapi::StringT(OPENAPI_LITERAL(Destination)), this->destination);
    j.AddMember<decltype(this->driver)>(openapi::StringT(OPENAPI_LITERAL(Driver)), this->driver);
    j.AddMember<decltype(this->mode)>(openapi::StringT(OPENAPI_LITERAL(Mode)), this->mode);
    j.AddMember<decltype(this->rw)>(openapi::StringT(OPENAPI_LITERAL(RW)), this->rw);
    j.AddMember<decltype(this->propagation)>(openapi::StringT(OPENAPI_LITERAL(Propagation)), this->propagation);
}

void MountPoint::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Type))))
    {
        using V = remove_optional<decltype(this->type)>::type;
        this->type = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Type)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Name))))
    {
        using V = remove_optional<decltype(this->name)>::type;
        this->name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Name)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Source))))
    {
        using V = remove_optional<decltype(this->source)>::type;
        this->source = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Source)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Destination))))
    {
        using V = remove_optional<decltype(this->destination)>::type;
        this->destination = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Destination)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Driver))))
    {
        using V = remove_optional<decltype(this->driver)>::type;
        this->driver = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Driver)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Mode))))
    {
        using V = remove_optional<decltype(this->mode)>::type;
        this->mode = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Mode)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(RW))))
    {
        using V = remove_optional<decltype(this->rw)>::type;
        this->rw = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(RW)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Propagation))))
    {
        using V = remove_optional<decltype(this->propagation)>::type;
        this->propagation = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Propagation)));
    }
}

