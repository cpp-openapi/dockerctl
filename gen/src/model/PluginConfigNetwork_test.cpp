#include "gtest/gtest.h"

#include "PluginConfigNetwork.h"

TEST(PluginConfigNetwork, Deserialize)
{
    // TODO: generate test content
    openapi::PluginConfigNetwork x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}