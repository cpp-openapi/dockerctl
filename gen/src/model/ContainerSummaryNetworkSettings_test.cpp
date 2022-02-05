#include "gtest/gtest.h"

#include "ContainerSummaryNetworkSettings.h"

TEST(ContainerSummaryNetworkSettings, Deserialize)
{
    // TODO: generate test content
    openapi::ContainerSummaryNetworkSettings x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}