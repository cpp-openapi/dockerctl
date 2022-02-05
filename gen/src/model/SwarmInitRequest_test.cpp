#include "gtest/gtest.h"

#include "SwarmInitRequest.h"

TEST(SwarmInitRequest, Deserialize)
{
    // TODO: generate test content
    openapi::SwarmInitRequest x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}