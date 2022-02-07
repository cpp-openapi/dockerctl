/*
 * ContainerChangeResponseItem.h
 *
 * change item in response to ContainerChanges operation
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief change item in response to ContainerChanges operation
 *
 *  \ingroup Models
 *
 */
struct ContainerChangeResponseItem{
    std::optional<openapi::string_t> path;
    std::optional<int> kind{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}