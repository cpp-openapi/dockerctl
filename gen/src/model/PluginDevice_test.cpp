#include "gtest/gtest.h"

#include "PluginDevice.h"

TEST(PluginDevice, Deserialize)
{
    // TODO: generate test content
    openapi::PluginDevice x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}