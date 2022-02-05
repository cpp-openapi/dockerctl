#include "gtest/gtest.h"

#include "ContainerCreateResponse.h"

TEST(ContainerCreateResponse, Deserialize)
{
    // TODO: generate test content
    openapi::ContainerCreateResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}