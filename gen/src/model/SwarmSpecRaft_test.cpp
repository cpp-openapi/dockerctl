#include "gtest/gtest.h"

#include "SwarmSpecRaft.h"

TEST(SwarmSpecRaft, Deserialize)
{
    // TODO: generate test content
    openapi::SwarmSpecRaft x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}