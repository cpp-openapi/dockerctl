#include "gtest/gtest.h"

#include "PluginEnv.h"

TEST(PluginEnv, Deserialize)
{
    // TODO: generate test content
    openapi::PluginEnv x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}