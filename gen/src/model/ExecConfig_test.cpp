#include "gtest/gtest.h"

#include "ExecConfig.h"

TEST(ExecConfig, Deserialize)
{
    // TODO: generate test content
    openapi::ExecConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}