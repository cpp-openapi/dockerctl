/*
 * NetworkContainer.h
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
struct NetworkContainer{
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> endpoint_id;
    std::optional<openapi::string_t> mac_address;
    std::optional<openapi::string_t> ipv4_address;
    std::optional<openapi::string_t> ipv6_address;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}