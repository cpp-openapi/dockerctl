/*
 * SwarmSpecEncryptionConfig.cpp
 *
 * Parameters related to encryption-at-rest.
 */

#include "SwarmSpecEncryptionConfig.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(SwarmSpecEncryptionConfig, AutoLockManagers)

void SwarmSpecEncryptionConfig::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->auto_lock_managers)>(openapi::StringT(OPENAPI_LITERAL(AutoLockManagers)), this->auto_lock_managers);
}

void SwarmSpecEncryptionConfig::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(AutoLockManagers))))
    {
        using V = remove_optional<decltype(this->auto_lock_managers)>::type;
        this->auto_lock_managers = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(AutoLockManagers)));
    }
}

