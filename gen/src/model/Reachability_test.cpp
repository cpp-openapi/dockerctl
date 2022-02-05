#include "gtest/gtest.h"

#include "Reachability.h"

TEST(Reachability, Deserialize)
{
    // TODO: generate test content
    openapi::Reachability x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}