#include "gtest/gtest.h"

#include "ContainerInspectResponse.h"

TEST(ContainerInspectResponse, Deserialize)
{
    // TODO: generate test content
    openapi::ContainerInspectResponse x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}