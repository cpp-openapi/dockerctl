/*
 * HistoryResponseItem.h
 *
 * individual image layer information in response to ImageHistory operation
 */

#pragma once


#include <optional>
#include "common_json.h"
#include <vector>

namespace openapi {


/*! \brief individual image layer information in response to ImageHistory operation
 *
 *  \ingroup Models
 *
 */
struct HistoryResponseItem{
    std::optional<openapi::string_t> id;
    std::optional<int> created{};
    std::optional<openapi::string_t> created_by;
    // array
    std::vector<openapi::string_t> tags;
    std::optional<int> size{};
    std::optional<openapi::string_t> comment;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}