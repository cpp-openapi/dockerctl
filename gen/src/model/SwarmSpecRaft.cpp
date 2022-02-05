/*
 * SwarmSpecRaft.cpp
 *
 * Raft configuration.
 */

#include "SwarmSpecRaft.h"

using namespace openapi;

// macro should do the same job
// OPENAP_JSON_CONVERT_FUNCS(SwarmSpecRaft, SnapshotInterval, KeepOldSnapshots, LogEntriesForSlowFollowers, ElectionTick, HeartbeatTick)

void SwarmSpecRaft::ToJSON(Json & j) const
{
    // OPENAPI_FOR_EACH(OPENAPI_TO_JSON_MEMBER, __VA_ARGS__)
    j.AddMember<decltype(this->snapshot_interval)>(openapi::StringT(OPENAPI_LITERAL(SnapshotInterval)), this->snapshot_interval);
    j.AddMember<decltype(this->keep_old_snapshots)>(openapi::StringT(OPENAPI_LITERAL(KeepOldSnapshots)), this->keep_old_snapshots);
    j.AddMember<decltype(this->log_entries_for_slow_followers)>(openapi::StringT(OPENAPI_LITERAL(LogEntriesForSlowFollowers)), this->log_entries_for_slow_followers);
    j.AddMember<decltype(this->election_tick)>(openapi::StringT(OPENAPI_LITERAL(ElectionTick)), this->election_tick);
    j.AddMember<decltype(this->heartbeat_tick)>(openapi::StringT(OPENAPI_LITERAL(HeartbeatTick)), this->heartbeat_tick);
}

void SwarmSpecRaft::FromJSON(const Json & j)
{
    // OPENAPI_FOR_EACH(OPENAPI_FROM_JSON_MEMBER, __VA_ARGS__)
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(SnapshotInterval))))
    {
        using V = remove_optional<decltype(this->snapshot_interval)>::type;
        this->snapshot_interval = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(SnapshotInterval)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(KeepOldSnapshots))))
    {
        using V = remove_optional<decltype(this->keep_old_snapshots)>::type;
        this->keep_old_snapshots = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(KeepOldSnapshots)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(LogEntriesForSlowFollowers))))
    {
        using V = remove_optional<decltype(this->log_entries_for_slow_followers)>::type;
        this->log_entries_for_slow_followers = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(LogEntriesForSlowFollowers)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(ElectionTick))))
    {
        using V = remove_optional<decltype(this->election_tick)>::type;
        this->election_tick = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(ElectionTick)));
    }
    if(j.HasKey(openapi::StringT(OPENAPI_LITERAL(HeartbeatTick))))
    {
        using V = remove_optional<decltype(this->heartbeat_tick)>::type;
        this->heartbeat_tick = j.GetMember<V>(openapi::StringT(OPENAPI_LITERAL(HeartbeatTick)));
    }
}

