#include "gtest/gtest.h"

#include "RegistryServiceConfig.h"

TEST(RegistryServiceConfig, Deserialize)
{
    // TODO: generate test content
    openapi::RegistryServiceConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}