/*
 * TaskSpec.h
 *
 * User modifiable task configuration.
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "NetworkAttachmentConfig.h"
#include "TaskSpecContainerSpec.h"
#include "TaskSpecLogDriver.h"
#include "TaskSpecNetworkAttachmentSpec.h"
#include "TaskSpecPlacement.h"
#include "TaskSpecPluginSpec.h"
#include "TaskSpecResources.h"
#include "TaskSpecRestartPolicy.h"
#include <vector>

namespace openapi {


/*! \brief User modifiable task configuration.
 *
 *  \ingroup Models
 *
 */
struct TaskSpec{
    std::optional<TaskSpecPluginSpec> plugin_spec;
    std::optional<TaskSpecContainerSpec> container_spec;
    std::optional<TaskSpecNetworkAttachmentSpec> network_attachment_spec;
    std::optional<TaskSpecResources> resources;
    std::optional<TaskSpecRestartPolicy> restart_policy;
    std::optional<TaskSpecPlacement> placement;
    std::optional<int> force_update{};
    std::optional<openapi::string_t> runtime;
    // array
    std::vector<NetworkAttachmentConfig> networks;
    std::optional<TaskSpecLogDriver> log_driver;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}