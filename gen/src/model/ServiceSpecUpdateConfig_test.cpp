#include "gtest/gtest.h"

#include "ServiceSpecUpdateConfig.h"

TEST(ServiceSpecUpdateConfig, Deserialize)
{
    // TODO: generate test content
    openapi::ServiceSpecUpdateConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}