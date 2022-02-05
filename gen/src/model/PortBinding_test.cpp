#include "gtest/gtest.h"

#include "PortBinding.h"

TEST(PortBinding, Deserialize)
{
    // TODO: generate test content
    openapi::PortBinding x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}