#include "gtest/gtest.h"

#include "PluginConfigLinux.h"

TEST(PluginConfigLinux, Deserialize)
{
    // TODO: generate test content
    openapi::PluginConfigLinux x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}