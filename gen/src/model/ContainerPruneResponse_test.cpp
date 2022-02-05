#include "gtest/gtest.h"

#include "ContainerPruneResponse.h"

TEST(ContainerPruneResponse, Deserialize)
{
    // TODO: generate test content
    openapi::ContainerPruneResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}