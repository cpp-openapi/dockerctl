#include "SessionApi.h"

using namespace openapi;
// todo include str/json header


// class name SessionApi


void sessionParams::ReadParams(IOASClientRequest & req)
{
}

void sessionResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
}


