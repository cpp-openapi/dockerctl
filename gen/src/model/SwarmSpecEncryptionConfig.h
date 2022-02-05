/*
 * SwarmSpecEncryptionConfig.h
 *
 * Parameters related to encryption-at-rest.
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief Parameters related to encryption-at-rest.
 *
 *  \ingroup Models
 *
 */
struct SwarmSpecEncryptionConfig{
    std::optional<bool> auto_lock_managers{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}