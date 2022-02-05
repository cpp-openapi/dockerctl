#include "gtest/gtest.h"

#include "HealthConfig.h"

TEST(HealthConfig, Deserialize)
{
    // TODO: generate test content
    openapi::HealthConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}