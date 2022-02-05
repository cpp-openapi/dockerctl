#include "gtest/gtest.h"

#include "SystemVersionPlatform.h"

TEST(SystemVersionPlatform, Deserialize)
{
    // TODO: generate test content
    openapi::SystemVersionPlatform x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}