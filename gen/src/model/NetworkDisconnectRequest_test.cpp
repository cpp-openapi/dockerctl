#include "gtest/gtest.h"

#include "NetworkDisconnectRequest.h"

TEST(NetworkDisconnectRequest, Deserialize)
{
    // TODO: generate test content
    openapi::NetworkDisconnectRequest x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}