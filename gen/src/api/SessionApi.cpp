#include "SessionApi.h"
#include "openapi/runtime/executor.h"

using namespace openapi;
// todo include str/json header


// class name SessionApi


std::string const sessionParams::ContentType = "";
std::string const sessionParams::PathPattern = "/session";
std::string const sessionParams::Method = "POST";
void sessionParams::WriteParams(std::shared_ptr<IOASClientRequest> req) const
{
    req->SetHeaderParam("Content-Type", sessionParams::ContentType);
    req->SetMethod(sessionParams::Method);
    req->SetPathPattern(sessionParams::PathPattern);
}

void sessionResponse::ReadResponse(std::shared_ptr<IOASClientResponse> resp)
{
    this->code = resp->GetCode();
}

std::ostream& openapi::operator<<(std::ostream& os, const sessionResponse& resp)
{
    openapi::string_t payloadStr{};
    os << "[" << resp.code << "]: " << openapi::ToStdString(payloadStr); // TODO: wstream?
    return os;
}


void SessionApiService::SetDefaultAuth(AuthInfoWriter auth)
{
    this->_auth = auth;
}

sessionResponse SessionApiService::session(sessionParams params){

    std::shared_ptr<IOASClientRequest> req = std::make_shared<ClientRequestImpl>();
    params.WriteParams(req);
    
    if (this->_auth)
    {
        // add auth
        this->_auth(req);
    }

    std::shared_future<std::shared_ptr<IOASClientResponse>> respFuture = this->_cli->Do(req).share();

    std::shared_ptr<std::promise<sessionResponse>> p = std::make_shared<std::promise<sessionResponse>>();

    Executor::GetInstance().Submit([p, respFuture]() {
        try
        {
            // get future response
            std::shared_ptr<IOASClientResponse> resp = respFuture.get();
            sessionResponse result;
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


