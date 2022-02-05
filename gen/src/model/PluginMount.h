/*
 * PluginMount.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include <vector>

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct PluginMount{
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> description;
    // array
    std::vector<openapi::string_t> settable;
    std::optional<openapi::string_t> source;
    std::optional<openapi::string_t> destination;
    std::optional<openapi::string_t> type;
    // array
    std::vector<openapi::string_t> options;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}