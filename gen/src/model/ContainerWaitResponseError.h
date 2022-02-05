/*
 * ContainerWaitResponseError.h
 *
 * container waiting error, if any
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief container waiting error, if any
 *
 *  \ingroup Models
 *
 */
struct ContainerWaitResponseError{
    std::optional<openapi::string_t> message;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}