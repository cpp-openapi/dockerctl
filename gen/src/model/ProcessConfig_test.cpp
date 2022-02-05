#include "gtest/gtest.h"

#include "ProcessConfig.h"

TEST(ProcessConfig, Deserialize)
{
    // TODO: generate test content
    openapi::ProcessConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}