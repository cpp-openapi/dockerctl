#include "gtest/gtest.h"

#include "ContainerConfig.h"

TEST(ContainerConfig, Deserialize)
{
    // TODO: generate test content
    openapi::ContainerConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}