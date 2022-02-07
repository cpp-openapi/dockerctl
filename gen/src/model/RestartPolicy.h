/*
 * RestartPolicy.h
 *
 * The behavior to apply when the container exits. The default is not to restart.  An ever increasing delay (double the previous delay, starting at 100ms) is added before each restart to prevent flooding the server. 
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief The behavior to apply when the container exits. The default is not to restart.  An ever increasing delay (double the previous delay, starting at 100ms) is added before each restart to prevent flooding the server. 
 *
 *  \ingroup Models
 *
 */
struct RestartPolicy{
    std::optional<openapi::string_t> name;
    std::optional<int> maximum_retry_count{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}