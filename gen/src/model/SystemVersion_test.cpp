#include "gtest/gtest.h"

#include "SystemVersion.h"

TEST(SystemVersion, Deserialize)
{
    // TODO: generate test content
    openapi::SystemVersion x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}