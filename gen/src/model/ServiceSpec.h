/*
 * ServiceSpec.h
 *
 * User modifiable configuration for a service.
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "EndpointSpec.h"
#include "NetworkAttachmentConfig.h"
#include "ServiceSpecMode.h"
#include "ServiceSpecRollbackConfig.h"
#include "ServiceSpecUpdateConfig.h"
#include "TaskSpec.h"
#include <vector>

namespace openapi {


/*! \brief User modifiable configuration for a service.
 *
 *  \ingroup Models
 *
 */
struct ServiceSpec{
    std::optional<openapi::string_t> name;
    // additional properties should be rendered as json. string for now.
    openapi::string_t labels;
    std::optional<TaskSpec> task_template;
    std::optional<ServiceSpecMode> mode;
    std::optional<ServiceSpecUpdateConfig> update_config;
    std::optional<ServiceSpecRollbackConfig> rollback_config;
    // array
    std::vector<NetworkAttachmentConfig> networks;
    std::optional<EndpointSpec> endpoint_spec;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}