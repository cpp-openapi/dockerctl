#include "gtest/gtest.h"

#include "SwarmJoinRequest.h"

TEST(SwarmJoinRequest, Deserialize)
{
    // TODO: generate test content
    openapi::SwarmJoinRequest x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}