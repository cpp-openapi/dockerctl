/*
 * EndpointPortConfig.h
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
struct EndpointPortConfig{
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> protocol;
    std::optional<int> target_port{};
    std::optional<int> published_port{};
    std::optional<openapi::string_t> publish_mode;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}