#include "DistributionApi.h"
#include "openapi/runtime/executor.h"

using namespace openapi;
// todo include str/json header


// class name DistributionApi


std::string const distributionInspectParams::ContentType = "";
std::string const distributionInspectParams::PathPattern = "/distribution/{name}/json";
std::string const distributionInspectParams::Method = "GET";
void distributionInspectParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", distributionInspectParams::ContentType);
    req->SetMethod(distributionInspectParams::Method);
    req->SetPathPattern(distributionInspectParams::PathPattern);
    if (this->name.has_value()){
        using V = remove_optional<decltype(this->name)>::type;
        req->SetPathParam<V>("name", this->name.value());
    }
}

void distributionInspectResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
    std::string strBody = resp->GetBody();
    if (strBody.size() == 0){
        return;
    }
    using U = typename remove_optional<decltype(this->payload)>::type;
    this->payload = Json::Deserialize<U>(openapi::StringT(strBody.c_str()));
}

std::ostream& openapi::operator<<(std::ostream& os, const distributionInspectResponse& resp)
{
    openapi::string_t payloadStr{};
    if(resp.payload.has_value())
    {
        payloadStr = Json::Serialize(resp.payload);
    }
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}


void DistributionApiService::SetDefaultAuth(AuthInfoWriter auth)
{
    this->_auth = auth;
}

distributionInspectResponse DistributionApiService::distributionInspect(distributionInspectParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<distributionInspectResponse>> p = std::make_shared<std::promise<distributionInspectResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            distributionInspectResponse result;
            result.ReadResponse(resp);
            p->set_value(result);
        }
        catch([[maybe_unused]] const std::exception &e)
        {
            try
            {
                p->set_exception(std::current_exception());
            } catch(...) {}
        }
    });
    return p->get_future().get();
}


