/*
 * SystemVersionPlatform.h
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
struct SystemVersionPlatform{
    std::optional<openapi::string_t> name;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}