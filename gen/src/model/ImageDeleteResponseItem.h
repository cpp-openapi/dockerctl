/*
 * ImageDeleteResponseItem.h
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
struct ImageDeleteResponseItem{
    std::optional<openapi::string_t> untagged;
    std::optional<openapi::string_t> deleted;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}