#include "gtest/gtest.h"

#include "AuthConfig.h"

TEST(AuthConfig, Deserialize)
{
    // TODO: generate test content
    openapi::AuthConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}