/*
 * EventActor.h
 *
 * Actor describes something that generates events, like a container, network, or a volume. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include <vector>

namespace openapi {


/*! \brief Actor describes something that generates events, like a container, network, or a volume. 
 *
 *  \ingroup Models
 *
 */
struct EventActor{
    std::optional<openapi::string_t> id;
    // additional properties should be rendered as json. string for now.
    openapi::string_t attributes;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}