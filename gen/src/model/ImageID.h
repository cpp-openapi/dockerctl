/*
 * ImageID.h
 *
 * Image ID or Digest
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

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