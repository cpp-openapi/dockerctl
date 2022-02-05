/*
 * SwarmSpecCAConfigExternalCAs.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct SwarmSpecCAConfigExternalCAs{
    std::optional<openapi::string_t> protocol;
    std::optional<openapi::string_t> url;
    // additional properties should be rendered as json. string for now.
    openapi::string_t options;
    std::optional<openapi::string_t> ca_cert;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}