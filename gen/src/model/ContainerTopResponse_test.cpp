#include "gtest/gtest.h"

#include "ContainerTopResponse.h"

TEST(ContainerTopResponse, Deserialize)
{
    // TODO: generate test content
    openapi::ContainerTopResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}