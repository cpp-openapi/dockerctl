/*
 * EndpointPortConfig.h
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
struct EndpointPortConfig{
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> protocol;
    std::optional<int> target_port{};
    std::optional<int> published_port{};
    std::optional<openapi::string_t> publish_mode;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}