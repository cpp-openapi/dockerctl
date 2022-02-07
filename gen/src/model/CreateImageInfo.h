/*
 * CreateImageInfo.h
 *
 * 
 */

#pragma once


#include <optional>
#include "common_json.h"
#include "ProgressDetail.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct CreateImageInfo{
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> error;
    std::optional<openapi::string_t> status;
    std::optional<openapi::string_t> progress;
    std::optional<ProgressDetail> progress_detail;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}