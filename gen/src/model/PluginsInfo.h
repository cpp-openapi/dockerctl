/*
 * PluginsInfo.h
 *
 * Available plugins per type.  &lt;p&gt;&lt;br /&gt;&lt;/p&gt;  &gt; **Note**: Only unmanaged (V1) plugins are included in this list. &gt; V1 plugins are \&quot;lazily\&quot; loaded, and are not returned in this list &gt; if there is no resource using the plugin. 
 */

#pragma once


#include <string>
#include <optional>
#include "model_common.h"
#include <vector>

namespace openapi {


/*! \brief Available plugins per type.  <p><br /></p>  > **Note**: Only unmanaged (V1) plugins are included in this list. > V1 plugins are \"lazily\" loaded, and are not returned in this list > if there is no resource using the plugin. 
 *
 *  \ingroup Models
 *
 */
struct PluginsInfo{
    // array
    std::vector<openapi::string_t> volume;
    // array
    std::vector<openapi::string_t> network;
    // array
    std::vector<openapi::string_t> authorization;
    // array
    std::vector<openapi::string_t> log;
    OPENAPI_JSON_CONVERT_FUNCS_DECLARE
};
}