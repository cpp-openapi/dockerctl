/*
 * HostConfigAllOfLogConfig.h
 *
 * The logging configuration for this container
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include <vector>

namespace openapi {


/*! \brief The logging configuration for this container
 *
 *  \ingroup Models
 *
 */
struct HostConfigAllOfLogConfig{
    std::optional<openapi::string_t> type;
    // additional properties should be rendered as json. string for now.
    openapi::string_t config;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}