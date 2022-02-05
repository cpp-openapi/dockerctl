#include "gtest/gtest.h"

#include "SystemAuthResponse.h"

TEST(SystemAuthResponse, Deserialize)
{
    // TODO: generate test content
    openapi::SystemAuthResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}