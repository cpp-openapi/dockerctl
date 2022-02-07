#pragma once
#include <optional>
#include "openapi/runtime/client.h"
#include "openapi/runtime/request.h"
#include "openapi/runtime/response.h"
#include "openapi/runtime/auth.h"
#include "ErrorResponse.h"
#include "Swarm.h"
#include "SwarmInitRequest.h"
#include "SwarmJoinRequest.h"
#include "SwarmSpec.h"
#include "SwarmUnlockRequest.h"
#include "UnlockKeyResponse.h"


namespace openapi {


// class name SwarmApi


struct swarmInitParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<std::shared_ptr<SwarmInitRequest>> body;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct swarmInitResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const swarmInitResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const swarmInitResponse& resp);

struct swarmInspectParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct swarmInspectResponse {
    std::optional<Swarm> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const swarmInspectResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const swarmInspectResponse& resp);

struct swarmJoinParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<std::shared_ptr<SwarmJoinRequest>> body;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct swarmJoinResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const swarmJoinResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const swarmJoinResponse& resp);

struct swarmLeaveParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<bool> force;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct swarmLeaveResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const swarmLeaveResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const swarmLeaveResponse& resp);

struct swarmUnlockParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<std::shared_ptr<SwarmUnlockRequest>> body;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct swarmUnlockResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const swarmUnlockResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const swarmUnlockResponse& resp);

struct swarmUnlockkeyParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct swarmUnlockkeyResponse {
    std::optional<UnlockKeyResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const swarmUnlockkeyResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const swarmUnlockkeyResponse& resp);

struct swarmUpdateParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<int> version;
    std::optional<std::shared_ptr<SwarmSpec>> body;
    std::optional<bool> rotateWorkerToken;
    std::optional<bool> rotateManagerToken;
    std::optional<bool> rotateManagerUnlockKey;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct swarmUpdateResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const swarmUpdateResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const swarmUpdateResponse& resp);

class SwarmApiService{
public:
    SwarmApiService(std::shared_ptr<IClient> cli):_cli(cli) {};
    void SetDefaultAuth(AuthInfoWriter auth);
    swarmInitResponse swarmInit(swarmInitParams params);
    swarmInspectResponse swarmInspect(swarmInspectParams params);
    swarmJoinResponse swarmJoin(swarmJoinParams params);
    swarmLeaveResponse swarmLeave(swarmLeaveParams params);
    swarmUnlockResponse swarmUnlock(swarmUnlockParams params);
    swarmUnlockkeyResponse swarmUnlockkey(swarmUnlockkeyParams params);
    swarmUpdateResponse swarmUpdate(swarmUpdateParams params);

private:
    std::shared_ptr<IClient> _cli;
    AuthInfoWriter _auth = nullptr;
};

} // namespace openapi