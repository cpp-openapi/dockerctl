/*
 * TLSInfo.cpp
 *
 * Information about the issuer of leaf TLS certificates and the trusted root CA certificate. 
 */

#include "TLSInfo.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(TLSInfo, TrustRoot, CertIssuerSubject, CertIssuerPublicKey)

void TLSInfo::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->trust_root)>(openapi::StringT(OPENAPI_LITERAL(TrustRoot)), this->trust_root);
    j.AddMember<decltype(this->cert_issuer_subject)>(openapi::StringT(OPENAPI_LITERAL(CertIssuerSubject)), this->cert_issuer_subject);
    j.AddMember<decltype(this->cert_issuer_public_key)>(openapi::StringT(OPENAPI_LITERAL(CertIssuerPublicKey)), this->cert_issuer_public_key);
}

void TLSInfo::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(TrustRoot))))
    {
        using V = remove_optional<decltype(this->trust_root)>::type;
        this->trust_root = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(TrustRoot)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CertIssuerSubject))))
    {
        using V = remove_optional<decltype(this->cert_issuer_subject)>::type;
        this->cert_issuer_subject = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CertIssuerSubject)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(CertIssuerPublicKey))))
    {
        using V = remove_optional<decltype(this->cert_issuer_public_key)>::type;
        this->cert_issuer_public_key = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(CertIssuerPublicKey)));
    }
}

