#pragma once
#include <optional>
#include "openapi/runtime/client.h"
#include "openapi/runtime/request.h"
#include "openapi/runtime/response.h"
#include "openapi/runtime/auth.h"
#include "ErrorResponse.h"

namespace openapi {


// class name SessionApi


struct sessionParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct sessionResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const sessionResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const sessionResponse& resp);

class SessionApiService{
public:
    SessionApiService(std::shared_ptr<IClient> cli):_cli(cli) {};
    void SetDefaultAuth(AuthInfoWriter auth);
    sessionResponse session(sessionParams params);

private:
    std::shared_ptr<IClient> _cli;
    AuthInfoWriter _auth = nullptr;
};

} // namespace openapi