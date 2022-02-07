/*
 * ContainerState.h
 *
 * ContainerState stores container&#39;s running state. It&#39;s part of ContainerJSONBase and will be returned by the \&quot;inspect\&quot; command. 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "Health.h"

namespace openapi {


/*! \brief ContainerState stores container's running state. It's part of ContainerJSONBase and will be returned by the \"inspect\" command. 
 *
 *  \ingroup Models
 *
 */
struct ContainerState{
    std::optional<openapi::string_t> status;
    std::optional<bool> running{};
    std::optional<bool> paused{};
    std::optional<bool> restarting{};
    std::optional<bool> oom_killed{};
    std::optional<bool> dead{};
    std::optional<int> pid{};
    std::optional<int> exit_code{};
    std::optional<openapi::string_t> error;
    std::optional<openapi::string_t> started_at;
    std::optional<openapi::string_t> finished_at;
    std::optional<Health> health;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}