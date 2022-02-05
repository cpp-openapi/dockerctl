#include "gtest/gtest.h"

#include "HealthcheckResult.h"

TEST(HealthcheckResult, Deserialize)
{
    // TODO: generate test content
    openapi::HealthcheckResult x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}