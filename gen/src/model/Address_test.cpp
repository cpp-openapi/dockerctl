#include "gtest/gtest.h"

#include "Address.h"

TEST(Address, Deserialize)
{
    // TODO: generate test content
    openapi::Address x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}