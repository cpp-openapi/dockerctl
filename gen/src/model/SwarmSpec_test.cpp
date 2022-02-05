#include "gtest/gtest.h"

#include "SwarmSpec.h"

TEST(SwarmSpec, Deserialize)
{
    // TODO: generate test content
    openapi::SwarmSpec x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}