#include "DistributionApi.h"

using namespace openapi;
// todo include str/json header


// class name DistributionApi


void distributionInspectParams::ReadParams(IOASClientRequest & req)
{
    {
        using V = remove_optional<decltype(this->name)>::type;
        V nameRet;
        bool nameOk = req.GetPathParam<V>("name", nameRet);
        if(nameOk){
            this->name = nameRet;
        }
    }
}

void distributionInspectResponse::WriteResponse(IOASClientResponse & resp)
{
    resp.SetCode(this->code);
    if(this->payload.has_value())
    {
        resp.SetBodyResp(openapi::ToStdString(Json::Serialize(this->payload.value())));
    }
}


