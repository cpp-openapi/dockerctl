/*
 * ContainerChangeResponseItem.h
 *
 * change item in response to ContainerChanges operation
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"

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