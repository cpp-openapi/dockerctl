/*
 * BuildInfo.h
 *
 * 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include "ErrorDetail.h"
#include "ImageID.h"
#include "ProgressDetail.h"

namespace openapi {


/*! \brief 
 *
 *  \ingroup Models
 *
 */
struct BuildInfo{
    std::optional<openapi::string_t> id;
    std::optional<openapi::string_t> stream;
    std::optional<openapi::string_t> error;
    std::optional<ErrorDetail> error_detail;
    std::optional<openapi::string_t> status;
    std::optional<openapi::string_t> progress;
    std::optional<ProgressDetail> progress_detail;
    std::optional<ImageID> aux;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}