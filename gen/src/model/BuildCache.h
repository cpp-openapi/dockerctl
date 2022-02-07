/*
 * BuildCache.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct BuildCache{
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> parent;
    std::optional<openapi::string_t> type;
    std::optional<openapi::string_t> description;
    std::optional<bool> in_use{};
    std::optional<bool> shared{};
    std::optional<int> size{};
    std::optional<openapi::string_t> created_at;
    std::optional<openapi::string_t> last_used_at;
    std::optional<int> usage_count{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}