#pragma once
#include <optional>
#include "openapi/runtime/client.h"
#include "openapi/runtime/request.h"
#include "openapi/runtime/response.h"
#include "openapi/runtime/auth.h"
#include "ErrorResponse.h"
#include "Network.h"
#include "NetworkConnectRequest.h"
#include "NetworkCreateRequest.h"
#include "NetworkCreateResponse.h"
#include "NetworkDisconnectRequest.h"
#include "NetworkPruneResponse.h"


namespace openapi {


// class name NetworkApi


struct networkConnectParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<std::shared_ptr<NetworkConnectRequest>> container;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct networkConnectResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const networkConnectResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const networkConnectResponse& resp);

struct networkCreateParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<std::shared_ptr<NetworkCreateRequest>> networkConfig;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct networkCreateResponse {
    std::optional<NetworkCreateResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const networkCreateResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const networkCreateResponse& resp);

struct networkDeleteParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct networkDeleteResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const networkDeleteResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const networkDeleteResponse& resp);

struct networkDisconnectParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<std::shared_ptr<NetworkDisconnectRequest>> container;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct networkDisconnectResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const networkDisconnectResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const networkDisconnectResponse& resp);

struct networkInspectParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<bool> verbose;
    std::optional<openapi::string_t> scope;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct networkInspectResponse {
    std::optional<Network> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const networkInspectResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const networkInspectResponse& resp);

struct networkListParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> filters;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct networkListResponse {
    std::optional<std::vector<Network>> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const networkListResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const networkListResponse& resp);

struct networkPruneParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> filters;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct networkPruneResponse {
    std::optional<NetworkPruneResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const networkPruneResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const networkPruneResponse& resp);

class NetworkApiService{
public:
    NetworkApiService(std::shared_ptr<IClient> cli):_cli(cli) {};
    void SetDefaultAuth(AuthInfoWriter auth);
    networkConnectResponse networkConnect(networkConnectParams params);
    networkCreateResponse networkCreate(networkCreateParams params);
    networkDeleteResponse networkDelete(networkDeleteParams params);
    networkDisconnectResponse networkDisconnect(networkDisconnectParams params);
    networkInspectResponse networkInspect(networkInspectParams params);
    networkListResponse networkList(networkListParams params);
    networkPruneResponse networkPrune(networkPruneParams params);

private:
    std::shared_ptr<IClient> _cli;
    AuthInfoWriter _auth = nullptr;
};

} // namespace openapi