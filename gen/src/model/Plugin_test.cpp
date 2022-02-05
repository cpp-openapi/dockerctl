#include "gtest/gtest.h"

#include "Plugin.h"

TEST(Plugin, Deserialize)
{
    // TODO: generate test content
    openapi::Plugin x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}