#include "gtest/gtest.h"

#include "PluginSettings.h"

TEST(PluginSettings, Deserialize)
{
    // TODO: generate test content
    openapi::PluginSettings x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}