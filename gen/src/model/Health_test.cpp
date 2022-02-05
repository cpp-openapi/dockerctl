#include "gtest/gtest.h"

#include "Health.h"

TEST(Health, Deserialize)
{
    // TODO: generate test content
    openapi::Health x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}