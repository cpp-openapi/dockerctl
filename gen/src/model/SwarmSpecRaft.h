/*
 * SwarmSpecRaft.h
 *
 * Raft configuration.
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief Raft configuration.
 *
 *  \ingroup Models
 *
 */
struct SwarmSpecRaft{
    std::optional<int> snapshot_interval{};
    std::optional<int> keep_old_snapshots{};
    std::optional<int> log_entries_for_slow_followers{};
    std::optional<int> election_tick{};
    std::optional<int> heartbeat_tick{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}