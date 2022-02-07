/*
 * TaskSpecContainerSpecFile1.h
 *
 * File represents a specific target that is backed by a file.  &lt;p&gt;&lt;br /&gt;&lt;p&gt;  &gt; **Note**: &#x60;Configs.File&#x60; and &#x60;Configs.Runtime&#x60; are mutually exclusive 
 */

#pragma once


#include <optional>
#include "common_json.h"

namespace openapi {


/*! \brief File represents a specific target that is backed by a file.  <p><br /><p>  > **Note**: `Configs.File` and `Configs.Runtime` are mutually exclusive 
 *
 *  \ingroup Models
 *
 */
struct TaskSpecContainerSpecFile1{
    std::optional<openapi::string_t> name;
    std::optional<openapi::string_t> uid;
    std::optional<openapi::string_t> gid;
    std::optional<int> mode{};
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}