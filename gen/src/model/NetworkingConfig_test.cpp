#include "gtest/gtest.h"

#include "NetworkingConfig.h"

TEST(NetworkingConfig, Deserialize)
{
    // TODO: generate test content
    openapi::NetworkingConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}