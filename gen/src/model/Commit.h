/*
 * Commit.h
 *
 * Commit holds the Git-commit (SHA1) that a binary was built from, as reported in the version-string of external tools, such as &#x60;containerd&#x60;, or &#x60;runC&#x60;. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief Commit holds the Git-commit (SHA1) that a binary was built from, as reported in the version-string of external tools, such as `containerd`, or `runC`. 
 *
 *  \ingroup Models
 *
 */
struct Commit{
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> expected;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}