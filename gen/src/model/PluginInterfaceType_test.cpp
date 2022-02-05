#include "gtest/gtest.h"

#include "PluginInterfaceType.h"

TEST(PluginInterfaceType, Deserialize)
{
    // TODO: generate test content
    openapi::PluginInterfaceType x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}