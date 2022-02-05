#include "gtest/gtest.h"

#include "PluginPrivilege.h"

TEST(PluginPrivilege, Deserialize)
{
    // TODO: generate test content
    openapi::PluginPrivilege x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}