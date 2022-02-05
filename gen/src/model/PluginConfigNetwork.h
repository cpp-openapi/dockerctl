/*
 * PluginConfigNetwork.h
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
struct PluginConfigNetwork{
    std::optional<openapi::string_t> type;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}