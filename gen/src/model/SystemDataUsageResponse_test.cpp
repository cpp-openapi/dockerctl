#include "gtest/gtest.h"

#include "SystemDataUsageResponse.h"

TEST(SystemDataUsageResponse, Deserialize)
{
    // TODO: generate test content
    openapi::SystemDataUsageResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}