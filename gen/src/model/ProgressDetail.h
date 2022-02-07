/*
 * ProgressDetail.h
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
struct ProgressDetail{
    std::optional<int> current{};
    std::optional<int> total{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}