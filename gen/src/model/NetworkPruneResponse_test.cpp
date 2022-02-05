#include "gtest/gtest.h"

#include "NetworkPruneResponse.h"

TEST(NetworkPruneResponse, Deserialize)
{
    // TODO: generate test content
    openapi::NetworkPruneResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}