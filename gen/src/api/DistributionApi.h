#pragma once
#include <optional>
#include "openapi/runtime/client.h"
#include "openapi/runtime/request.h"
#include "openapi/runtime/response.h"
#include "openapi/runtime/auth.h"
#include "DistributionInspect.h"
#include "ErrorResponse.h"


namespace openapi {


// class name DistributionApi


struct distributionInspectParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct distributionInspectResponse {
    std::optional<DistributionInspect> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const distributionInspectResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const distributionInspectResponse& resp);

class DistributionApiService{
public:
    DistributionApiService(std::shared_ptr<IClient> cli):_cli(cli) {};
    void SetDefaultAuth(AuthInfoWriter auth);
    distributionInspectResponse distributionInspect(distributionInspectParams params);

private:
    std::shared_ptr<IClient> _cli;
    AuthInfoWriter _auth = nullptr;
};

} // namespace openapi