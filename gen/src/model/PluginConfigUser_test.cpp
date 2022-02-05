#include "gtest/gtest.h"

#include "PluginConfigUser.h"

TEST(PluginConfigUser, Deserialize)
{
    // TODO: generate test content
    openapi::PluginConfigUser x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}