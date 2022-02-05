/*
 * Image.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "ContainerConfig.h"
#include "GraphDriverData.h"
#include "ImageMetadata.h"
#include "ImageRootFS.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct Image{
    std::optional<openapi::string_t> id;
    // array
    std::vector<openapi::string_t> repo_tags;
    // array
    std::vector<openapi::string_t> repo_digests;
    std::optional<openapi::string_t> parent;
    std::optional<openapi::string_t> comment;
    std::optional<openapi::string_t> created;
    std::optional<openapi::string_t> container;
    std::optional<ContainerConfig> container_config;
    std::optional<openapi::string_t> docker_version;
    std::optional<openapi::string_t> author;
    std::optional<ContainerConfig> config;
    std::optional<openapi::string_t> architecture;
    std::optional<openapi::string_t> os;
    std::optional<openapi::string_t> os_version;
    std::optional<int> size{};
    std::optional<int> virtual_size{};
    std::optional<GraphDriverData> graph_driver;
    std::optional<ImageRootFS> root_fs;
    std::optional<ImageMetadata> metadata;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}