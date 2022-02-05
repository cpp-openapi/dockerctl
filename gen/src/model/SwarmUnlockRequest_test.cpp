#include "gtest/gtest.h"

#include "SwarmUnlockRequest.h"

TEST(SwarmUnlockRequest, Deserialize)
{
    // TODO: generate test content
    openapi::SwarmUnlockRequest x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}