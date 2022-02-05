#include "gtest/gtest.h"

#include "ConfigSpec.h"

TEST(ConfigSpec, Deserialize)
{
    // TODO: generate test content
    openapi::ConfigSpec x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}