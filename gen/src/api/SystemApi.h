#pragma once
#include <optional>
#include "openapi/runtime/client.h"
#include "openapi/runtime/request.h"
#include "openapi/runtime/response.h"
#include "openapi/runtime/auth.h"
#include "AuthConfig.h"
#include "ErrorResponse.h"
#include "EventMessage.h"
#include "SystemAuthResponse.h"
#include "SystemDataUsageResponse.h"
#include "SystemInfo.h"
#include "SystemVersion.h"


namespace openapi {


// class name SystemApi


struct systemAuthParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<std::shared_ptr<AuthConfig>> authConfig;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct systemAuthResponse {
    std::optional<SystemAuthResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const systemAuthResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const systemAuthResponse& resp);

struct systemDataUsageParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<std::vector<openapi::string_t>> type;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct systemDataUsageResponse {
    std::optional<SystemDataUsageResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const systemDataUsageResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const systemDataUsageResponse& resp);

struct systemEventsParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> since;
    std::optional<openapi::string_t> until;
    std::optional<openapi::string_t> filters;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct systemEventsResponse {
    std::optional<EventMessage> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const systemEventsResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const systemEventsResponse& resp);

struct systemInfoParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct systemInfoResponse {
    std::optional<SystemInfo> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const systemInfoResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const systemInfoResponse& resp);

struct systemPingParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct systemPingResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const systemPingResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const systemPingResponse& resp);

struct systemPingHeadParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct systemPingHeadResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const systemPingHeadResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const systemPingHeadResponse& resp);

struct systemVersionParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct systemVersionResponse {
    std::optional<SystemVersion> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const systemVersionResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const systemVersionResponse& resp);

class SystemApiService{
public:
    SystemApiService(std::shared_ptr<IClient> cli):_cli(cli) {};
    void SetDefaultAuth(AuthInfoWriter auth);
    systemAuthResponse systemAuth(systemAuthParams params);
    systemDataUsageResponse systemDataUsage(systemDataUsageParams params);
    systemEventsResponse systemEvents(systemEventsParams params);
    systemInfoResponse systemInfo(systemInfoParams params);
    systemPingResponse systemPing(systemPingParams params);
    systemPingHeadResponse systemPingHead(systemPingHeadParams params);
    systemVersionResponse systemVersion(systemVersionParams params);

private:
    std::shared_ptr<IClient> _cli;
    AuthInfoWriter _auth = nullptr;
};

} // namespace openapi