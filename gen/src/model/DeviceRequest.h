/*
 * DeviceRequest.h
 *
 * A request for devices to be sent to device drivers
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include <vector>

namespace openapi {


/*! \brief A request for devices to be sent to device drivers
 *
 *  \ingroup Models
 *
 */
struct DeviceRequest{
    std::optional<openapi::string_t> driver;
    std::optional<int> count{};
    // array
    std::vector<openapi::string_t> device_ids;
    // array
    std::vector<openapi::string_t> capabilities;
    // additional properties should be rendered as json. string for now.
    openapi::string_t options;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}