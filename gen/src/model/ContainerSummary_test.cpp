#include "gtest/gtest.h"

#include "ContainerSummary.h"

TEST(ContainerSummary, Deserialize)
{
    // TODO: generate test content
    openapi::ContainerSummary x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}