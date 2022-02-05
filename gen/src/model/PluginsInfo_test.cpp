#include "gtest/gtest.h"

#include "PluginsInfo.h"

TEST(PluginsInfo, Deserialize)
{
    // TODO: generate test content
    openapi::PluginsInfo x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}