#include "gtest/gtest.h"

#include "ContainerUpdateResponse.h"

TEST(ContainerUpdateResponse, Deserialize)
{
    // TODO: generate test content
    openapi::ContainerUpdateResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}