#include "gtest/gtest.h"

#include "PluginConfig.h"

TEST(PluginConfig, Deserialize)
{
    // TODO: generate test content
    openapi::PluginConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}