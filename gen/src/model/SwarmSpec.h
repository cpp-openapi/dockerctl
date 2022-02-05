/*
 * SwarmSpec.h
 *
 * User modifiable swarm configuration.
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "SwarmSpecCAConfig.h"
#include "SwarmSpecDispatcher.h"
#include "SwarmSpecEncryptionConfig.h"
#include "SwarmSpecOrchestration.h"
#include "SwarmSpecRaft.h"
#include "SwarmSpecTaskDefaults.h"
#include <vector>

namespace openapi {


/*! \brief User modifiable swarm configuration.
 *
 *  \ingroup Models
 *
 */
struct SwarmSpec{
    std::optional<openapi::string_t> name;
    // additional properties should be rendered as json. string for now.
    openapi::string_t labels;
    std::optional<SwarmSpecOrchestration> orchestration;
    std::optional<SwarmSpecRaft> raft;
    std::optional<SwarmSpecDispatcher> dispatcher;
    std::optional<SwarmSpecCAConfig> ca_config;
    std::optional<SwarmSpecEncryptionConfig> encryption_config;
    std::optional<SwarmSpecTaskDefaults> task_defaults;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}