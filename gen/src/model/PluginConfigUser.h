/*
 * PluginConfigUser.h
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
struct PluginConfigUser{
    std::optional<int> uid{};
    std::optional<int> gid{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}