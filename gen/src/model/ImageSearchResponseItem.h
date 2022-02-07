/*
 * ImageSearchResponseItem.h
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
struct ImageSearchResponseItem{
    std::optional<openapi::string_t> description;
    std::optional<bool> is_official{};
    std::optional<bool> is_automated{};
    std::optional<openapi::string_t> name;
    std::optional<int> star_count{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}