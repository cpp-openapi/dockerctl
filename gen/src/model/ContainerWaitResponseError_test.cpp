#include "gtest/gtest.h"

#include "ContainerWaitResponseError.h"

TEST(ContainerWaitResponseError, Deserialize)
{
    // TODO: generate test content
    openapi::ContainerWaitResponseError x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}