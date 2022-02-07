/*
 * ServiceJobStatus.h
 *
 * The status of the service when it is in one of ReplicatedJob or GlobalJob modes. Absent on Replicated and Global mode services. The JobIteration is an ObjectVersion, but unlike the Service&#39;s version, does not need to be sent with an update request. 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "ObjectVersion.h"

namespace openapi {


/*! \brief The status of the service when it is in one of ReplicatedJob or GlobalJob modes. Absent on Replicated and Global mode services. The JobIteration is an ObjectVersion, but unlike the Service's version, does not need to be sent with an update request. 
 *
 *  \ingroup Models
 *
 */
struct ServiceJobStatus{
    std::optional<ObjectVersion> job_iteration;
    std::optional<openapi::string_t> last_execution;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}