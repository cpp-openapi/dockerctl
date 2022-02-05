#include "gtest/gtest.h"

#include "Port.h"

TEST(Port, Deserialize)
{
    // TODO: generate test content
    openapi::Port x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}