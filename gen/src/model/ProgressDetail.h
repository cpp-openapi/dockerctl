/*
 * ProgressDetail.h
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
struct ProgressDetail{
    std::optional<int> current{};
    std::optional<int> total{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}