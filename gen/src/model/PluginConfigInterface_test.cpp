#include "gtest/gtest.h"

#include "PluginConfigInterface.h"

TEST(PluginConfigInterface, Deserialize)
{
    // TODO: generate test content
    openapi::PluginConfigInterface x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}