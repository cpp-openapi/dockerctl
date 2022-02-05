/*
 * TaskSpecContainerSpec.h
 *
 * Container spec for the service.  &lt;p&gt;&lt;br /&gt;&lt;/p&gt;  &gt; **Note**: ContainerSpec, NetworkAttachmentSpec, and PluginSpec are &gt; mutually exclusive. PluginSpec is only used when the Runtime field &gt; is set to &#x60;plugin&#x60;. NetworkAttachmentSpec is used when the Runtime &gt; field is set to &#x60;attachment&#x60;. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "HealthConfig.h"
#include "Mount.h"
#include "ResourcesUlimits.h"
#include "TaskSpecContainerSpecConfigs.h"
#include "TaskSpecContainerSpecDNSConfig.h"
#include "TaskSpecContainerSpecPrivileges.h"
#include "TaskSpecContainerSpecSecrets.h"
#include <vector>

namespace openapi {


/*! \brief Container spec for the service.  <p><br /></p>  > **Note**: ContainerSpec, NetworkAttachmentSpec, and PluginSpec are > mutually exclusive. PluginSpec is only used when the Runtime field > is set to `plugin`. NetworkAttachmentSpec is used when the Runtime > field is set to `attachment`. 
 *
 *  \ingroup Models
 *
 */
struct TaskSpecContainerSpec{
    std::optional<openapi::string_t> image;
    // additional properties should be rendered as json. string for now.
    openapi::string_t labels;
    // array
    std::vector<openapi::string_t> command;
    // array
    std::vector<openapi::string_t> args;
    std::optional<openapi::string_t> hostname;
    // array
    std::vector<openapi::string_t> env;
    std::optional<openapi::string_t> dir;
    std::optional<openapi::string_t> user;
    // array
    std::vector<openapi::string_t> groups;
    std::optional<TaskSpecContainerSpecPrivileges> privileges;
    std::optional<bool> tty{};
    std::optional<bool> open_stdin{};
    std::optional<bool> read_only{};
    // array
    std::vector<Mount> mounts;
    std::optional<openapi::string_t> stop_signal;
    std::optional<int> stop_grace_period{};
    std::optional<HealthConfig> health_check;
    // array
    std::vector<openapi::string_t> hosts;
    std::optional<TaskSpecContainerSpecDNSConfig> dns_config;
    // array
    std::vector<TaskSpecContainerSpecSecrets> secrets;
    // array
    std::vector<TaskSpecContainerSpecConfigs> configs;
    std::optional<openapi::string_t> isolation;
    std::optional<bool> init{};
    // additional properties should be rendered as json. string for now.
    openapi::string_t sysctls;
    // array
    std::vector<openapi::string_t> capability_add;
    // array
    std::vector<openapi::string_t> capability_drop;
    // array
    std::vector<ResourcesUlimits> ulimits;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}