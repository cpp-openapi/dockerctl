/*
 * NetworkAttachmentConfig.h
 *
 * Specifies how a service should be attached to a particular network. 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include <vector>

namespace openapi {


/*! \brief Specifies how a service should be attached to a particular network. 
 *
 *  \ingroup Models
 *
 */
struct NetworkAttachmentConfig{
    std::optional<openapi::string_t> target;
    // array
    std::vector<openapi::string_t> aliases;
    // additional properties should be rendered as json. string for now.
    openapi::string_t driver_opts;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}