#pragma once

#include "curlppclient.h"
#include <memory>

inline std::shared_ptr<IClient> GetTestClient()
{
    ClientConfig cfg = {
            "localhost",
            "12345",
            "/",
            };
        
    std::shared_ptr<CurlPPClient> c = std::make_shared<CurlPPClient>(cfg);
    c->SetDebug(true);
    return c;
}
