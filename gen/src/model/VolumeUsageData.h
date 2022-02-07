/*
 * VolumeUsageData.h
 *
 * Usage details about the volume. This information is used by the &#x60;GET /system/df&#x60; endpoint, and omitted in other endpoints. 
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief Usage details about the volume. This information is used by the `GET /system/df` endpoint, and omitted in other endpoints. 
 *
 *  \ingroup Models
 *
 */
struct VolumeUsageData{
    std::optional<int> size{};
    std::optional<int> ref_count{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}