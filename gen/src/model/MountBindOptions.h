/*
 * MountBindOptions.h
 *
 * Optional configuration for the &#x60;bind&#x60; type.
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief Optional configuration for the `bind` type.
 *
 *  \ingroup Models
 *
 */
struct MountBindOptions{
    std::optional<openapi::string_t> propagation;
    std::optional<bool> non_recursive{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}