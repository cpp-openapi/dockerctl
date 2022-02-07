/*
 * SystemVersionPlatform.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct SystemVersionPlatform{
    std::optional<openapi::string_t> name;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}