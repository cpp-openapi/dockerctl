#include "gtest/gtest.h"

#include "ServiceEndpointVirtualIPs.h"

TEST(ServiceEndpointVirtualIPs, Deserialize)
{
    // TODO: generate test content
    openapi::ServiceEndpointVirtualIPs x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}