#include "gtest/gtest.h"

#include "Driver.h"

TEST(Driver, Deserialize)
{
    // TODO: generate test content
    openapi::Driver x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}