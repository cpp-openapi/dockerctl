/*
 * Runtime.h
 *
 * Runtime describes an [OCI compliant](https://github.com/opencontainers/runtime-spec) runtime.  The runtime is invoked by the daemon via the &#x60;containerd&#x60; daemon. OCI runtimes act as an interface to the Linux kernel namespaces, cgroups, and SELinux. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include <vector>

namespace openapi {


/*! \brief Runtime describes an [OCI compliant](https://github.com/opencontainers/runtime-spec) runtime.  The runtime is invoked by the daemon via the `containerd` daemon. OCI runtimes act as an interface to the Linux kernel namespaces, cgroups, and SELinux. 
 *
 *  \ingroup Models
 *
 */
struct Runtime{
    std::optional<openapi::string_t> path;
    // array
    std::vector<openapi::string_t> runtime_args;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}