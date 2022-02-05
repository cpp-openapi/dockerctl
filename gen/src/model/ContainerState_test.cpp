#include "gtest/gtest.h"

#include "ContainerState.h"

TEST(ContainerState, Deserialize)
{
    // TODO: generate test content
    openapi::ContainerState x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}