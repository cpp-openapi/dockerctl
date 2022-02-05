/*
 * SystemInfoDefaultAddressPools.h
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
struct SystemInfoDefaultAddressPools{
    std::optional<openapi::string_t> base;
    std::optional<int> size{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}