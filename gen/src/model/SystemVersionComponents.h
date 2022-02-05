/*
 * SystemVersionComponents.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct SystemVersionComponents{
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> version;
    std::optional<openapi::string_t> details;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}