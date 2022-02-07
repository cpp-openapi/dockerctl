#pragma once
#include <optional>
#include "openapi/runtime/client.h"
#include "openapi/runtime/request.h"
#include "openapi/runtime/response.h"
#include "openapi/runtime/auth.h"
#include "ErrorResponse.h"
#include "Node.h"
#include "NodeSpec.h"


namespace openapi {


// class name NodeApi


struct nodeDeleteParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<bool> force;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct nodeDeleteResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const nodeDeleteResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const nodeDeleteResponse& resp);

struct nodeInspectParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct nodeInspectResponse {
    std::optional<Node> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const nodeInspectResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const nodeInspectResponse& resp);

struct nodeListParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> filters;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct nodeListResponse {
    std::optional<std::vector<Node>> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const nodeListResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const nodeListResponse& resp);

struct nodeUpdateParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<int> version;
    std::optional<std::shared_ptr<NodeSpec>> body;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct nodeUpdateResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const nodeUpdateResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const nodeUpdateResponse& resp);

class NodeApiService{
public:
    NodeApiService(std::shared_ptr<IClient> cli):_cli(cli) {};
    void SetDefaultAuth(AuthInfoWriter auth);
    nodeDeleteResponse nodeDelete(nodeDeleteParams params);
    nodeInspectResponse nodeInspect(nodeInspectParams params);
    nodeListResponse nodeList(nodeListParams params);
    nodeUpdateResponse nodeUpdate(nodeUpdateParams params);

private:
    std::shared_ptr<IClient> _cli;
    AuthInfoWriter _auth = nullptr;
};

} // namespace openapi