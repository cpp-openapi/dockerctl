#include "gtest/gtest.h"

#include "ContainerChangeResponseItem.h"

TEST(ContainerChangeResponseItem, Deserialize)
{
    // TODO: generate test content
    openapi::ContainerChangeResponseItem x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}