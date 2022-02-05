#include "gtest/gtest.h"

#include "HostConfigAllOf.h"

TEST(HostConfigAllOf, Deserialize)
{
    // TODO: generate test content
    openapi::HostConfigAllOf x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}