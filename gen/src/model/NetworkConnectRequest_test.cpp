#include "gtest/gtest.h"

#include "NetworkConnectRequest.h"

TEST(NetworkConnectRequest, Deserialize)
{
    // TODO: generate test content
    openapi::NetworkConnectRequest x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}