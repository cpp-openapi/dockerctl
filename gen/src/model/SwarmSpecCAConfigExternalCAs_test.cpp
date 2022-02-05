#include "gtest/gtest.h"

#include "SwarmSpecCAConfigExternalCAs.h"

TEST(SwarmSpecCAConfigExternalCAs, Deserialize)
{
    // TODO: generate test content
    openapi::SwarmSpecCAConfigExternalCAs x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}