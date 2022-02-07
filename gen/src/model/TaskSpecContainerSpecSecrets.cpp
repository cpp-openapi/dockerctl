/*
 * TaskSpecContainerSpecSecrets.cpp
 *
 * 
 */

#include "TaskSpecContainerSpecSecrets.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(TaskSpecContainerSpecSecrets, File, SecretID, SecretName)

void TaskSpecContainerSpecSecrets::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->file)>(openapi::StringT(OPENAPI_LITERAL(File)), this->file);
    j.AddMember<decltype(this->secret_id)>(openapi::StringT(OPENAPI_LITERAL(SecretID)), this->secret_id);
    j.AddMember<decltype(this->secret_name)>(openapi::StringT(OPENAPI_LITERAL(SecretName)), this->secret_name);
}

void TaskSpecContainerSpecSecrets::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(File))))
    {
        using V = remove_optional<decltype(this->file)>::type;
        this->file = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(File)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SecretID))))
    {
        using V = remove_optional<decltype(this->secret_id)>::type;
        this->secret_id = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SecretID)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SecretName))))
    {
        using V = remove_optional<decltype(this->secret_name)>::type;
        this->secret_name = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SecretName)));
    }
}

