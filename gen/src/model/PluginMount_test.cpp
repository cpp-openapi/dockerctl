#include "gtest/gtest.h"

#include "PluginMount.h"

TEST(PluginMount, Deserialize)
{
    // TODO: generate test content
    openapi::PluginMount x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}