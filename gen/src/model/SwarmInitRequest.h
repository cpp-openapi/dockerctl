/*
 * SwarmInitRequest.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "SwarmSpec.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct SwarmInitRequest{
    std::optional<openapi::string_t> listen_addr;
    std::optional<openapi::string_t> advertise_addr;
    std::optional<openapi::string_t> data_path_addr;
    std::optional<int> data_path_port{};
    // array
    std::vector<openapi::string_t> default_addr_pool;
    std::optional<bool> force_new_cluster{};
    std::optional<int> subnet_size{};
    std::optional<SwarmSpec> spec;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}