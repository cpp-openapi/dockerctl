/*
 * TLSInfo.h
 *
 * Information about the issuer of leaf TLS certificates and the trusted root CA certificate. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief Information about the issuer of leaf TLS certificates and the trusted root CA certificate. 
 *
 *  \ingroup Models
 *
 */
struct TLSInfo{
    std::optional<openapi::string_t> trust_root;
    std::optional<openapi::string_t> cert_issuer_subject;
    std::optional<openapi::string_t> cert_issuer_public_key;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}