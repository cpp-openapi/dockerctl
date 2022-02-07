/*
 * PluginConfigRootfs.h
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
struct PluginConfigRootfs{
    std::optional<openapi::string_t> type;
    // array
    std::vector<openapi::string_t> diff_ids;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}