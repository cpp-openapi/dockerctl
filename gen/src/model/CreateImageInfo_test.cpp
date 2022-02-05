#include "gtest/gtest.h"

#include "CreateImageInfo.h"

TEST(CreateImageInfo, Deserialize)
{
    // TODO: generate test content
    openapi::CreateImageInfo x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}