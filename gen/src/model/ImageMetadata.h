/*
 * ImageMetadata.h
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
struct ImageMetadata{
    std::optional<openapi::string_t> last_tag_time;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}