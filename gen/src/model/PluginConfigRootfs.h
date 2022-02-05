/*
 * PluginConfigRootfs.h
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
struct PluginConfigRootfs{
    std::optional<openapi::string_t> type;
    // array
    std::vector<openapi::string_t> diff_underscoreids;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}