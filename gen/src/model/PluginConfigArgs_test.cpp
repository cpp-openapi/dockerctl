#include "gtest/gtest.h"

#include "PluginConfigArgs.h"

TEST(PluginConfigArgs, Deserialize)
{
    // TODO: generate test content
    openapi::PluginConfigArgs x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}