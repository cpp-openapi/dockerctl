#include "gtest/gtest.h"

#include "NetworkSettings.h"

TEST(NetworkSettings, Deserialize)
{
    // TODO: generate test content
    openapi::NetworkSettings x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}