/*
 * PluginConfigNetwork.h
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
struct PluginConfigNetwork{
    std::optional<openapi::string_t> type;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}