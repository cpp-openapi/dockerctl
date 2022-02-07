/*
 * ImageID.h
 *
 * Image ID or Digest
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief Image ID or Digest
 *
 *  \ingroup Models
 *
 */
struct ImageID{
    std::optional<openapi::string_t> id;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}