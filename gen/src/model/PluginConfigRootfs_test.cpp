#include "gtest/gtest.h"

#include "PluginConfigRootfs.h"

TEST(PluginConfigRootfs, Deserialize)
{
    // TODO: generate test content
    openapi::PluginConfigRootfs x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}