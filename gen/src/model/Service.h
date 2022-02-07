/*
 * Service.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "ObjectVersion.h"
#include "ServiceEndpoint.h"
#include "ServiceJobStatus.h"
#include "ServiceServiceStatus.h"
#include "ServiceSpec.h"
#include "ServiceUpdateStatus.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct Service{
    std::optional<openapi::string_t> id;
    std::optional<ObjectVersion> version;
    std::optional<openapi::string_t> created_at;
    std::optional<openapi::string_t> updated_at;
    std::optional<ServiceSpec> spec;
    std::optional<ServiceEndpoint> endpoint;
    std::optional<ServiceUpdateStatus> update_status;
    std::optional<ServiceServiceStatus> service_status;
    std::optional<ServiceJobStatus> job_status;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}