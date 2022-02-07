/*
 * ContainerSummary.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "ContainerSummaryHostConfig.h"
#include "ContainerSummaryNetworkSettings.h"
#include "Mount.h"
#include "Port.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct ContainerSummary{
    std::optional<openapi::string_t> id;
    // array
    std::vector<openapi::string_t> names;
    std::optional<openapi::string_t> image;
    std::optional<openapi::string_t> image_id;
    std::optional<openapi::string_t> command;
    std::optional<int> created{};
    // array
    std::vector<Port> ports;
    std::optional<int> size_rw{};
    std::optional<int> size_root_fs{};
    // additional properties should be rendered as json. string for now.
    openapi::string_t labels;
    std::optional<openapi::string_t> state;
    std::optional<openapi::string_t> status;
    std::optional<ContainerSummaryHostConfig> host_config;
    std::optional<ContainerSummaryNetworkSettings> network_settings;
    // array
    std::vector<Mount> mounts;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}