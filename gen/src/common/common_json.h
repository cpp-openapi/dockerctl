#pragma once

#ifdef OPENAPI_RAPIDJSON
#include "openapi/json/rapid.h"
typedef RapidJson Json;
#elif defined(OPENAPI_NLOHMANNJSON)
#include "openapi/json/nlohmann.h"
typedef NlohmannJson Json;
#endif

#include "openapi/json/macro.h"
#ifdef linux
#undef linux
#endif

#ifdef stdin
#undef stdin
#endif

#ifdef stdout
#undef stdout
#endif

#ifdef stderr
#undef stderr
#endif