#include "gtest/gtest.h"

#include "ExecStartConfig.h"

TEST(ExecStartConfig, Deserialize)
{
    // TODO: generate test content
    openapi::ExecStartConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}