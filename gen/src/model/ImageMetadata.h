/*
 * ImageMetadata.h
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
struct ImageMetadata{
    std::optional<openapi::string_t> last_tag_time;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}