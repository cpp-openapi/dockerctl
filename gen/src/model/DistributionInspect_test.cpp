#include "gtest/gtest.h"

#include "DistributionInspect.h"

TEST(DistributionInspect, Deserialize)
{
    // TODO: generate test content
    openapi::DistributionInspect x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}