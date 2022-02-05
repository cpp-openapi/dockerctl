#include "gtest/gtest.h"

#include "NetworkContainer.h"

TEST(NetworkContainer, Deserialize)
{
    // TODO: generate test content
    openapi::NetworkContainer x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}