#include "gtest/gtest.h"

#include "ContainerSummaryHostConfig.h"

TEST(ContainerSummaryHostConfig, Deserialize)
{
    // TODO: generate test content
    openapi::ContainerSummaryHostConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}