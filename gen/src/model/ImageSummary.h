/*
 * ImageSummary.h
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
struct ImageSummary{
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> parent_id;
    // array
    std::vector<openapi::string_t> repo_tags;
    // array
    std::vector<openapi::string_t> repo_digests;
    std::optional<int> created{};
    std::optional<int> size{};
    std::optional<int> shared_size{};
    std::optional<int> virtual_size{};
    // additional properties should be rendered as json. string for now.
    openapi::string_t labels;
    std::optional<int> containers{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}