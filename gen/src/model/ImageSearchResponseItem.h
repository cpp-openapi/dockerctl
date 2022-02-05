/*
 * ImageSearchResponseItem.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct ImageSearchResponseItem{
    std::optional<openapi::string_t> description;
    std::optional<bool> is_underscoreofficial{};
    std::optional<bool> is_underscoreautomated{};
    std::optional<openapi::string_t> name;
    std::optional<int> star_underscorecount{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}