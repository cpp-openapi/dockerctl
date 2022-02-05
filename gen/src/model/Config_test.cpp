#include "gtest/gtest.h"

#include "Config.h"

TEST(Config, Deserialize)
{
    // TODO: generate test content
    openapi::Config x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}