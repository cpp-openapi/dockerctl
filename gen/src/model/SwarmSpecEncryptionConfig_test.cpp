#include "gtest/gtest.h"

#include "SwarmSpecEncryptionConfig.h"

TEST(SwarmSpecEncryptionConfig, Deserialize)
{
    // TODO: generate test content
    openapi::SwarmSpecEncryptionConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}