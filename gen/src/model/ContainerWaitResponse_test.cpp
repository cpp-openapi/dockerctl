#include "gtest/gtest.h"

#include "ContainerWaitResponse.h"

TEST(ContainerWaitResponse, Deserialize)
{
    // TODO: generate test content
    openapi::ContainerWaitResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}