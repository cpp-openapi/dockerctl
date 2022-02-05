#include "gtest/gtest.h"

#include "Volume.h"

TEST(Volume, Deserialize)
{
    // TODO: generate test content
    openapi::Volume x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}