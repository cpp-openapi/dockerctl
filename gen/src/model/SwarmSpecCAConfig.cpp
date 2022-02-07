/*
 * SwarmSpecCAConfig.cpp
 *
 * CA configuration.
 */

#include "SwarmSpecCAConfig.h"

using namespace openapi;

// macro should do the same job. Not really
// OPENAP_JSON_CONVERT_FUNCS(SwarmSpecCAConfig, NodeCertExpiry, ExternalCAs, SigningCACert, SigningCAKey, ForceRotate)

void SwarmSpecCAConfig::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->node_cert_expiry)>(openapi::StringT(OPENAPI_LITERAL(NodeCertExpiry)), this->node_cert_expiry);
    j.AddMember<decltype(this->external_cas)>(openapi::StringT(OPENAPI_LITERAL(ExternalCAs)), this->external_cas);
    j.AddMember<decltype(this->signing_ca_cert)>(openapi::StringT(OPENAPI_LITERAL(SigningCACert)), this->signing_ca_cert);
    j.AddMember<decltype(this->signing_ca_key)>(openapi::StringT(OPENAPI_LITERAL(SigningCAKey)), this->signing_ca_key);
    j.AddMember<decltype(this->force_rotate)>(openapi::StringT(OPENAPI_LITERAL(ForceRotate)), this->force_rotate);
}

void SwarmSpecCAConfig::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(NodeCertExpiry))))
    {
        using V = remove_optional<decltype(this->node_cert_expiry)>::type;
        this->node_cert_expiry = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(NodeCertExpiry)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ExternalCAs))))
    {
        using V = remove_optional<decltype(this->external_cas)>::type;
        this->external_cas = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ExternalCAs)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SigningCACert))))
    {
        using V = remove_optional<decltype(this->signing_ca_cert)>::type;
        this->signing_ca_cert = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SigningCACert)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SigningCAKey))))
    {
        using V = remove_optional<decltype(this->signing_ca_key)>::type;
        this->signing_ca_key = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SigningCAKey)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ForceRotate))))
    {
        using V = remove_optional<decltype(this->force_rotate)>::type;
        this->force_rotate = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ForceRotate)));
    }
}

