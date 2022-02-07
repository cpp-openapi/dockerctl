#pragma once
#include <optional>
#include "openapi/runtime/client.h"
#include "openapi/runtime/request.h"
#include "openapi/runtime/response.h"
#include "openapi/runtime/auth.h"
#include "ErrorResponse.h"
#include "Service.h"
#include "ServiceCreateResponse.h"
#include "ServiceSpec.h"
#include "ServiceUpdateResponse.h"


namespace openapi {


// class name ServiceApi


struct serviceCreateParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<std::shared_ptr<ServiceSpec>> body;
    std::optional<openapi::string_t> xRegistryAuth;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct serviceCreateResponse {
    std::optional<ServiceCreateResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const serviceCreateResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const serviceCreateResponse& resp);

struct serviceDeleteParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct serviceDeleteResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const serviceDeleteResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const serviceDeleteResponse& resp);

struct serviceInspectParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<bool> insertDefaults;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct serviceInspectResponse {
    std::optional<Service> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const serviceInspectResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const serviceInspectResponse& resp);

struct serviceListParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> filters;
    std::optional<bool> status;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct serviceListResponse {
    std::optional<std::vector<Service>> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const serviceListResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const serviceListResponse& resp);

struct serviceLogsParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<bool> details;
    std::optional<bool> follow;
    std::optional<bool> stdout;
    std::optional<bool> stderr;
    std::optional<int> since;
    std::optional<bool> timestamps;
    std::optional<openapi::string_t> tail;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct serviceLogsResponse {
    std::optional<openapi::string_t> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const serviceLogsResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const serviceLogsResponse& resp);

struct serviceUpdateParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<int> version;
    std::optional<std::shared_ptr<ServiceSpec>> body;
    std::optional<openapi::string_t> registryAuthFrom;
    std::optional<openapi::string_t> rollback;
    std::optional<openapi::string_t> xRegistryAuth;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct serviceUpdateResponse {
    std::optional<ServiceUpdateResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const serviceUpdateResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const serviceUpdateResponse& resp);

class ServiceApiService{
public:
    ServiceApiService(std::shared_ptr<IClient> cli):_cli(cli) {};
    void SetDefaultAuth(AuthInfoWriter auth);
    serviceCreateResponse serviceCreate(serviceCreateParams params);
    serviceDeleteResponse serviceDelete(serviceDeleteParams params);
    serviceInspectResponse serviceInspect(serviceInspectParams params);
    serviceListResponse serviceList(serviceListParams params);
    serviceLogsResponse serviceLogs(serviceLogsParams params);
    serviceUpdateResponse serviceUpdate(serviceUpdateParams params);

private:
    std::shared_ptr<IClient> _cli;
    AuthInfoWriter _auth = nullptr;
};

} // namespace openapi