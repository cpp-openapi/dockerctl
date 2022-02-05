#include "gtest/gtest.h"

#include "BuildPruneResponse.h"

TEST(BuildPruneResponse, Deserialize)
{
    // TODO: generate test content
    openapi::BuildPruneResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}