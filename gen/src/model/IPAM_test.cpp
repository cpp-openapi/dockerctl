#include "gtest/gtest.h"

#include "IPAM.h"

TEST(IPAM, Deserialize)
{
    // TODO: generate test content
    openapi::IPAM x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}