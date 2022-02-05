#include "gtest/gtest.h"

#include "SystemVersionComponents.h"

TEST(SystemVersionComponents, Deserialize)
{
    // TODO: generate test content
    openapi::SystemVersionComponents x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}