#include "gtest/gtest.h"

#include "Swarm.h"

TEST(Swarm, Deserialize)
{
    // TODO: generate test content
    openapi::Swarm x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}