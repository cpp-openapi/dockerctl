/*
 * SystemInfoDefaultAddressPools.h
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
struct SystemInfoDefaultAddressPools{
    std::optional<openapi::string_t> base;
    std::optional<int> size{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}