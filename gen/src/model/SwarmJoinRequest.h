/*
 * SwarmJoinRequest.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct SwarmJoinRequest{
    std::optional<openapi::string_t> listen_addr;
    std::optional<openapi::string_t> advertise_addr;
    std::optional<openapi::string_t> data_path_addr;
    // array
    std::vector<openapi::string_t> remote_addrs;
    std::optional<openapi::string_t> join_token;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}