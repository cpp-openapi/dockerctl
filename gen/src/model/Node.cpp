/*
 * Node.cpp
 *
 * 
 */

#include "Node.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(Node, ID, Version, CreatedAt, UpdatedAt, Spec, Description, Status, ManagerStatus)

void Node::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->id)>(openapi::StringT(OPENAPI_LITERAL(ID)), this->id);
    j.AddMember<decltype(this->version)>(openapi::StringT(OPENAPI_LITERAL(Version)), this->version);
    j.AddMember<decltype(this->created_at)>(openapi::StringT(OPENAPI_LITERAL(CreatedAt)), this->created_at);
    j.AddMember<decltype(this->updated_at)>(openapi::StringT(OPENAPI_LITERAL(UpdatedAt)), this->updated_at);
    j.AddMember<decltype(this->spec)>(openapi::StringT(OPENAPI_LITERAL(Spec)), this->spec);
    j.AddMember<decltype(this->description)>(openapi::StringT(OPENAPI_LITERAL(Description)), this->description);
    j.AddMember<decltype(this->status)>(openapi::StringT(OPENAPI_LITERAL(Status)), this->status);
    j.AddMember<decltype(this->manager_status)>(openapi::StringT(OPENAPI_LITERAL(ManagerStatus)), this->manager_status);
}

void Node::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ID))))
    {
        using V = remove_optional<decltype(this->id)>::type;
        this->id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Version))))
    {
        using V = remove_optional<decltype(this->version)>::type;
        this->version = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Version)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CreatedAt))))
    {
        using V = remove_optional<decltype(this->created_at)>::type;
        this->created_at = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CreatedAt)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(UpdatedAt))))
    {
        using V = remove_optional<decltype(this->updated_at)>::type;
        this->updated_at = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(UpdatedAt)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Spec))))
    {
        using V = remove_optional<decltype(this->spec)>::type;
        this->spec = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Spec)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Description))))
    {
        using V = remove_optional<decltype(this->description)>::type;
        this->description = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Description)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(Status))))
    {
        using V = remove_optional<decltype(this->status)>::type;
        this->status = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(Status)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ManagerStatus))))
    {
        using V = remove_optional<decltype(this->manager_status)>::type;
        this->manager_status = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ManagerStatus)));
    }
}

