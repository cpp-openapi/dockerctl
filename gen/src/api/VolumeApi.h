#pragma once
#include <optional>
#include "openapi/runtime/client.h"
#include "openapi/runtime/request.h"
#include "openapi/runtime/response.h"
#include "openapi/runtime/auth.h"
#include "ErrorResponse.h"
#include "Volume.h"
#include "VolumeConfig.h"
#include "VolumeListResponse.h"
#include "VolumePruneResponse.h"


namespace openapi {


// class name VolumeApi


struct volumeCreateParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<std::shared_ptr<VolumeConfig>> volumeConfig;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct volumeCreateResponse {
    std::optional<Volume> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const volumeCreateResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const volumeCreateResponse& resp);

struct volumeDeleteParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    std::optional<bool> force;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct volumeDeleteResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const volumeDeleteResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const volumeDeleteResponse& resp);

struct volumeInspectParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> name;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct volumeInspectResponse {
    std::optional<Volume> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const volumeInspectResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const volumeInspectResponse& resp);

struct volumeListParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> filters;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct volumeListResponse {
    std::optional<VolumeListResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const volumeListResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const volumeListResponse& resp);

struct volumePruneParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> filters;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct volumePruneResponse {
    std::optional<VolumePruneResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const volumePruneResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const volumePruneResponse& resp);

class VolumeApiService{
public:
    VolumeApiService(std::shared_ptr<IClient> cli):_cli(cli) {};
    void SetDefaultAuth(AuthInfoWriter auth);
    volumeCreateResponse volumeCreate(volumeCreateParams params);
    volumeDeleteResponse volumeDelete(volumeDeleteParams params);
    volumeInspectResponse volumeInspect(volumeInspectParams params);
    volumeListResponse volumeList(volumeListParams params);
    volumePruneResponse volumePrune(volumePruneParams params);

private:
    std::shared_ptr<IClient> _cli;
    AuthInfoWriter _auth = nullptr;
};

} // namespace openapi