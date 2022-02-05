#include "gtest/gtest.h"

#include "Network.h"

TEST(Network, Deserialize)
{
    // TODO: generate test content
    openapi::Network x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}