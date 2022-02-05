/*
 * Secret.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "ObjectVersion.h"
#include "SecretSpec.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct Secret{
    std::optional<openapi::string_t> id;
    std::optional<ObjectVersion> version;
    std::optional<openapi::string_t> created_at;
    std::optional<openapi::string_t> updated_at;
    std::optional<SecretSpec> spec;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}