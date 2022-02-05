/*
 * Platform.h
 *
 * Platform represents the platform (Arch/OS). 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief Platform represents the platform (Arch/OS). 
 *
 *  \ingroup Models
 *
 */
struct Platform{
    std::optional<openapi::string_t> architecture;
    std::optional<openapi::string_t> os;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}