#pragma once
#include <optional>
#include "openapi/runtime/client.h"
#include "openapi/runtime/request.h"
#include "openapi/runtime/response.h"
#include "openapi/runtime/auth.h"
#include "ErrorResponse.h"
#include "IdResponse.h"
#include "Secret.h"
#include "SecretSpec.h"


namespace openapi {


// class name SecretApi


struct secretCreateParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<std::shared_ptr<SecretSpec>> body;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct secretCreateResponse {
    std::optional<IdResponse> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const secretCreateResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const secretCreateResponse& resp);

struct secretDeleteParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct secretDeleteResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const secretDeleteResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const secretDeleteResponse& resp);

struct secretInspectParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct secretInspectResponse {
    std::optional<Secret> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const secretInspectResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const secretInspectResponse& resp);

struct secretListParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> filters;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct secretListResponse {
    std::optional<std::vector<Secret>> payload;
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const secretListResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const secretListResponse& resp);

struct secretUpdateParams {
    static std::string const ContentType;
    static std::string const PathPattern;
    static std::string const Method;
    std::optional<openapi::string_t> id;
    std::optional<int> version;
    std::optional<std::shared_ptr<SecretSpec>> body;
    void WriteParams(std::shared_ptr<IOASClientRequest> req) const;
};

struct secretUpdateResponse {
    // no return type
    int code;
    void ReadResponse(std::shared_ptr<IOASClientResponse> resp);
    friend std::ostream& operator<<(std::ostream& os, const secretUpdateResponse& resp);
};

std::ostream& operator<<(std::ostream& os, const secretUpdateResponse& resp);

class SecretApiService{
public:
    SecretApiService(std::shared_ptr<IClient> cli):_cli(cli) {};
    void SetDefaultAuth(AuthInfoWriter auth);
    secretCreateResponse secretCreate(secretCreateParams params);
    secretDeleteResponse secretDelete(secretDeleteParams params);
    secretInspectResponse secretInspect(secretInspectParams params);
    secretListResponse secretList(secretListParams params);
    secretUpdateResponse secretUpdate(secretUpdateParams params);

private:
    std::shared_ptr<IClient> _cli;
    AuthInfoWriter _auth = nullptr;
};

} // namespace openapi