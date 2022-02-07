/*
 * ServiceSpecMode.h
 *
 * Scheduling mode for the service.
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "ServiceSpecModeReplicated.h"
#include "ServiceSpecModeReplicatedJob.h"

namespace openapi {


/*! \brief Scheduling mode for the service.
 *
 *  \ingroup Models
 *
 */
struct ServiceSpecMode{
    std::optional<ServiceSpecModeReplicated> replicated;
    std::optional<openapi::string_t> global;
    std::optional<ServiceSpecModeReplicatedJob> replicated_job;
    std::optional<openapi::string_t> global_job;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}